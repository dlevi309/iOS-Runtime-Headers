/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol PSTopLevelController;
@class PSListController, PSSplitViewController, PSRootController;

@interface PSURLManager : NSObject {

	PSListController*<PSTopLevelController> _topLevelController;
	PSSplitViewController* _splitViewController;
	PSRootController* _rootController;

}

@property (nonatomic,retain) PSListController*<PSTopLevelController> topLevelController;              //@synthesize topLevelController=_topLevelController - In the implementation block
@property (nonatomic,retain) PSSplitViewController * splitViewController;                             //@synthesize splitViewController=_splitViewController - In the implementation block
@property (nonatomic,retain) PSRootController * rootController;                                       //@synthesize rootController=_rootController - In the implementation block
+(id)sharedManager;
-(PSSplitViewController *)splitViewController;
-(void)setRootController:(PSRootController *)arg1 ;
-(PSRootController *)rootController;
-(id)keyValueDictionaryForURL:(id)arg1 ;
-(PSListController*<PSTopLevelController>)topLevelController;
-(id)currentSpecifierIDPath;
-(void)setOffsetForController:(id)arg1 fromObjectPair:(id)arg2 ;
-(void)performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 objectOffsetPair:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)popToRootAndSelectDefaultCategory:(BOOL)arg1 performWithoutDeferringTransitions:(BOOL)arg2 ;
-(void)processURL:(id)arg1 animated:(BOOL)arg2 fromSearch:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(BOOL)arg4 ;
-(void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)popToRootAndSelectDefaultCategory:(BOOL)arg1 ;
-(id)urlForCurrentNavStack;
-(void)setTopLevelController:(PSListController*<PSTopLevelController>)arg1 ;
-(void)setSplitViewController:(PSSplitViewController *)arg1 ;
@end

