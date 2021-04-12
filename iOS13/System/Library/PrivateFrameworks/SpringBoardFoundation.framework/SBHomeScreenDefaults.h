/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDate;

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) BOOL usesAutomaticHomeScreenEnvironment; 
@property (assign,getter=isSidebarVisible,nonatomic) BOOL sidebarVisible; 
@property (assign,getter=isSidebarPinned,nonatomic) BOOL sidebarPinned; 
@property (assign,getter=isLayoutLowDensity,nonatomic) BOOL layoutLowDensity; 
@property (assign,nonatomic) BOOL shouldFudgeShortcutsToCauseMaximumPain; 
@property (assign,getter=hasSidebarEverBeenVisible,nonatomic) BOOL sidebarEverBeenVisible; 
@property (nonatomic,copy) NSDate * sidebarLearningCadenceCommenceDate; 
@property (assign,nonatomic) long long sidebarLearningCadenceEpoch; 
@property (assign,nonatomic) BOOL shouldShowWidgetsTeachingView; 
-(void)setShouldShowWidgetsTeachingView:(BOOL)arg1 ;
-(BOOL)shouldShowWidgetsTeachingView;
-(void)setSidebarPinned:(BOOL)arg1 ;
-(BOOL)isSidebarPinned;
-(void)setLayoutLowDensity:(BOOL)arg1 ;
-(BOOL)isLayoutLowDensity;
-(void)setSidebarVisible:(BOOL)arg1 ;
-(BOOL)isSidebarVisible;
-(void)setSidebarLearningCadenceEpoch:(long long)arg1 ;
-(long long)sidebarLearningCadenceEpoch;
-(void)setSidebarEverBeenVisible:(BOOL)arg1 ;
-(BOOL)hasSidebarEverBeenVisible;
-(void)setUsesAutomaticHomeScreenEnvironment:(BOOL)arg1 ;
-(BOOL)usesAutomaticHomeScreenEnvironment;
-(void)setShouldFudgeShortcutsToCauseMaximumPain:(BOOL)arg1 ;
-(BOOL)shouldFudgeShortcutsToCauseMaximumPain;
-(void)setSidebarLearningCadenceCommenceDate:(NSDate *)arg1 ;
-(NSDate *)sidebarLearningCadenceCommenceDate;
-(void)_bindAndRegisterDefaults;
@end

