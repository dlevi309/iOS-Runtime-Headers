/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIKBVisualEffectView *)backdropView;
-(void)_setRenderConfig:(id)arg1 ;
-(BOOL)hidesExpandableButton;
-(void)validateIfNeeded;
-(void)setBackdropView:(UIKBVisualEffectView *)arg1 ;
-(id)_currentLayoutViewSet;
-(void)assistantButtonBarView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromButton:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(TUISystemInputAssistantPageView *)centerPageView;
-(void)setCenterView:(UIView *)arg1 ;
-(void)setCenterViewWidth:(double)arg1 ;
-(void)setShowsExpandableButtonBarItems:(BOOL)arg1 ;
-(id<TUISystemInputAssistantViewDelegate>)delegate;
-(id)_createUnifiedButtonBarIfNecessary;
-(TUIAssistantButtonBarView *)unifiedButtonBar;
-(void)_updateVisualProvider;
-(UITextInputAssistantItem *)inputAssistantItem;
-(BOOL)_swiftPlaygroundsWorkaroundEnabled;
-(void)_updateBarButtonGroups;
-(void)_didTapExpandButton:(id)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(BOOL)backgroundVisible;
-(void)setLeftButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(TUIPredictionView *)predictionView;
-(void)setNeedsValidation;
-(TUIAssistantButtonBarView *)leftButtonBar;
-(void)setDefaultLayout:(TUISystemInputAssistantLayoutStandard *)arg1 ;
-(double)centerViewWidth;
-(void)setButtonBarItemsExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<TUISystemInputAssistantViewDelegate>)arg1 ;
-(id)_hostedCenterView;
-(void)setSystemInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(void)layoutSubviews;
-(UITextInputAssistantItem *)systemInputAssistantItem;
-(void)setInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(BOOL)_shouldHostCenterViewOutsidePageView;
-(void)assistantPageView:(id)arg1 didSwitchToSecondaryViewVisible:(BOOL)arg2 ;
-(void)setRightButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(BOOL)centerViewHidden;
-(BOOL)_areButtonBarItemsVisible;
-(BOOL)showsButtonBarItemsInline;
-(BOOL)showsExpandableButtonBarItems;
-(void)setCenterViewHidden:(BOOL)arg1 ;
-(TUISystemInputAssistantLayoutStandard *)defaultLayout;
-(TUICandidateView *)candidateView;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setHidesExpandableButton:(BOOL)arg1 ;
-(void)setUnifiedButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(void)_setButtonBarItemsExpanded:(BOOL)arg1 animationType:(unsigned long long)arg2 ;
-(void)setBackgroundVisible:(BOOL)arg1 ;
-(void)_exchangeCenterViewIfNecessaryForCompatibility;
-(void)setLayout:(TUISystemInputAssistantLayout *)arg1 ;
-(void)setShowsButtonBarItemsInline:(BOOL)arg1 ;
-(UIView *)centerView;
-(BOOL)shouldSkipValidation;
-(void)_updateExpandableButtonBarItems;
-(TUIAssistantButtonBarView *)rightButtonBar;
-(void)setCenterPageView:(TUISystemInputAssistantPageView *)arg1 ;
-(TUISystemInputAssistantLayout *)layout;
@end

