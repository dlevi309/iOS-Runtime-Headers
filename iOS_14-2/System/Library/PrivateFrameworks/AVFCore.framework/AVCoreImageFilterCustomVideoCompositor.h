/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVVideoCompositing.h>

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
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@property (nonatomic,readonly) BOOL supportsHDRSourceFrames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)startVideoCompositionRequest:(id)arg1 ;
-(BOOL)supportsHDRSourceFrames;
-(void)renderContextChanged:(id)arg1 ;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(void)cancelAllPendingVideoCompositionRequests;
-(BOOL)supportsWideColorSourceFrames;
-(NSDictionary *)sourcePixelBufferAttributes;
-(BOOL)shouldCancelAllRequests;
-(id)defaultCIContext;
-(NSObject*<OS_dispatch_group>)filteringRequestsInFlight;
-(void)setShouldCancelAllRequests:(BOOL)arg1 ;
-(void)_willDeallocOrFinalize;
-(void)dealloc;
@end

