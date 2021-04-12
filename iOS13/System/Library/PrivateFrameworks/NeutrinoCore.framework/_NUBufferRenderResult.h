/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NUImageRenderResult.h>
#import <libobjc.A.dylib/NUBufferRenderResult.h>

@protocol NUBufferImage;
@class NSString, NURegion, NUImageGeometry;

@interface _NUBufferRenderResult : _NUImageRenderResult <NUBufferRenderResult> {

	id<NUBufferImage> _image;

}

@property (retain) id<NUBufferImage> image;                          //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) NURegion * region; 
@property (readonly) NUImageGeometry * geometry; 
-(id<NUBufferImage>)image;
-(void)setImage:(id<NUBufferImage>)arg1 ;
@end

