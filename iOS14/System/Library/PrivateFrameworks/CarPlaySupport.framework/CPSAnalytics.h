/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@interface CPSAnalytics : NSObject

@property (nonatomic,readonly) BOOL shouldRecordAnalyticsEvents; 
+(id)sharedInstance;
-(BOOL)shouldRecordAnalyticsEvents;
-(void)_sendCoreAnalyticsEvent:(id)arg1 withDictionary:(id)arg2 ;
-(void)navigationStartedWithBundleIdentifier:(id)arg1 ;
-(void)audioAppMetadataThrottledWithBundleIdentifier:(id)arg1 ;
@end

