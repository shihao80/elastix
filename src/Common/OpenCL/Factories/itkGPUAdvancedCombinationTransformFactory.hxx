/*=========================================================================
 *
 *  Copyright UMC Utrecht and contributors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef __itkGPUAdvancedCompositeTransformFactory_hxx
#define __itkGPUAdvancedCompositeTransformFactory_hxx

#include "itkGPUAdvancedCombinationTransformFactory.h"

namespace itk
{
template< typename NDimentions >
void
GPUAdvancedCombinationTransformFactory2< NDimentions >::RegisterOneFactory()
{
  typedef GPUAdvancedCombinationTransformFactory2< NDimentions > GPUTransformFactoryType;
  typename GPUTransformFactoryType::Pointer factory = GPUTransformFactoryType::New();
  ObjectFactoryBase::RegisterFactory( factory );
}


//------------------------------------------------------------------------------
template< typename NDimentions >
GPUAdvancedCombinationTransformFactory2< NDimentions >::GPUAdvancedCombinationTransformFactory2()
{
  this->RegisterAll();
}


//------------------------------------------------------------------------------
template< typename NDimentions >
void
GPUAdvancedCombinationTransformFactory2< NDimentions >
::Register1D()
{
  // Define visitor and perform factory registration
  typelist::VisitDimension< RealTypeList, 1 > visitor;
  visitor( *this );
}


//------------------------------------------------------------------------------
template< typename NDimentions >
void
GPUAdvancedCombinationTransformFactory2< NDimentions >
::Register2D()
{
  // Define visitor and perform factory registration
  typelist::VisitDimension< RealTypeList, 2 > visitor;
  visitor( *this );
}


//------------------------------------------------------------------------------
template< typename NDimentions >
void
GPUAdvancedCombinationTransformFactory2< NDimentions >
::Register3D()
{
  // Define visitor and perform factory registration
  typelist::VisitDimension< RealTypeList, 3 > visitor;
  visitor( *this );
}


} // namespace itk

#endif // end #ifndef __itkGPUAdvancedCompositeTransformFactory_hxx