/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/


@class SPUISearchViewController, SPUIPPTTypingHelper, UIApplication;

@interface SPUITestingHelper : NSObject {

	BOOL _finishedKeyboardLaunch;
	BOOL _finishedTableUpdate;
	SPUISearchViewController* _searchViewController;
	SPUIPPTTypingHelper* _typingHelper;

}

@property (retain) SPUISearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (retain) SPUIPPTTypingHelper * typingHelper;                           //@synthesize typingHelper=_typingHelper - In the implementation block
@property (readonly) UIApplication * activeApp; 
@property (assign) BOOL finishedKeyboardLaunch;                                  //@synthesize finishedKeyboardLaunch=_finishedKeyboardLaunch - In the implementation block
@property (assign) BOOL finishedTableUpdate;                                     //@synthesize finishedTableUpdate=_finishedTableUpdate - In the implementation block
+(id)indexPathsOfRowsForSectionTitle:(id)arg1 needsCard:(BOOL)arg2 forTableModel:(id)arg3 ;
-(SPUISearchViewController *)searchViewController;
-(void)setSearchViewController:(SPUISearchViewController *)arg1 ;
-(id)initWithSearchViewController:(id)arg1 ;
-(BOOL)canPerformTest:(id)arg1 ;
-(void)performTest:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFinishedKeyboardLaunch:(BOOL)arg1 ;
-(void)finishLaunchTestIfNeeded;
-(void)setFinishedTableUpdate:(BOOL)arg1 ;
-(void)scrollMainResultsForTest:(id)arg1 forQuery:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performCardScrollTest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)searchManyStringsForTestName:(id)arg1 options:(id)arg2 event:(unsigned long long)arg3 sourcePreference:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)performPushPopCardsOnTest:(id)arg1 options:(id)arg2 needsCard:(BOOL)arg3 sectionHeader:(id)arg4 atDesk:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(UIApplication *)activeApp;
-(void)searchStrings:(id)arg1 andOpenResultsUnderSection:(id)arg2 testName:(id)arg3 needsCard:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)finishedKeyboardLaunch;
-(BOOL)finishedTableUpdate;
-(void)scrollForSectionHeader:(id)arg1 forSearchString:(id)arg2 testName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)searchString:(id)arg1 andOpenResultsUnderSection:(id)arg2 testName:(id)arg3 needsCard:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)tapIndexsPathsAndPopViewControllersAfter2Seconds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)searchViewFinishedGettingAllResultsAndFinishedDrawsWithCompletion:(/*^block*/id)arg1 ;
-(void)searchForString:(id)arg1 testName:(id)arg2 event:(unsigned long long)arg3 sourcePreference:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)setTypingHelper:(SPUIPPTTypingHelper *)arg1 ;
-(void)setDefaultsForSearchVC;
-(SPUIPPTTypingHelper *)typingHelper;
@end

