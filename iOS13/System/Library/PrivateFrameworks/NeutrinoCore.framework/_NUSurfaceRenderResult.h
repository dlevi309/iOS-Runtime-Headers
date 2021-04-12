/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NUImageRenderResult.h>
#import <libobjc.A.dylib/NUSurfaceRenderResult.h>

@protocol NUSurfaceImage;
@class NSString, NURegion, NUImageGeometry;

@interface _NUSurfaceRenderResult : _NUImageRenderResult <NUSurfaceRenderResult> {

	id<NUSurfaceImage> _image;

}

@property (retain) id<NUSurfaceImage> image;                         //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) NURegion * region; 
@property (readonly) NUImageGeometry * geometry; 
-(NSString *)debugDescription;
-(id<NUSurfaceImage>)image;
-(void)setImage:(id<NUSurfaceImage>)arg1 ;
@end

