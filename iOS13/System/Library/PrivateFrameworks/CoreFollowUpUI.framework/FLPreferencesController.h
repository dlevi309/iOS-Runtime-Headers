/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/

#import <libobjc.A.dylib/FLSpecifierTapHandlerDelegate.h>

@protocol FLViewModel;
@class FLPreferencesFollowUpItemListViewController, NSSet, PSListController, NSString;

@interface FLPreferencesController : NSObject <FLSpecifierTapHandlerDelegate> {

	id<FLViewModel> _topViewModel;
	FLPreferencesFollowUpItemListViewController* _spyglassController;
	NSSet* _spyglassWhitelist;
	BOOL _activityIndicatorActive;
	PSListController* _listViewController;
	/*^block*/id _itemChangeObserver;

}

@property (assign,nonatomic,__weak) PSListController * listViewController;              //@synthesize listViewController=_listViewController - In the implementation block
@property (nonatomic,copy) id itemChangeObserver;                                       //@synthesize itemChangeObserver=_itemChangeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithViewModel:(id)arg1 ;
-(void)setListViewController:(PSListController *)arg1 ;
-(void)setItemChangeObserver:(id)arg1 ;
-(id)topLevelSpecifiers;
-(void)startSpinnerForSpecifier:(id)arg1 ;
-(void)preflightNetworkConnectivityForHandler:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)stopSpinnerForSpecifier:(id)arg1 ;
-(void)startPresentingForHandler:(id)arg1 withRemoteController:(id)arg2 ;
-(id)_specifierForGroup:(id)arg1 ;
-(id)_specifierForItem:(id)arg1 group:(id)arg2 ;
-(id)_deferredLoadSpecifierWithName:(id)arg1 ;
-(id)_urlBasedSpecifierWithName:(id)arg1 ;
-(void)_updateSpecifier:(id)arg1 withCommonPropertiesForGroup:(id)arg2 ;
-(void)loadSpecifier:(id)arg1 ;
-(PSListController *)listViewController;
-(void)_refreshItemsAndPresentDetailForSpecifier:(id)arg1 ;
-(void)_handleEmptyRefreshResult:(id)arg1 ;
-(void)_presentSpecifier:(id)arg1 ;
-(void)_zeroActionFailure:(id)arg1 ;
-(id)spyglassSpecifiers;
-(id)itemChangeObserver;
@end

