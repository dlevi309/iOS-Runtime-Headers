/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@interface CPSAnalytics : NSObject

@property (nonatomic,readonly) BOOL shouldRecordAnalyticsEvents; 
+(id)sharedInstance;
-(BOOL)shouldRecordAnalyticsEvents;
-(void)_sendCoreAnalyticsEvent:(id)arg1 withDictionary:(id)arg2 ;
-(void)navigationStartedWithBundleIdentifier:(id)arg1 ;
@end

