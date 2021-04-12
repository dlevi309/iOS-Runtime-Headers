/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@class HKSPAnalyticsStore;

@interface HKSPAnalyticsManager : NSObject {

	HKSPAnalyticsStore* _analyticsStore;

}

@property (nonatomic,retain) HKSPAnalyticsStore * analyticsStore;              //@synthesize analyticsStore=_analyticsStore - In the implementation block
+(BOOL)isImproveHealthAndActivitySubmissionAllowed;
+(BOOL)isDiagnosticDataSubmissionAllowed;
+(id)currentDeviceType;
+(id)activePairedWatchProductType;
-(id)initWithUserDefaults:(id)arg1 ;
-(void)trackEvent:(id)arg1 ;
-(void)trackEvents:(id)arg1 ;
-(HKSPAnalyticsStore *)analyticsStore;
-(void)setAnalyticsStore:(HKSPAnalyticsStore *)arg1 ;
@end

