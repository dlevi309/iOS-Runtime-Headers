/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

@class CAMetalLayer;


@protocol CAMetalDrawable <MTLDrawable>
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
@required
-(id<MTLTexture>)texture;
-(CAMetalLayer *)layer;

@end

