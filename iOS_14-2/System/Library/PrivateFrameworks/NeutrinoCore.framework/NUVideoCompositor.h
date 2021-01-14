/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/AVVideoCompositing.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableSet, NSString;

@interface NUVideoCompositor : NSObject <AVVideoCompositing> {

	AQ _requestCounter;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	NSMutableSet* _pendingRequests;
	os_unfair_lock_s _pendingRequestsLock;
	os_unfair_lock_s _renderingQueueInitializeLock;

}

@property (nonatomic,readonly) BOOL supportsHDRSourceFrames; 
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)startVideoCompositionRequest:(id)arg1 ;
-(BOOL)supportsHDRSourceFrames;
-(void)renderContextChanged:(id)arg1 ;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(void)cancelAllPendingVideoCompositionRequests;
-(BOOL)supportsWideColorSourceFrames;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)fulfillVideoCompositionRequest:(id)arg1 ;
-(id)standardPixelFormats:(long long)arg1 ;
-(id)hdrPixelFormats:(long long)arg1 ;
-(BOOL)testAndSetVideoCompositionRequestFinished:(id)arg1 ;
-(void)finishCompositionRequest:(id)arg1 withComposedVideoFrame:(CVBufferRef)arg2 ;
-(id)videoFramesFromRequest:(id)arg1 ;
-(void)setColorSpaceOfDestinationBuffer:(CVBufferRef)arg1 fromPrimarySourceBufferOfRequest:(id)arg2 ;
-(void)failVideoCompositionRequest:(id)arg1 error:(id)arg2 ;
@end

