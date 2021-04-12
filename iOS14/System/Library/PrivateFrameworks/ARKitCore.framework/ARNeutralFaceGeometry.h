/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARNeutralFaceGeometry : NSObject {

	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _verticesVector;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _texCoordinatesVector;
	vector<short, std::__1::allocator<short> >* _trianglesIndicesVector;

}
+(id)sharedNeutralGeometry;
-(unsigned long long)vertexCount;
-(const 1*)textureCoordinates;
-(unsigned long long)triangleCount;
-(const 1*)vertices;
-(const short*)triangleIndices;
-(unsigned long long)textureCoordinateCount;
-(id)initFromFaceKitSemantics;
@end

