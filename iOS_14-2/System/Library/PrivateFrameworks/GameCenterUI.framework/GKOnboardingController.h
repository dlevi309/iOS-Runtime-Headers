/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol GKOnboardingFlowDelegate;
@class NSMutableDictionary;

@interface GKOnboardingController : NSObject {

	id<GKOnboardingFlowDelegate> _delegate;
	NSMutableDictionary* _analyticsPayload;

}

@property (assign,nonatomic,__weak) id<GKOnboardingFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * analyticsPayload;                    //@synthesize analyticsPayload=_analyticsPayload - In the implementation block
+(id)shared;
-(void)setAnalyticsPayload:(NSMutableDictionary *)arg1 ;
-(BOOL)didShowPrivacyNotice;
-(void)presentPersonalizationScreen:(id)arg1 ;
-(void)presentProfilePrivacyScreen:(id)arg1 ;
-(id<GKOnboardingFlowDelegate>)delegate;
-(NSMutableDictionary *)analyticsPayload;
-(void)setDelegate:(id<GKOnboardingFlowDelegate>)arg1 ;
-(void)presentViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(unsigned long long)getPrivacyNoticeVersion;
@end

