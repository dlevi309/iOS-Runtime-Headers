/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSDictionary;


@protocol AVVideoCompositing <NSObject>
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@property (nonatomic,readonly) BOOL supportsHDRSourceFrames; 
@optional
-(BOOL)supportsHDRSourceFrames;
-(void)cancelAllPendingVideoCompositionRequests;
-(void)anticipateRenderingUsingHint:(id)arg1;
-(void)prerollForRenderingUsingHint:(id)arg1;
-(BOOL)supportsWideColorSourceFrames;

@required
-(void)startVideoCompositionRequest:(id)arg1;
-(void)renderContextChanged:(id)arg1;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(NSDictionary *)sourcePixelBufferAttributes;

@end

