/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


@protocol OS_dispatch_group, QLIncrementalThumbnailGenerationHandler, OS_os_activity;
#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class QLThumbnailGenerationRequest, QLPreviewThumbnailGenerator, NSObject, NSError, NSNumber, QLDiskStore;

@interface QLTGeneratorThumbnailRequest : NSObject {

	BOOL _cancelled;
	BOOL _didCheckCache;
	QLThumbnailGenerationRequest* _request;
	QLPreviewThumbnailGenerator* _generator;
	NSObject*<OS_dispatch_group> _batchDispatchGroup;
	NSError* _generationError;
	id<QLIncrementalThumbnailGenerationHandler> _generationHandler;
	unsigned long long _handledRequestedTypes;
	unsigned long long _successfullyHandldedRequestedTypes;
	unsigned long long _badgeType;
	NSObject*<OS_os_activity> _topActivity;
	NSObject*<OS_os_activity> _activity;
	NSNumber* _requestBadgeType;
	QLDiskStore* _diskStore;
	os_activity_scope_state_s _activityState;

}

@property (nonatomic,retain) NSNumber * requestBadgeType;                                                  //@synthesize requestBadgeType=_requestBadgeType - In the implementation block
@property (assign,nonatomic) unsigned long long handledRequestedTypes;                                     //@synthesize handledRequestedTypes=_handledRequestedTypes - In the implementation block
@property (assign,nonatomic) unsigned long long successfullyHandldedRequestedTypes;                        //@synthesize successfullyHandldedRequestedTypes=_successfullyHandldedRequestedTypes - In the implementation block
@property (assign) BOOL cancelled;                                                                         //@synthesize cancelled=_cancelled - In the implementation block
@property (retain) QLDiskStore * diskStore;                                                                //@synthesize diskStore=_diskStore - In the implementation block
@property (nonatomic,readonly) QLThumbnailGenerationRequest * request;                                     //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) QLPreviewThumbnailGenerator * generator;                                      //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> batchDispatchGroup;                            //@synthesize batchDispatchGroup=_batchDispatchGroup - In the implementation block
@property (nonatomic,retain) NSError * generationError;                                                    //@synthesize generationError=_generationError - In the implementation block
@property (nonatomic,readonly) id<QLIncrementalThumbnailGenerationHandler> generationHandler;              //@synthesize generationHandler=_generationHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long unhandledRequestedTypes; 
@property (assign) BOOL didCheckCache;                                                                     //@synthesize didCheckCache=_didCheckCache - In the implementation block
@property (nonatomic,readonly) unsigned long long badgeType;                                               //@synthesize badgeType=_badgeType - In the implementation block
@property (readonly) BOOL cacheEnabled; 
@property (retain) NSObject*<OS_os_activity> topActivity;                                                  //@synthesize topActivity=_topActivity - In the implementation block
@property (retain) NSObject*<OS_os_activity> activity;                                                     //@synthesize activity=_activity - In the implementation block
@property (assign) os_activity_scope_state_s activityState;                                                //@synthesize activityState=_activityState - In the implementation block
-(long long)compare:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(os_activity_scope_state_s)activityState;
-(NSObject*<OS_os_activity>)activity;
-(QLThumbnailGenerationRequest *)request;
-(void)setActivity:(NSObject*<OS_os_activity>)arg1 ;
-(id)description;
-(unsigned long long)badgeType;
-(void)setGenerator:(QLPreviewThumbnailGenerator *)arg1 ;
-(void)cancel;
-(QLPreviewThumbnailGenerator *)generator;
-(void)addTypeToHandledTypes:(long long)arg1 ;
-(void)addTypeToSuccessfullyHandledTypes:(long long)arg1 ;
-(id<QLIncrementalThumbnailGenerationHandler>)generationHandler;
-(BOOL)needsLowQualityThumbnailGeneration;
-(void)setDidCheckCache:(BOOL)arg1 ;
-(void)_adjustRequestInformationIfNeeded;
-(QLDiskStore *)diskStore;
-(BOOL)didCheckCache;
-(unsigned long long)_requestedTypesForRepresentationType:(long long)arg1 ;
-(id)initWithRequest:(id)arg1 generationHandler:(id)arg2 batchDispatchGroup:(id)arg3 ;
-(BOOL)cacheEnabled;
-(BOOL)shouldGenerateLowQualityThumbnailOnCacheMiss;
-(BOOL)hasHandledAllRequestedTypesOrMostRepresentativeType;
-(unsigned long long)unhandledRequestedTypes;
-(NSObject*<OS_dispatch_group>)batchDispatchGroup;
-(NSError *)generationError;
-(void)setGenerationError:(NSError *)arg1 ;
-(unsigned long long)handledRequestedTypes;
-(void)setHandledRequestedTypes:(unsigned long long)arg1 ;
-(unsigned long long)successfullyHandldedRequestedTypes;
-(void)setSuccessfullyHandldedRequestedTypes:(unsigned long long)arg1 ;
-(NSObject*<OS_os_activity>)topActivity;
-(void)setTopActivity:(NSObject*<OS_os_activity>)arg1 ;
-(void)setActivityState:(os_activity_scope_state_s)arg1 ;
-(NSNumber *)requestBadgeType;
-(void)setRequestBadgeType:(NSNumber *)arg1 ;
-(void)setDiskStore:(QLDiskStore *)arg1 ;
@end

