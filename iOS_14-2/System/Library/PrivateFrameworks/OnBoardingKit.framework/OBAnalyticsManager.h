/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@class NSMutableArray;

@interface OBAnalyticsManager : NSObject {

	BOOL _shouldStashMetrics;
	NSMutableArray* _events;

}

@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
@property (assign) BOOL shouldStashMetrics;                        //@synthesize shouldStashMetrics=_shouldStashMetrics - In the implementation block
+(id)sharedManager;
-(void)commit;
-(void)addEvent:(id)arg1 ;
-(id)init;
-(void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(BOOL)shouldStashMetrics;
-(void)addEvent:(id)arg1 withPayload:(id)arg2 ;
-(void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1 ;
-(void)logTapOnPrivacyLinkWithIdentifier:(id)arg1 ;
-(void)setShouldStashMetrics:(BOOL)arg1 ;
-(NSMutableArray *)events;
-(void)logPresentationOfPrivacyUnifiedAbout;
@end

