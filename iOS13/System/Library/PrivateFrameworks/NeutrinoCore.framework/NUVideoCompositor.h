/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/AVVideoCompositing.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableSet, NSString;

@interface NUVideoCompositor : NSObject <AVVideoCompositing> {

	AQ _requestCounter;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	NSMutableSet* _inFlightRequests;
	os_unfair_lock_s _inFlightRequestsLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
-(id)init;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)renderContextChanged:(id)arg1 ;
-(void)startVideoCompositionRequest:(id)arg1 ;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(void)cancelAllPendingVideoCompositionRequests;
-(BOOL)supportsWideColorSourceFrames;
-(void)fulfillVideoCompositionRequest:(id)arg1 ;
-(BOOL)testAndSetVideoCompositionRequestFinished:(id)arg1 ;
-(id)videoFramesFromRequest:(id)arg1 ;
-(void)failVideoCompositionRequest:(id)arg1 error:(id)arg2 ;
@end

