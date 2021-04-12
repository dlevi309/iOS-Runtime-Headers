/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUHomeStatusDetailsViewControllerDelegate.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class HFHomeStatusItemManager, HUGridLayoutOptions, NUIContainerStackView, NSMutableArray, NSString;

@interface HUHomeStatusViewController : UIViewController <HUHomeStatusDetailsViewControllerDelegate, HFItemManagerDelegate, HUPreloadableViewController> {

	BOOL _wantsPreferredContentSize;
	BOOL _viewVisible;
	BOOL _hasFinishedInitialLoad;
	HFHomeStatusItemManager* _statusItemManager;
	HUGridLayoutOptions* _layoutOptions;
	NUIContainerStackView* _stackView;
	NSMutableArray* _viewVisibleFutures;

}

@property (nonatomic,retain) HFHomeStatusItemManager * statusItemManager;              //@synthesize statusItemManager=_statusItemManager - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * stackView;                        //@synthesize stackView=_stackView - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) BOOL viewVisible;                    //@synthesize viewVisible=_viewVisible - In the implementation block
@property (nonatomic,readonly) NSMutableArray * viewVisibleFutures;                    //@synthesize viewVisibleFutures=_viewVisibleFutures - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedInitialLoad;                              //@synthesize hasFinishedInitialLoad=_hasFinishedInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL wantsPreferredContentSize;                           //@synthesize wantsPreferredContentSize=_wantsPreferredContentSize - In the implementation block
@property (nonatomic,copy) HUGridLayoutOptions * layoutOptions;                        //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)hu_preloadContent;
-(NUIContainerStackView *)stackView;
-(void)setWantsPreferredContentSize:(BOOL)arg1 ;
-(BOOL)isViewVisible;
-(HUGridLayoutOptions *)layoutOptions;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setViewVisible:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setStackView:(NUIContainerStackView *)arg1 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)wantsPreferredContentSize;
-(void)statusDetailViewControllerDidFinish:(id)arg1 ;
-(NSMutableArray *)viewVisibleFutures;
-(BOOL)hasFinishedInitialLoad;
-(void)setHasFinishedInitialLoad:(BOOL)arg1 ;
-(void)presentHomeStatusDetailsWithSender:(id)arg1 ;
-(void)updatePreferredContentSizeIfNeeded;
-(void)configureLabel:(id)arg1 forItem:(id)arg2 ;
-(HFHomeStatusItemManager *)statusItemManager;
-(void)setStatusItemManager:(HFHomeStatusItemManager *)arg1 ;
@end

