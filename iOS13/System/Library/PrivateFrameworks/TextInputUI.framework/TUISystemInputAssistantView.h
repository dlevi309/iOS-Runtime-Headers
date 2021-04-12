/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TUIAssistantButtonBarViewDelegate.h>
#import <libobjc.A.dylib/TUISystemInputAssistantPageViewDelegate.h>

@protocol TUISystemInputAssistantViewDelegate;
@class UIKBRenderConfig, UIKBVisualEffectView, TUISystemInputAssistantLayout, UIView, UITextInputAssistantItem, TUIAssistantButtonBarView, TUISystemInputAssistantPageView, TUISystemInputAssistantLayoutStandard, TUIPredictionView, TUICandidateView, NSString;

@interface TUISystemInputAssistantView : UIView <TUIAssistantButtonBarViewDelegate, TUISystemInputAssistantPageViewDelegate> {

	BOOL _buttonBarItemsExpanded;
	BOOL _needsValidation;
	int _needsValidationGuard;
	BOOL _backgroundVisible;
	BOOL _centerViewHidden;
	BOOL _showsExpandableButtonBarItems;
	BOOL _hidesExpandableButton;
	BOOL _showsButtonBarItemsInline;
	UIKBRenderConfig* _renderConfig;
	UIKBVisualEffectView* _backdropView;
	id<TUISystemInputAssistantViewDelegate> _delegate;
	TUISystemInputAssistantLayout* _layout;
	UIView* _centerView;
	double _centerViewWidth;
	UITextInputAssistantItem* _inputAssistantItem;
	UITextInputAssistantItem* _systemInputAssistantItem;
	TUIAssistantButtonBarView* _leftButtonBar;
	TUIAssistantButtonBarView* _rightButtonBar;
	TUIAssistantButtonBarView* _unifiedButtonBar;
	TUISystemInputAssistantPageView* _centerPageView;
	TUISystemInputAssistantLayoutStandard* _defaultLayout;

}

@property (nonatomic,readonly) TUIPredictionView * predictionView; 
@property (nonatomic,readonly) TUICandidateView * candidateView; 
@property (nonatomic,retain) UIKBVisualEffectView * backdropView;                                  //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * leftButtonBar;                            //@synthesize leftButtonBar=_leftButtonBar - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * rightButtonBar;                           //@synthesize rightButtonBar=_rightButtonBar - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * unifiedButtonBar;                         //@synthesize unifiedButtonBar=_unifiedButtonBar - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantPageView * centerPageView;                     //@synthesize centerPageView=_centerPageView - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutStandard * defaultLayout;                //@synthesize defaultLayout=_defaultLayout - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                                      //@synthesize renderConfig=_renderConfig - In the implementation block
@property (assign,nonatomic,__weak) id<TUISystemInputAssistantViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayout * layout;                               //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL backgroundVisible;                                               //@synthesize backgroundVisible=_backgroundVisible - In the implementation block
@property (nonatomic,retain) UIView * centerView;                                                  //@synthesize centerView=_centerView - In the implementation block
@property (assign,nonatomic) BOOL centerViewHidden;                                                //@synthesize centerViewHidden=_centerViewHidden - In the implementation block
@property (assign,nonatomic) double centerViewWidth;                                               //@synthesize centerViewWidth=_centerViewWidth - In the implementation block
@property (assign,nonatomic) BOOL showsExpandableButtonBarItems;                                   //@synthesize showsExpandableButtonBarItems=_showsExpandableButtonBarItems - In the implementation block
@property (assign,nonatomic) BOOL hidesExpandableButton;                                           //@synthesize hidesExpandableButton=_hidesExpandableButton - In the implementation block
@property (assign,nonatomic) BOOL showsButtonBarItemsInline;                                       //@synthesize showsButtonBarItemsInline=_showsButtonBarItemsInline - In the implementation block
@property (nonatomic,retain) UITextInputAssistantItem * inputAssistantItem;                        //@synthesize inputAssistantItem=_inputAssistantItem - In the implementation block
@property (nonatomic,retain) UITextInputAssistantItem * systemInputAssistantItem;                  //@synthesize systemInputAssistantItem=_systemInputAssistantItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TUISystemInputAssistantViewDelegate>)delegate;
-(void)setDelegate:(id<TUISystemInputAssistantViewDelegate>)arg1 ;
-(TUISystemInputAssistantLayout *)layout;
-(void)setLayout:(TUISystemInputAssistantLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setRenderConfig:(id)arg1 ;
-(UIKBVisualEffectView *)backdropView;
-(void)setBackdropView:(UIKBVisualEffectView *)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)_updateVisualProvider;
-(UITextInputAssistantItem *)inputAssistantItem;
-(void)setBackgroundVisible:(BOOL)arg1 ;
-(void)setButtonBarItemsExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)centerViewHidden;
-(void)setCenterView:(UIView *)arg1 ;
-(void)setCenterViewHidden:(BOOL)arg1 ;
-(void)setShowsExpandableButtonBarItems:(BOOL)arg1 ;
-(BOOL)hidesExpandableButton;
-(void)setHidesExpandableButton:(BOOL)arg1 ;
-(BOOL)showsExpandableButtonBarItems;
-(void)setInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(void)setSystemInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(void)setNeedsValidation;
-(void)setShowsButtonBarItemsInline:(BOOL)arg1 ;
-(void)setCenterViewWidth:(double)arg1 ;
-(TUICandidateView *)candidateView;
-(UIView *)centerView;
-(TUIPredictionView *)predictionView;
-(void)assistantPageView:(id)arg1 didSwitchToSecondaryViewVisible:(BOOL)arg2 ;
-(void)assistantButtonBarView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromButton:(id)arg3 ;
-(BOOL)_areButtonBarItemsVisible;
-(id)_currentLayoutViewSet;
-(void)_updateBarButtonGroups;
-(id)_createUnifiedButtonBarIfNecessary;
-(void)_updateExpandableButtonBarItems;
-(void)_didTapExpandButton:(id)arg1 ;
-(void)_setButtonBarItemsExpanded:(BOOL)arg1 animationType:(unsigned long long)arg2 ;
-(void)validateIfNeeded;
-(BOOL)_swiftPlaygroundsWorkaroundEnabled;
-(BOOL)_shouldHostCenterViewOutsidePageView;
-(void)_exchangeCenterViewIfNecessaryForCompatibility;
-(id)_hostedCenterView;
-(BOOL)backgroundVisible;
-(double)centerViewWidth;
-(BOOL)showsButtonBarItemsInline;
-(UITextInputAssistantItem *)systemInputAssistantItem;
-(TUIAssistantButtonBarView *)leftButtonBar;
-(void)setLeftButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(TUIAssistantButtonBarView *)rightButtonBar;
-(void)setRightButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(TUIAssistantButtonBarView *)unifiedButtonBar;
-(void)setUnifiedButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(TUISystemInputAssistantPageView *)centerPageView;
-(void)setCenterPageView:(TUISystemInputAssistantPageView *)arg1 ;
-(TUISystemInputAssistantLayoutStandard *)defaultLayout;
-(void)setDefaultLayout:(TUISystemInputAssistantLayoutStandard *)arg1 ;
@end

