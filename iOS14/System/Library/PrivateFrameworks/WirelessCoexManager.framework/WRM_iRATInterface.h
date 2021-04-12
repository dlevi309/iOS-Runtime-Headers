/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
*/

#import <WirelessCoexManager/WirelessCoexManager-Structs.h>
#import <WirelessCoexManager/WRMClientInterface.h>

@class NSMutableArray;

@interface WRM_iRATInterface : WRMClientInterface {

	NSMutableArray* mAppLists;
	BOOL mClientSupportsMultipleAppTypes;
	/*^block*/id mObserver;
	/*^block*/id mOppModeObserver;
	/*^block*/id mProximitySubscribeLinkRecommendationHandler;
	/*^block*/id mProximityGetLinkRecommendationHandler;
	/*^block*/id mGetLinkRecommendationMetricsHandler;
	/*^block*/id mOppBtLQMObserver;
	BOOL mLinkPreferenceSubscriptionEnabled;
	BOOL mTelephoneAssertionEnabled;
	BOOL mTelephonyStateEnabled;
	BOOL mLocationAssertionEnabled;
	BOOL mProximitySubscribeLinkRecommendationEnabled;
	BOOL mProximityGetLinkRecommendationEnabled;
	BOOL mGetLinkRecommendationMetricsHandlerEnabled;
	int mLocationState;
	NSMutableArray* mProximityLinkRecommendationList;
	BOOL mBBAssertionBGAppActive;

}
-(id)init;
-(void)dealloc;
-(void)subscribeStandaloneLinkRecommendation:(/*^block*/id)arg1 ;
-(void)getProximityLinkRecommendation:(BOOL)arg1 recommendation:(/*^block*/id)arg2 ;
-(void)registerClient:(int)arg1 queue:(id)arg2 ;
-(void)unregisterClient;
-(void)addProximityLinkRecommendationType:(id)arg1 ;
-(void)subscribeMultipleAppTypes:(id)arg1 observer:(/*^block*/id)arg2 ;
-(void)subscribeAppType:(SCD_Struct_WR0)arg1 observer:(/*^block*/id)arg2 ;
-(void)setTelephonyEnabled:(BOOL)arg1 ;
-(void)assertCommCenterBaseBandMode:(int)arg1 ;
-(void)expediteBBAssertionBGAppActive:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)subscribeProximityLinkRecommendation:(/*^block*/id)arg1 ;
-(void)reConnect;
-(void)processBTLQMNotification:(id)arg1 ;
-(void)processOperatingModeNotification:(id)arg1 ;
-(void)processNotificationListForTerminus:(id)arg1 ;
-(void)processMetricsNotificationReport:(id)arg1 ;
-(void)processNotificationList:(id)arg1 :(unsigned long long)arg2 ;
-(void)handleNotification:(id)arg1 :(BOOL)arg2 ;
-(int)getSubscribeMessageType:(int)arg1 ;
-(int)getStatusUpdateMessageType:(int)arg1 ;
-(void)addAppType:(id)arg1 ;
-(void)_expediteBBAssertionBGAppActive_sync:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeAppType:(id)arg1 ;
-(void)removeProximityLinkRecommendationType:(id)arg1 ;
-(void)subscribeBtLqmScoreNotification:(/*^block*/id)arg1 ;
-(void)subscribeOperatingModeChangeNotification:(/*^block*/id)arg1 ;
-(void)getLinkRecommendationMetrics:(/*^block*/id)arg1 ;
-(void)statusUpdateAppLinkPreference:(int)arg1 status:(BOOL)arg2 ;
-(void)assertCommCenterBaseBand:(int)arg1 ;
-(void)subscribeDataLinkRecommendation:(/*^block*/id)arg1 ;
-(void)statusUpdateAppType:(int)arg1 linkType:(int)arg2 serviceStatus:(BOOL)arg3 ;
-(void)expediteBBAssertionBGAppActiveAppType:(int)arg1 :(BOOL)arg2 handler:(/*^block*/id)arg3 ;
@end

