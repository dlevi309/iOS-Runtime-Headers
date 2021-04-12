/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)processURL:(id)arg1 animated:(BOOL)arg2 fromSearch:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(PSRootController *)rootController;
-(id)urlForCurrentNavStack;
-(void)setTopLevelController:(PSListController*<PSTopLevelController>)arg1 ;
-(PSSplitViewController *)splitViewController;
-(id)keyValueDictionaryForURL:(id)arg1 ;
-(id)currentSpecifierIDPath;
-(PSListController*<PSTopLevelController>)topLevelController;
-(void)_performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(BOOL)arg4 ;
-(void)setRootController:(PSRootController *)arg1 ;
-(void)popToRootAndSelectDefaultCategory:(BOOL)arg1 performWithoutDeferringTransitions:(BOOL)arg2 ;
-(void)popToRootAndSelectDefaultCategory:(BOOL)arg1 ;
-(void)performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 objectOffsetPair:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setSplitViewController:(PSSplitViewController *)arg1 ;
-(void)setOffsetForController:(id)arg1 fromObjectPair:(id)arg2 ;
-(void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

