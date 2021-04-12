/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARNeutralFaceGeometry : NSObject {

	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _verticesVector;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _texCoordinatesVector;
	vector<short, std::__1::allocator<short> >* _trianglesIndicesVector;

}

@property (nonatomic,readonly) unsigned long long vertexCount; 
@property (nonatomic,readonly) const * vertices; 
@property (nonatomic,readonly) unsigned long long textureCoordinateCount; 
@property (nonatomic,readonly) const * textureCoordinates; 
@property (nonatomic,readonly) unsigned long long triangleCount; 
@property (nonatomic,readonly) const short* triangleIndices; 
+(id)sharedNeutralGeometry;
-(const *)vertices;
-(unsigned long long)vertexCount;
-(const *)textureCoordinates;
-(unsigned long long)triangleCount;
-(const short*)triangleIndices;
-(unsigned long long)textureCoordinateCount;
-(id)initFromFaceKitSemantics;
@end

