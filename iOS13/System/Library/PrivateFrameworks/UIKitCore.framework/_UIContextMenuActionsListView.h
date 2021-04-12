/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIContextMenuActionsListViewDelegate;
@class UIFont, UIMenu, UIInterfaceActionGroupView;

@interface _UIContextMenuActionsListView : UIView {

	UIFont* _labelFont;
	BOOL _surfacesActionRadius;
	BOOL _showsShadow;
	BOOL _showsTitle;
	BOOL _reversesActionOrder;
	id<_UIContextMenuActionsListViewDelegate> _delegate;
	UIMenu* _displayedMenu;
	UIInterfaceActionGroupView* _currentActionGroupView;

}

@property (nonatomic,retain) UIInterfaceActionGroupView * currentActionGroupView;                    //@synthesize currentActionGroupView=_currentActionGroupView - In the implementation block
@property (nonatomic,copy) UIMenu * displayedMenu;                                                   //@synthesize displayedMenu=_displayedMenu - In the implementation block
@property (assign,nonatomic,__weak) id<_UIContextMenuActionsListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL surfacesActionRadius;                                              //@synthesize surfacesActionRadius=_surfacesActionRadius - In the implementation block
@property (assign,nonatomic) BOOL showsShadow;                                                       //@synthesize showsShadow=_showsShadow - In the implementation block
@property (assign,nonatomic) BOOL showsTitle;                                                        //@synthesize showsTitle=_showsTitle - In the implementation block
@property (assign,nonatomic) BOOL reversesActionOrder;                                               //@synthesize reversesActionOrder=_reversesActionOrder - In the implementation block
-(id<_UIContextMenuActionsListViewDelegate>)delegate;
-(void)setDelegate:(id<_UIContextMenuActionsListViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)_labelFont;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setShowsTitle:(BOOL)arg1 ;
-(void)setDisplayedMenu:(id)arg1 withAnimationStyle:(unsigned long long)arg2 alongsideAnimations:(/*^block*/id)arg3 ;
-(UIInterfaceActionGroupView *)currentActionGroupView;
-(double)_clampedCornerRadiusForGroupView:(id)arg1 ;
-(id)_reversedActionGroupForActionGroup:(id)arg1 ;
-(void)setDisplayedMenu:(UIMenu *)arg1 ;
-(UIMenu *)displayedMenu;
-(id)_interfaceActionGroupForActions:(id)arg1 ;
-(BOOL)showsTitle;
-(void)setCurrentActionGroupView:(UIInterfaceActionGroupView *)arg1 ;
-(BOOL)reversesActionOrder;
-(id)_loadingInterfaceAction;
-(void)_performActionForPreviewAction:(id)arg1 ;
-(id)initWithMenu:(id)arg1 ;
-(void)setSurfacesActionRadius:(BOOL)arg1 ;
-(void)setShowsShadow:(BOOL)arg1 ;
-(void)setReversesActionOrder:(BOOL)arg1 ;
-(void)kickstartActionScrubbingWithGesture:(id)arg1 ;
-(void)_testing_tapAnAction;
-(BOOL)surfacesActionRadius;
-(BOOL)showsShadow;
@end

