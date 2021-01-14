/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isShowingMediaControls;
-(void)setContentActionProvider:(id<SBFActionProviding>)arg1 ;
-(id<SBFActionProviding>)contentActionProvider;
-(BOOL)respondingToSubviewLayoutChange;
-(id)init;
-(id<CSNotificationAdjunctListViewControllerDelegate>)delegate;
-(BOOL)handleEvent:(id)arg1 ;
-(id)_groupNameBase;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_didUpdateDisplay;
-(NSMutableArray *)dismissingItems;
-(CGAffineTransform)_disappearedTransformForContentWithHeight:(double)arg1 ;
-(UIStackView *)stackView;
-(BOOL)_canAnimate;
-(double)listViewContentAnimationDuration;
-(void)setIdentifiersToItems:(NSMutableDictionary *)arg1 ;
-(CSContentActionInterpreter *)actionInterpreter;
-(CGSize)sizeToMimic;
-(void)adjunctListModel:(id)arg1 didAddItem:(id)arg2 ;
-(void)setDelegate:(id<CSNotificationAdjunctListViewControllerDelegate>)arg1 ;
-(double)listViewContentAnimationDampingRatio;
-(void)viewDidLoad;
-(void)setActionInterpreter:(CSContentActionInterpreter *)arg1 ;
-(void)adjunctListModel:(id)arg1 didRemoveItem:(id)arg2 ;
-(NSMutableDictionary *)identifiersToItems;
-(void)setRespondingToSubviewLayoutChange:(BOOL)arg1 ;
-(BOOL)isPresentingContent;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setNowPlayingController:(CSNowPlayingController *)arg1 ;
-(id)_createPlatterForHost:(id)arg1 recipe:(long long)arg2 ;
-(void)_insertItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_removeItem:(id)arg1 animated:(BOOL)arg2 ;
-(CSNowPlayingController *)nowPlayingController;
-(void)setDismissingItems:(NSMutableArray *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setStackView:(UIStackView *)arg1 ;
@end

