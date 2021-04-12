/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HROnboardingPageViewControllerDelegate.h>

@protocol HROnboardingManagerDelegate;
@class NSMutableDictionary, UINavigationController, HROnboardingSequence, NPSManager, HKHealthStore, HKHeartRhythmAvailability, HKDateCache, NSString;

@interface HROnboardingManager : NSObject <UINavigationControllerDelegate, HROnboardingPageViewControllerDelegate> {

	BOOL _firstTimeOnboarding;
	NSMutableDictionary* _userInfo;
	UINavigationController* _navigationController;
	HROnboardingSequence* _sequence;
	unsigned long long _currentPageNumber;
	long long _onboardingIntent;
	NPSManager* _nanoPreferenceSyncManager;
	HKHealthStore* _healthStore;
	HKHeartRhythmAvailability* _availability;
	HKDateCache* _dateCache;
	id<HROnboardingManagerDelegate> _onboardingManagerDelegate;
	NSString* _productType;

}

@property (nonatomic,retain) UINavigationController * navigationController;                                 //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) HROnboardingSequence * sequence;                                               //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) unsigned long long currentPageNumber;                                          //@synthesize currentPageNumber=_currentPageNumber - In the implementation block
@property (assign,nonatomic) long long onboardingIntent;                                                    //@synthesize onboardingIntent=_onboardingIntent - In the implementation block
@property (nonatomic,retain) NPSManager * nanoPreferenceSyncManager;                                        //@synthesize nanoPreferenceSyncManager=_nanoPreferenceSyncManager - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKHeartRhythmAvailability * availability;                                      //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) HKDateCache * dateCache;                                                       //@synthesize dateCache=_dateCache - In the implementation block
@property (assign,nonatomic) BOOL firstTimeOnboarding;                                                      //@synthesize firstTimeOnboarding=_firstTimeOnboarding - In the implementation block
@property (assign,nonatomic,__weak) id<HROnboardingManagerDelegate> onboardingManagerDelegate;              //@synthesize onboardingManagerDelegate=_onboardingManagerDelegate - In the implementation block
@property (nonatomic,retain) NSString * productType;                                                        //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;                                                //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)userInfo;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(void)setSequence:(HROnboardingSequence *)arg1 ;
-(HROnboardingSequence *)sequence;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(HKDateCache *)dateCache;
-(NSString *)productType;
-(UINavigationController *)navigationController;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(void)setCurrentPageNumber:(unsigned long long)arg1 ;
-(unsigned long long)currentPageNumber;
-(HKHeartRhythmAvailability *)availability;
-(void)setAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setDateCache:(HKDateCache *)arg1 ;
-(id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 delegate:(id)arg4 firstTimeOnboarding:(BOOL)arg5 ;
-(id)onboardingNavigationController;
-(NPSManager *)nanoPreferenceSyncManager;
-(void)stepForward;
-(id<HROnboardingManagerDelegate>)onboardingManagerDelegate;
-(long long)onboardingIntent;
-(void)_wrapUpOnboardingWithAtrialFibrillationDetectionEnabled:(BOOL)arg1 ;
-(void)_advancingToOnboardingPageNumber:(long long)arg1 ;
-(void)_didStepBackward;
-(void)notNowTapped;
-(BOOL)firstTimeOnboarding;
-(id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 delegate:(id)arg4 ;
-(id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 ;
-(void)setFirstTimeOnboarding:(BOOL)arg1 ;
-(void)setOnboardingIntent:(long long)arg1 ;
-(void)setNanoPreferenceSyncManager:(NPSManager *)arg1 ;
-(void)setOnboardingManagerDelegate:(id<HROnboardingManagerDelegate>)arg1 ;
@end

