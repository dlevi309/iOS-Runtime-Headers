/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <PromotedContent/PromotedContent-Structs.h>
#import <PromotedContent/APPCBaseContext.h>
#import <libobjc.A.dylib/APPCPromotableContext.h>
#import <libobjc.A.dylib/APPCPromotableUIContext.h>
#import <libobjc.A.dylib/APPCMetricRegister.h>

@interface APPCContext : APPCBaseContext <APPCPromotableContext, APPCPromotableUIContext, APPCMetricRegister> {

	 inventoryLock;
	 inventory;
	 placeholdersLock;
	 placeholders;
	 lastError;
	 requester;
	 blacklistEvaluator;
	 pendingPrefetchedTypesLock;
	 pendingPrefetchedTypes;
	 newsContext;
	 contextQueue;

}
+(void)start;
+(void)cleanupWithIdentifier:(id)arg1 ;
-(id)promotedContentViewOfType:(long long)arg1 size:(CGSize)arg2 startsCollapsed:(BOOL)arg3 ;
-(id)promotedContentViewOfType:(long long)arg1 size:(CGSize)arg2 ;
-(id)promotedContentVideo;
-(id)nativePromotedContentViewWithInfo:(id)arg1 contentView:(id)arg2 size:(CGSize)arg3 ;
-(id)nativePromotedContentViewWithInfo:(id)arg1 contentView:(id)arg2 ;
-(id)promotedContentInterstitialWithSize:(CGSize)arg1 ;
-(id)promotedContentInterstitialViewWithInfo:(id)arg1 ;
-(void)intersititialReady:(/*^block*/id)arg1 ;
-(void)newNativeRequest:(id)arg1 ;
-(void)newPromotedContent:(id)arg1 ;
-(void)newInterstitialRequest:(id)arg1 ;
-(id)promotedContentInterstitialWithSize:(CGSize)arg1 ready:(/*^block*/id)arg2 ;
-(void)nativePromotedContentWithSize:(CGSize)arg1 contentFetched:(/*^block*/id)arg2 ;
-(void)promotedContentNativeWithSize:(CGSize)arg1 contentFetched:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)prefetchPromotedContentWithRequests:(id)arg1 ;
-(id)promotedContentWithType:(long long)arg1 size:(CGSize)arg2 placeholderReplacement:(/*^block*/id)arg3 ;
-(void)registerBlacklistEvaluator:(/*^block*/id)arg1 ;
-(void)registerHandlerForAllMetricsWithClosure:(/*^block*/id)arg1 ;
-(void)removeHandler;
-(id)initWithMaxSize:(CGSize)arg1 requestedAd:(id)arg2 current:(id)arg3 next:(id)arg4 newsContext:(id)arg5 ;
-(id)initWithMaxSize:(CGSize)arg1 requestedAd:(id)arg2 current:(id)arg3 next:(id)arg4 ;
-(id)initWithMaxSize:(CGSize)arg1 requestedAd:(id)arg2 current:(id)arg3 adjacent:(id)arg4 newsContext:(id)arg5 ;
-(id)initWithMaxSize:(CGSize)arg1 requestedAd:(id)arg2 current:(id)arg3 adjacent:(id)arg4 ;
-(id)promotedContentVideoWithSize:(CGSize)arg1 placeholderReplacement:(/*^block*/id)arg2 ;
@end
