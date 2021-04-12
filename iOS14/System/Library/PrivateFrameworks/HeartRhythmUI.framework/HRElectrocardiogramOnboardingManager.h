/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <libobjc.A.dylib/HROnboardingManagerDataSource.h>
#import <libobjc.A.dylib/HROnboardingManagerDelegate.h>
#import <libobjc.A.dylib/HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate.h>

@protocol HRElectrocardiogramOnboardingManagerDelegate;
@class HROnboardingManager, NSString;

@interface HRElectrocardiogramOnboardingManager : NSObject <HROnboardingManagerDataSource, HROnboardingManagerDelegate, HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate> {

	BOOL _isFirstTimeOnboarding;
	BOOL _isSampleInteractive;
	HROnboardingManager* _onboardingManager;
	id<HRElectrocardiogramOnboardingManagerDelegate> _delegate;

}

@property (nonatomic,readonly) HROnboardingManager * onboardingManager;                                     //@synthesize onboardingManager=_onboardingManager - In the implementation block
@property (nonatomic,readonly) BOOL isFirstTimeOnboarding;                                                  //@synthesize isFirstTimeOnboarding=_isFirstTimeOnboarding - In the implementation block
@property (nonatomic,readonly) BOOL isSampleInteractive;                                                    //@synthesize isSampleInteractive=_isSampleInteractive - In the implementation block
@property (assign,nonatomic,__weak) id<HRElectrocardiogramOnboardingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HRElectrocardiogramOnboardingManagerDelegate>)delegate;
-(void)setDelegate:(id<HRElectrocardiogramOnboardingManagerDelegate>)arg1 ;
-(HROnboardingManager *)onboardingManager;
-(BOOL)isSampleInteractive;
-(id)onboardingNavigationController;
-(id)initWithOnboardingType:(long long)arg1 isFirstTimeOnboarding:(BOOL)arg2 healthStore:(id)arg3 dateCache:(id)arg4 provenance:(long long)arg5 delegate:(id)arg6 isSampleInteractive:(BOOL)arg7 ;
-(void)dismissOnboarding;
-(void)didTapOnElectrocardiogram:(id)arg1 ;
-(id)availableOnboardingStepsForOnboardingManager:(id)arg1 ;
-(id)onboardingManager:(id)arg1 sequenceForStep:(long long)arg2 onboardingType:(long long)arg3 ;
-(void)didBeginOnboardingForOnboardingManager:(id)arg1 ;
-(void)didCompleteOnboardingForOnboardingManager:(id)arg1 ;
-(id)onboardingManager:(id)arg1 customViewControllerForPage:(id)arg2 ;
-(void)onboardingManager:(id)arg1 willMoveToPage:(id)arg2 ;
-(void)didCancelOnboardingForOnboardingManager:(id)arg1 ;
-(void)recordOnboardingAsCompleted;
-(BOOL)isFirstTimeOnboarding;
-(void)didTapOnShowDevicesInWatchApp;
@end

