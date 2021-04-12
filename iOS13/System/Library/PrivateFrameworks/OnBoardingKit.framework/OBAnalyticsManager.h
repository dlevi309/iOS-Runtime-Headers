/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@class NSMutableArray;

@interface OBAnalyticsManager : NSObject {

	BOOL _shouldStashMetrics;
	NSMutableArray* _stagedMetrics;

}

@property (retain) NSMutableArray * stagedMetrics;              //@synthesize stagedMetrics=_stagedMetrics - In the implementation block
@property (assign) BOOL shouldStashMetrics;                     //@synthesize shouldStashMetrics=_shouldStashMetrics - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)commit;
-(void)logPresentationOfPrivacyUnifiedAbout;
-(void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1 ;
-(void)setStagedMetrics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stagedMetrics;
-(BOOL)shouldStashMetrics;
-(void)stageMetricID:(unsigned)arg1 metric:(id)arg2 ;
-(void)postMetricID:(unsigned)arg1 metric:(id)arg2 ;
-(void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1 ;
-(void)logTapOnPrivacyLinkWithIdentifier:(id)arg1 ;
-(void)setShouldStashMetrics:(BOOL)arg1 ;
@end

