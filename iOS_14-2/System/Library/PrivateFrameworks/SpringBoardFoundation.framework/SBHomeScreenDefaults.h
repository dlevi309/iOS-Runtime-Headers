/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDate, NSString;

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=isSidebarVisible,nonatomic) BOOL sidebarVisible; 
@property (assign,getter=isSidebarPinned,nonatomic) BOOL sidebarPinned; 
@property (assign,getter=isLayoutLowDensity,nonatomic) BOOL layoutLowDensity; 
@property (assign,nonatomic) BOOL shouldFudgeShortcutsToCauseMaximumPain; 
@property (assign,getter=hasSidebarEverBeenVisible,nonatomic) BOOL sidebarEverBeenVisible; 
@property (nonatomic,copy) NSDate * sidebarLearningCadenceCommenceDate; 
@property (assign,nonatomic) long long sidebarLearningCadenceEpoch; 
@property (assign,nonatomic) BOOL shouldAutoFillFavoriteList; 
@property (assign,nonatomic) BOOL shouldPrepareDefaultTodayList; 
@property (assign,nonatomic) BOOL shouldPrepareStackForDefaultTodayList; 
@property (nonatomic,copy) NSString * overriddenScreenType; 
@property (assign,nonatomic) BOOL automaticallyAddsNewApplications; 
@property (assign,nonatomic) BOOL showsBadgesInAppLibrary; 
@property (assign,nonatomic) BOOL pagesHaveEverBeenHidden; 
@property (assign,nonatomic) BOOL pageHidingUIEverEntered; 
@property (assign,nonatomic) BOOL shouldShowLibraryEducationView; 
@property (assign,nonatomic) BOOL shouldShowAppLibraryOnBoardingAlert; 
@property (assign,nonatomic) BOOL shouldShowPageHidingOnBoardingAlert; 
@property (assign,nonatomic) BOOL shouldShowAvocadoWidgetsOnBoardingAlert; 
@property (assign,nonatomic) BOOL shouldShowInternalWidgets; 
-(void)setShowsBadgesInAppLibrary:(BOOL)arg1 ;
-(BOOL)showsBadgesInAppLibrary;
-(void)setShouldAutoFillFavoriteList:(BOOL)arg1 ;
-(BOOL)shouldAutoFillFavoriteList;
-(void)setSidebarPinned:(BOOL)arg1 ;
-(BOOL)isSidebarPinned;
-(void)setOverriddenScreenType:(NSString *)arg1 ;
-(NSString *)overriddenScreenType;
-(void)setShouldPrepareStackForDefaultTodayList:(BOOL)arg1 ;
-(BOOL)shouldPrepareStackForDefaultTodayList;
-(void)setSidebarEverBeenVisible:(BOOL)arg1 ;
-(BOOL)hasSidebarEverBeenVisible;
-(void)setPagesHaveEverBeenHidden:(BOOL)arg1 ;
-(BOOL)pagesHaveEverBeenHidden;
-(void)setShouldShowLibraryEducationView:(BOOL)arg1 ;
-(BOOL)shouldShowLibraryEducationView;
-(void)setShouldShowInternalWidgets:(BOOL)arg1 ;
-(BOOL)shouldShowInternalWidgets;
-(void)setShouldShowAvocadoWidgetsOnBoardingAlert:(BOOL)arg1 ;
-(BOOL)shouldShowAvocadoWidgetsOnBoardingAlert;
-(void)setLayoutLowDensity:(BOOL)arg1 ;
-(BOOL)isLayoutLowDensity;
-(void)setShouldFudgeShortcutsToCauseMaximumPain:(BOOL)arg1 ;
-(BOOL)shouldFudgeShortcutsToCauseMaximumPain;
-(void)setSidebarLearningCadenceCommenceDate:(NSDate *)arg1 ;
-(NSDate *)sidebarLearningCadenceCommenceDate;
-(void)setSidebarLearningCadenceEpoch:(long long)arg1 ;
-(long long)sidebarLearningCadenceEpoch;
-(void)setShouldShowPageHidingOnBoardingAlert:(BOOL)arg1 ;
-(BOOL)shouldShowPageHidingOnBoardingAlert;
-(void)setShouldShowAppLibraryOnBoardingAlert:(BOOL)arg1 ;
-(BOOL)shouldShowAppLibraryOnBoardingAlert;
-(void)setSidebarVisible:(BOOL)arg1 ;
-(BOOL)isSidebarVisible;
-(void)setPageHidingUIEverEntered:(BOOL)arg1 ;
-(BOOL)pageHidingUIEverEntered;
-(void)setShouldPrepareDefaultTodayList:(BOOL)arg1 ;
-(BOOL)shouldPrepareDefaultTodayList;
-(void)setAutomaticallyAddsNewApplications:(BOOL)arg1 ;
-(BOOL)automaticallyAddsNewApplications;
-(BOOL)automaticallyAddsNewApplicationsExists;
-(void)_bindAndRegisterDefaults;
@end

