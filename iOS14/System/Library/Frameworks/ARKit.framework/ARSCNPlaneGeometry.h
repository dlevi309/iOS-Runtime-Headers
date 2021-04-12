/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;
@interface ARSCNPlaneGeometry : SCNGeometry {

	id<MTLBuffer> _vertexBuffer;
	id<MTLBuffer> _textureCoordinateBuffer;

}
+(id)planeGeometryWithDevice:(id)arg1 ;
-(void)updateFromPlaneGeometry:(id)arg1 ;
@end

