/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, ADCapData;

@interface ADSearchSession : NSObject {

	NSObject*<OS_dispatch_queue> _idNotificationQueue;
	BOOL _notificationReceivedAndWaiting;
	int _appsRank;
	NSString* _appID;
	NSString* _appVersion;
	ADCapData* _capData;
	NSString* _campaignNamespace;
	NSObject* _notificationObserver;
	NSString* _clientRequestID;

}

@property (nonatomic,retain) ADCapData * capData;                              //@synthesize capData=_capData - In the implementation block
@property (nonatomic,retain) NSString * campaignNamespace;                     //@synthesize campaignNamespace=_campaignNamespace - In the implementation block
@property (nonatomic,retain) NSObject * notificationObserver;                  //@synthesize notificationObserver=_notificationObserver - In the implementation block
@property (assign,nonatomic) BOOL notificationReceivedAndWaiting;              //@synthesize notificationReceivedAndWaiting=_notificationReceivedAndWaiting - In the implementation block
@property (nonatomic,retain) NSString * clientRequestID;                       //@synthesize clientRequestID=_clientRequestID - In the implementation block
@property (nonatomic,retain) NSString * appID;                                 //@synthesize appID=_appID - In the implementation block
@property (nonatomic,retain) NSString * appVersion;                            //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) int appsRank;                                     //@synthesize appsRank=_appsRank - In the implementation block
-(void)setAppVersion:(NSString *)arg1 ;
-(BOOL)notificationReceivedAndWaiting;
-(void)updateToroDownloadData:(id)arg1 forType:(long long)arg2 ;
-(NSString *)appVersion;
-(void)updateClickData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 ;
-(NSString *)appID;
-(id)userTargetingProperties;
-(NSString *)campaignNamespace;
-(void)setAppsRank:(int)arg1 ;
-(void)updateFrequencyCapData:(id)arg1 ;
-(id)requestedAdDataParameter;
-(void)requestSearchObjectForLocality:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)requestedTemplateTypeParameter;
-(id)privacyDataKeyParameter;
-(id)sponsoredSearchRequestForLanguageLocale:(id)arg1 ;
-(void)updateDESRecord:(id)arg1 forEvent:(long long)arg2 ;
-(id)populateStoreFrontLanguageLocale:(id)arg1 ;
-(id)adParameters;
-(void)setNotificationObserver:(NSObject *)arg1 ;
-(BOOL)startUpdatingIDs;
-(void)requestUserTargetingIdentifier:(/*^block*/id)arg1 ;
-(void)updateClickDataWith:(id)arg1 ;
-(NSObject *)notificationObserver;
-(void)setNotificationReceivedAndWaiting:(BOOL)arg1 ;
-(int)appsRank;
-(void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCapData:(ADCapData *)arg1 ;
-(id)campaignNamespaceParameter;
-(void)setCampaignNamespace:(NSString *)arg1 ;
-(id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 storeFront:(id)arg4 ;
-(void)requestSponsoredSearchURL:(/*^block*/id)arg1 ;
-(void)setClientRequestID:(NSString *)arg1 ;
-(ADCapData *)capData;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)clientRequestID;
-(void)dealloc;
@end

