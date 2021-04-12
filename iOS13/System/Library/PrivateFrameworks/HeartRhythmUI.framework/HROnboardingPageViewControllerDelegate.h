/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

@class NSMutableDictionary;


@protocol HROnboardingPageViewControllerDelegate <NSObject>
@property (nonatomic,retain) NSMutableDictionary * userInfo; 
@property (nonatomic,readonly) BOOL firstTimeOnboarding; 
@optional
-(NSMutableDictionary *)userInfo;
-(void)setUserInfo:(id)arg1;
-(void)notNowTapped;
-(BOOL)firstTimeOnboarding;

@required
-(id)healthStore;
-(id)dateCache;
-(void)stepForward;
-(id)onboardingManagerDelegate;

@end

