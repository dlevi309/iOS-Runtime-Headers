/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXClientXPCInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSXPCListener, ATXUpdatePredictionsLogger, NSMutableDictionary;

@interface ATXServer : NSObject <ATXClientXPCInterface, NSXPCListenerDelegate> {

	NSString* _cacheFileBasePath;
	NSString* _machServiceName;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	ATXUpdatePredictionsLogger* _updatePredictionsLogger;
	NSMutableDictionary* _cacheFileDescriptors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)consumerSubTypesToUpdate;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)sendFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 aprResponse:(id)arg4 engagementType:(unsigned long long)arg5 engagedBundleId:(id)arg6 bundleIdsShown:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)getAppPredictorAssetMappingDescriptionWithReply:(/*^block*/id)arg1 ;
-(void)sortAppsByLaunches:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithCacheFileBasePath:(id)arg1 machServiceName:(id)arg2 ;
-(void)_logPredictionUpdateForSpotlightUnknownConsumerSubTypeWithPath:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)updateAppPredictionsWithRefreshRate:(double)arg1 reason:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
@end

