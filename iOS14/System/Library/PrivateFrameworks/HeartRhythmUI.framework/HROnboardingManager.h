/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HROnboardingPageViewControllerDelegate.h>

@protocol HROnboardingManagerDataSource, HROnboardingManagerDelegate;
@class NSMutableDictionary, NSString, HKHeartRhythmAvailability, HKHealthStore, HKDateCache, UINavigationController, NSArray, HROnboardingSequence;

@interface HROnboardingManager : NSObject <UINavigationControllerDelegate, HROnboardingPageViewControllerDelegate> {

	BOOL _firstTimeOnboarding;
	long long _provenance;
	NSString* _productType;
	HKHeartRhythmAvailability* _availability;
	NSMutableDictionary* _userInfo;
	id<HROnboardingManagerDataSource> _dataSource;
	id<HROnboardingManagerDelegate> _delegate;
	long long _onboardingType;
	HKHealthStore* _healthStore;
	HKDateCache* _dateCache;
	UINavigationController* _navigationController;
	NSArray* _steps;
	HROnboardingSequence* _currentSequence;
	long long _currentStepIndex;
	unsigned long long _currentPageIndex;
	unsigned long long _presentedPagesCount;

}

@property (assign,nonatomic) long long onboardingType;                                         //@synthesize onboardingType=_onboardingType - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKDateCache * dateCache;                                          //@synthesize dateCache=_dateCache - In the implementation block
@property (assign,nonatomic) long long provenance;                                             //@synthesize provenance=_provenance - In the implementation block
@property (nonatomic,retain) NSString * productType;                                           //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) HKHeartRhythmAvailability * availability;                         //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) NSArray * steps;                                                  //@synthesize steps=_steps - In the implementation block
@property (nonatomic,retain) HROnboardingSequence * currentSequence;                           //@synthesize currentSequence=_currentSequence - In the implementation block
@property (assign,nonatomic) long long currentStepIndex;                                       //@synthesize currentStepIndex=_currentStepIndex - In the implementation block
@property (assign,nonatomic) unsigned long long currentPageIndex;                              //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long presentedPagesCount;                           //@synthesize presentedPagesCount=_presentedPagesCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) BOOL firstTimeOnboarding;                                       //@synthesize firstTimeOnboarding=_firstTimeOnboarding - In the implementation block
@property (assign,nonatomic,__weak) id<HROnboardingManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<HROnboardingManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(HKHealthStore *)healthStore;
-(NSArray *)steps;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(NSMutableDictionary *)userInfo;
-(long long)provenance;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(id<HROnboardingManagerDelegate>)delegate;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(NSString *)productType;
-(void)setCurrentStepIndex:(long long)arg1 ;
-(id<HROnboardingManagerDataSource>)dataSource;
-(void)setProductType:(NSString *)arg1 ;
-(HKDateCache *)dateCache;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)setDelegate:(id<HROnboardingManagerDelegate>)arg1 ;
-(void)setProvenance:(long long)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setDataSource:(id<HROnboardingManagerDataSource>)arg1 ;
-(HKHeartRhythmAvailability *)availability;
-(long long)currentStepIndex;
-(void)setAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(void)setSteps:(NSArray *)arg1 ;
-(UINavigationController *)navigationController;
-(void)setDateCache:(HKDateCache *)arg1 ;
-(HROnboardingSequence *)currentSequence;
-(void)setCurrentSequence:(HROnboardingSequence *)arg1 ;
-(id)onboardingNavigationController;
-(void)dismissOnboarding;
-(long long)onboardingType;
-(void)pushPageAnimated:(BOOL)arg1 ;
-(void)stepToNextState;
-(void)stepToNextPage;
-(id)viewControllerForPage:(id)arg1 ;
-(unsigned long long)presentedPagesCount;
-(void)_didStepBackward;
-(void)setPresentedPagesCount:(unsigned long long)arg1 ;
-(void)stepForward;
-(BOOL)firstTimeOnboarding;
-(void)onboardingCancelled;
-(id)initWithOnboardingType:(long long)arg1 isFirstTimeOnboarding:(BOOL)arg2 healthStore:(id)arg3 dateCache:(id)arg4 provenance:(long long)arg5 ;
-(void)setOnboardingType:(long long)arg1 ;
@end

