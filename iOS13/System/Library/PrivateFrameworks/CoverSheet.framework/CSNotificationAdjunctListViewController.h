/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSAdjunctListModelDelegate.h>

@protocol CSNotificationAdjunctListViewControllerDelegate;
@class CSAdjunctListModel, UIStackView, NSMutableDictionary, NSMutableArray, CSNowPlayingController, CSContentActionInterpreter, NSString;

@interface CSNotificationAdjunctListViewController : CSCoverSheetViewControllerBase <CSAdjunctListModelDelegate> {

	CSAdjunctListModel* _model;
	BOOL _respondingToSubviewLayoutChange;
	id<CSNotificationAdjunctListViewControllerDelegate> _delegate;
	UIStackView* _stackView;
	NSMutableDictionary* _identifiersToItems;
	NSMutableArray* _dismissingItems;
	CSNowPlayingController* _nowPlayingController;
	CSContentActionInterpreter* _actionInterpreter;

}

@property (nonatomic,retain) UIStackView * stackView;                                                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifiersToItems;                                         //@synthesize identifiersToItems=_identifiersToItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * dismissingItems;                                                 //@synthesize dismissingItems=_dismissingItems - In the implementation block
@property (nonatomic,retain) CSNowPlayingController * nowPlayingController;                                    //@synthesize nowPlayingController=_nowPlayingController - In the implementation block
@property (nonatomic,retain) CSContentActionInterpreter * actionInterpreter;                                   //@synthesize actionInterpreter=_actionInterpreter - In the implementation block
@property (assign,nonatomic) BOOL respondingToSubviewLayoutChange;                                             //@synthesize respondingToSubviewLayoutChange=_respondingToSubviewLayoutChange - In the implementation block
@property (getter=isPresentingContent,nonatomic,readonly) BOOL presentingContent; 
@property (getter=isShowingMediaControls,nonatomic,readonly) BOOL showingMediaControls; 
@property (assign,nonatomic,__weak) id<SBFActionProviding> contentActionProvider; 
@property (assign,nonatomic,__weak) id<CSNotificationAdjunctListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double listViewContentAnimationDuration; 
@property (nonatomic,readonly) double listViewContentAnimationDampingRatio; 
@property (nonatomic,readonly) CGSize sizeToMimic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(id)init;
-(id<CSNotificationAdjunctListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSNotificationAdjunctListViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIStackView *)stackView;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)handleEvent:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)_groupNameBase;
-(BOOL)isPresentingContent;
-(BOOL)_canAnimate;
-(BOOL)isShowingMediaControls;
-(id<SBFActionProviding>)contentActionProvider;
-(void)setContentActionProvider:(id<SBFActionProviding>)arg1 ;
-(void)_didUpdateDisplay;
-(CGSize)sizeToMimic;
-(void)_insertItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_removeItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_createPlatterForHost:(id)arg1 recipe:(long long)arg2 ;
-(double)listViewContentAnimationDuration;
-(double)listViewContentAnimationDampingRatio;
-(CGAffineTransform)_disappearedTransformForContentWithHeight:(double)arg1 ;
-(void)adjunctListModel:(id)arg1 didAddItem:(id)arg2 ;
-(void)adjunctListModel:(id)arg1 didRemoveItem:(id)arg2 ;
-(NSMutableDictionary *)identifiersToItems;
-(void)setIdentifiersToItems:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)dismissingItems;
-(void)setDismissingItems:(NSMutableArray *)arg1 ;
-(CSNowPlayingController *)nowPlayingController;
-(void)setNowPlayingController:(CSNowPlayingController *)arg1 ;
-(CSContentActionInterpreter *)actionInterpreter;
-(void)setActionInterpreter:(CSContentActionInterpreter *)arg1 ;
-(BOOL)respondingToSubviewLayoutChange;
-(void)setRespondingToSubviewLayoutChange:(BOOL)arg1 ;
@end

