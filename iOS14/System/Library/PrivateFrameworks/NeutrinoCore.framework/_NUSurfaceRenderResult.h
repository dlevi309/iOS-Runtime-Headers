/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NUImageRenderResult.h>
#import <libobjc.A.dylib/NUSurfaceRenderResult.h>

@protocol NUSurfaceImage;
@class NURegion, NUImageGeometry, NSString;

@interface _NUSurfaceRenderResult : _NUImageRenderResult <NUSurfaceRenderResult> {

	id<NUSurfaceImage> _image;

}

@property (retain) id<NUSurfaceImage> image;                         //@synthesize image=_image - In the implementation block
@property (readonly) NURegion * region; 
@property (readonly) NUImageGeometry * geometry; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(id<NUSurfaceImage>)arg1 ;
-(NSString *)debugDescription;
-(id<NUSurfaceImage>)image;
@end

