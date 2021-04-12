/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@interface BYAnalyticsEventRecommendedLocale : NSObject {

	BOOL _userVisitedLocalePane;
	BOOL _userSawRecommendedLocale;
	unsigned long long _source;
	double _durationOfWiFiScan;

}

@property (assign,nonatomic) unsigned long long source;                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) double durationOfWiFiScan;                  //@synthesize durationOfWiFiScan=_durationOfWiFiScan - In the implementation block
@property (assign,nonatomic) BOOL userVisitedLocalePane;                 //@synthesize userVisitedLocalePane=_userVisitedLocalePane - In the implementation block
@property (assign,nonatomic) BOOL userSawRecommendedLocale;              //@synthesize userSawRecommendedLocale=_userSawRecommendedLocale - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setDurationOfWiFiScan:(double)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(BOOL)userVisitedLocalePane;
-(double)durationOfWiFiScan;
-(BOOL)userSawRecommendedLocale;
-(void)setUserVisitedLocalePane:(BOOL)arg1 ;
-(void)setUserSawRecommendedLocale:(BOOL)arg1 ;
-(id)eventPayload;
-(unsigned long long)source;
@end

