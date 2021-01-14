/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

@class NSMutableDictionary;


@protocol HROnboardingPageViewControllerDelegate <NSObject>
@property (nonatomic,retain) NSMutableDictionary * userInfo; 
@property (nonatomic,readonly) BOOL firstTimeOnboarding; 
@optional
-(void)onboardingCancelled;

@required
-(void)setUserInfo:(id)arg1;
-(id)healthStore;
-(NSMutableDictionary *)userInfo;
-(id)dateCache;
-(void)stepForward;
-(BOOL)firstTimeOnboarding;

@end

