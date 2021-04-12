/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@protocol OS_dispatch_queue;
@class PHPhotoLibrary, CPAnalyticsDestinationsRegistry, NSObject, CPAnalyticsSystemProperties;

@interface CPAnalytics : NSObject {

	PHPhotoLibrary* _photoLibrary;
	CPAnalyticsDestinationsRegistry* _registry;
	NSObject*<OS_dispatch_queue> _eventsQueue;
	long long _signpostUniqueValue;
	CPAnalyticsSystemProperties* _systemProperties;

}

@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                                 //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) CPAnalyticsDestinationsRegistry * registry;                  //@synthesize registry=_registry - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventsQueue;                    //@synthesize eventsQueue=_eventsQueue - In the implementation block
@property (readonly) long long signpostUniqueValue;                                         //@synthesize signpostUniqueValue=_signpostUniqueValue - In the implementation block
@property (nonatomic,readonly) CPAnalyticsSystemProperties * systemProperties;              //@synthesize systemProperties=_systemProperties - In the implementation block
+(BOOL)isAllowed;
+(id)creationDateForSignpost:(long long)arg1 ;
+(id)_sharedInstance;
+(void)activateEventQueue;
+(void)releasePhotoLibrary;
+(long long)startSignpost;
+(void)addDestination:(id)arg1 ;
+(void)endSignpost:(long long)arg1 forEventName:(id)arg2 withPayload:(id)arg3 ;
+(void)sendEvent:(id)arg1 withPayload:(id)arg2 ;
+(void)updateWithConfigurationFilename:(id)arg1 inBundle:(id)arg2 ;
+(void)startViewTracking;
+(id)bucketNameForInteger:(long long)arg1 bucketLimits:(long long)arg2 ;
+(void)removeDestination:(id)arg1 ;
+(id)bucketNameForDouble:(double)arg1 bucketLimits:(id)arg2 numberFormatter:(id)arg3 ;
+(void)setupSystemPropertyProvidersForLibrary:(id)arg1 ;
+(void)startAppTracking;
+(void)setupWithConfigurationAtURL:(id)arg1 ;
+(void)setupWithConfigurationFilename:(id)arg1 inBundle:(id)arg2 ;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)activateEventQueue;
-(void)releasePhotoLibrary;
-(NSObject*<OS_dispatch_queue>)eventsQueue;
-(long long)startSignpost;
-(CPAnalyticsSystemProperties *)systemProperties;
-(void)addDestination:(id)arg1 ;
-(void)endSignpost:(long long)arg1 forEventName:(id)arg2 withPayload:(id)arg3 ;
-(void)sendEvent:(id)arg1 withPayload:(id)arg2 ;
-(long long)signpostUniqueValue;
-(void)updateWithConfigurationFilename:(id)arg1 inBundle:(id)arg2 ;
-(void)_setupSystemPropertyProviders;
-(void)removeDestination:(id)arg1 ;
-(void)setupSystemPropertyProvidersForLibrary:(id)arg1 ;
-(CPAnalyticsDestinationsRegistry *)registry;
-(void)setupWithConfigurationAtURL:(id)arg1 ;
-(void)setupWithConfigurationFilename:(id)arg1 inBundle:(id)arg2 ;
-(long long)_generateNextSignpostID;
@end

