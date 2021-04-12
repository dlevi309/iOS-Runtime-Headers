/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HealthUI/HKDataMetadataSection.h>
#import <libobjc.A.dylib/HROnboardingPageViewControllerDelegate.h>

@class NSMutableDictionary, HKHealthStore, NSString;

@interface HRElectrocardiogramEducationSection : HKDataMetadataSection <HROnboardingPageViewControllerDelegate> {

	BOOL _firstTimeOnboarding;
	NSMutableDictionary* _userInfo;
	HKHealthStore* _store;

}

@property (nonatomic,retain) HKHealthStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) BOOL firstTimeOnboarding;                  //@synthesize firstTimeOnboarding=_firstTimeOnboarding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(id)healthStore;
-(void)setStore:(HKHealthStore *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(id)sectionTitle;
-(HKHealthStore *)store;
-(id)dateCache;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)willDisplayCell:(id)arg1 forIndex:(unsigned long long)arg2 tableView:(id)arg3 ;
-(void)stepForward;
-(BOOL)firstTimeOnboarding;
-(id)_cellTitleForEducationRow:(unsigned long long)arg1 ;
-(id)_viewControllerForEducationRow:(unsigned long long)arg1 ;
@end

