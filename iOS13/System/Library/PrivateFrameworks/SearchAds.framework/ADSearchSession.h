/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setNotificationObserver:(NSObject *)arg1 ;
-(NSObject *)notificationObserver;
-(NSString *)appID;
-(void)setAppID:(NSString *)arg1 ;
-(void)setAppsRank:(int)arg1 ;
-(int)appsRank;
-(NSString *)clientRequestID;
-(void)setClientRequestID:(NSString *)arg1 ;
-(id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 storeFront:(id)arg4 ;
-(BOOL)startUpdatingIDs;
-(id)campaignNamespaceParameter;
-(id)privacyDataKeyParameter;
-(id)requestedAdDataParameter;
-(id)requestedTemplateTypeParameter;
-(id)adParameters;
-(void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)sponsoredSearchRequestForLanguageLocale:(id)arg1 ;
-(id)userTargetingProperties;
-(id)populateStoreFrontLanguageLocale:(id)arg1 ;
-(ADCapData *)capData;
-(void)updateDESRecord:(id)arg1 forEvent:(long long)arg2 ;
-(void)updateClickData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 ;
-(void)setCampaignNamespace:(NSString *)arg1 ;
-(void)requestSearchObjectForLocality:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestUserTargetingIdentifier:(/*^block*/id)arg1 ;
-(void)updateFrequencyCapData:(id)arg1 ;
-(void)updateClickDataWith:(id)arg1 ;
-(void)updateToroDownloadData:(id)arg1 forType:(long long)arg2 ;
-(void)requestSponsoredSearchURL:(/*^block*/id)arg1 ;
-(void)setCapData:(ADCapData *)arg1 ;
-(NSString *)campaignNamespace;
-(BOOL)notificationReceivedAndWaiting;
-(void)setNotificationReceivedAndWaiting:(BOOL)arg1 ;
@end

