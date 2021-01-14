/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <libobjc.A.dylib/HROnboardingManagerDataSource.h>
#import <libobjc.A.dylib/HROnboardingManagerDelegate.h>

@protocol HRAtrialFibrillationOnboardingManagerDelegate;
@class HROnboardingManager, NPSManager, NSString;

@interface HRAtrialFibrillationOnboardingManager : NSObject <HROnboardingManagerDataSource, HROnboardingManagerDelegate> {

	HROnboardingManager* _onboardingManager;
	NPSManager* _nanoPreferenceSyncManager;
	id<HRAtrialFibrillationOnboardingManagerDelegate> _delegate;

}

@property (nonatomic,readonly) HROnboardingManager * onboardingManager;                                      //@synthesize onboardingManager=_onboardingManager - In the implementation block
@property (nonatomic,retain) NPSManager * nanoPreferenceSyncManager;                                         //@synthesize nanoPreferenceSyncManager=_nanoPreferenceSyncManager - In the implementation block
@property (assign,nonatomic,__weak) id<HRAtrialFibrillationOnboardingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HRAtrialFibrillationOnboardingManagerDelegate>)delegate;
-(void)setDelegate:(id<HRAtrialFibrillationOnboardingManagerDelegate>)arg1 ;
-(HROnboardingManager *)onboardingManager;
-(id)initWithOnboardingType:(long long)arg1 isFirstTimeOnboarding:(BOOL)arg2 healthStore:(id)arg3 dateCache:(id)arg4 provenance:(long long)arg5 delegate:(id)arg6 ;
-(id)onboardingNavigationController;
-(void)dismissOnboarding;
-(NPSManager *)nanoPreferenceSyncManager;
-(id)availableOnboardingStepsForOnboardingManager:(id)arg1 ;
-(id)onboardingManager:(id)arg1 sequenceForStep:(long long)arg2 onboardingType:(long long)arg3 ;
-(void)didBeginOnboardingForOnboardingManager:(id)arg1 ;
-(void)didCompleteOnboardingForOnboardingManager:(id)arg1 ;
-(void)onboardingManager:(id)arg1 willMoveToPage:(id)arg2 ;
-(void)didCancelOnboardingForOnboardingManager:(id)arg1 ;
-(void)_wrapUpOnboardingWithAtrialFibrillationDetectionEnabled:(BOOL)arg1 ;
-(void)setNanoPreferenceSyncManager:(NPSManager *)arg1 ;
@end

