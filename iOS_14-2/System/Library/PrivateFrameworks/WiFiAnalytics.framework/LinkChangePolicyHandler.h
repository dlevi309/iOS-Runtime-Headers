/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class AnalyticsStoreMOHandler;

@interface LinkChangePolicyHandler : NSObject {

	AnalyticsStoreMOHandler* _storeMOHandler;

}

@property (nonatomic,retain) AnalyticsStoreMOHandler * storeMOHandler;              //@synthesize storeMOHandler=_storeMOHandler - In the implementation block
-(void)setStoreMOHandler:(AnalyticsStoreMOHandler *)arg1 ;
-(void)setLinkChange:(BOOL)arg1 ssid:(id)arg2 bssid:(id)arg3 reason:(unsigned long long)arg4 subReason:(unsigned long long)arg5 rssi:(long long)arg6 ;
-(AnalyticsStoreMOHandler *)storeMOHandler;
-(id)initWithAnalyticsStore:(id)arg1 ;
@end

