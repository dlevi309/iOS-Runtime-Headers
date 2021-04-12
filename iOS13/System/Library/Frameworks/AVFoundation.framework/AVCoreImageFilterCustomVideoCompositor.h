/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVVideoCompositing.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSDictionary, NSObject, CIContext, NSString;

@interface AVCoreImageFilterCustomVideoCompositor : NSObject <AVVideoCompositing> {

	NSObject*<OS_dispatch_group> _filteringRequestsInFlight;
	BOOL _shouldCancelAllRequests;
	NSObject*<OS_dispatch_queue> _defaultCIContextThreadSafety;
	CIContext* _defaultCIContext;

}

@property (assign) BOOL shouldCancelAllRequests;                                                          //@synthesize shouldCancelAllRequests=_shouldCancelAllRequests - In the implementation block
@property (readonly) NSObject*<OS_dispatch_group> filteringRequestsInFlight;                              //@synthesize filteringRequestsInFlight=_filteringRequestsInFlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)renderContextChanged:(id)arg1 ;
-(void)startVideoCompositionRequest:(id)arg1 ;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(void)cancelAllPendingVideoCompositionRequests;
-(BOOL)supportsWideColorSourceFrames;
-(void)_willDeallocOrFinalize;
-(BOOL)shouldCancelAllRequests;
-(id)defaultCIContext;
-(NSObject*<OS_dispatch_group>)filteringRequestsInFlight;
-(void)setShouldCancelAllRequests:(BOOL)arg1 ;
@end

