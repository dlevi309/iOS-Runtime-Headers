/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(id)eventPayload;
-(void)setDurationOfWiFiScan:(double)arg1 ;
-(BOOL)userVisitedLocalePane;
-(double)durationOfWiFiScan;
-(BOOL)userSawRecommendedLocale;
-(void)setUserVisitedLocalePane:(BOOL)arg1 ;
-(void)setUserSawRecommendedLocale:(BOOL)arg1 ;
@end

