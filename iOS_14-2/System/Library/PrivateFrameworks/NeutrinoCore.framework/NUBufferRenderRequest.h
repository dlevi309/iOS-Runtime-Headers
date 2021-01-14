/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUImageRenderRequest.h>

@interface NUBufferRenderRequest : NUImageRenderRequest

@property (assign) id<NUMutableBufferImage> targetBufferImage; 
-(void)submit:(/*^block*/id)arg1 ;
-(id)submitSynchronous:(out id*)arg1 ;
-(id)newRenderJob;
-(id<NUMutableBufferImage>)targetBufferImage;
-(void)setTargetBufferImage:(id<NUMutableBufferImage>)arg1 ;
@end

