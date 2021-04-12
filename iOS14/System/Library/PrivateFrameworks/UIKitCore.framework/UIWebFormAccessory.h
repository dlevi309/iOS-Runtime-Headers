/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInputView.h>

@protocol UIWebFormAccessoryDelegate;
@class UIToolbar, UIBarButtonItem, UIBarButtonItemGroup, UISegmentedControl;

@interface UIWebFormAccessory : UIInputView {

	UIToolbar* _leftToolbar;
	UIToolbar* _rightToolbar;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _flexibleSpaceItem;
	UIBarButtonItem* _previousItem;
	UIBarButtonItem* _nextItem;
	UIBarButtonItem* _nextPreviousSpacer;
	UIBarButtonItem* _autofillSpacer;
	UIBarButtonItemGroup* _buttonGroupAutoFill;
	UIBarButtonItemGroup* _buttonGroupNavigation;
	BOOL _usesUCB;
	UISegmentedControl* _tab;
	UIBarButtonItem* _autofill;
	UIBarButtonItem* _clearButton;
	id<UIWebFormAccessoryDelegate> delegate;

}

@property (nonatomic,retain) UISegmentedControl * _tab;                                   //@synthesize tab=_tab - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * _autofill;                                 //@synthesize autofill=_autofill - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * _clearButton;                              //@synthesize clearButton=_clearButton - In the implementation block
@property (assign,nonatomic,__weak) id<UIWebFormAccessoryDelegate> delegate; 
@property (assign,getter=isNextEnabled,nonatomic) BOOL nextEnabled; 
@property (assign,getter=isPreviousEnabled,nonatomic) BOOL previousEnabled; 
+(id)toolbarWithItems:(id)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(UISegmentedControl *)_tab;
-(void)_orientationDidChange:(id)arg1 ;
-(id<UIWebFormAccessoryDelegate>)delegate;
-(void)clear:(id)arg1 ;
-(void)set_tab:(UISegmentedControl *)arg1 ;
-(void)done:(id)arg1 ;
-(void)setDelegate:(id<UIWebFormAccessoryDelegate>)arg1 ;
-(void)autoFill:(id)arg1 ;
-(UIBarButtonItem *)_autofill;
-(void)layoutSubviews;
-(void)_previousTapped:(id)arg1 ;
-(void)_refreshAutofillPresentation;
-(void)_applyTreatmentToAutoFillLabel;
-(id)_autoFillButton;
-(void)showAutoFillButtonWithTitle:(id)arg1 ;
-(void)set_clearButton:(UIBarButtonItem *)arg1 ;
-(id)initWithInputAssistantItem:(id)arg1 ;
-(void)hideAutoFillButton;
-(void)showAutoFillButton;
-(void)setClearVisible:(BOOL)arg1 ;
-(void)setNextEnabled:(BOOL)arg1 ;
-(void)setNextPreviousItemsVisible:(BOOL)arg1 ;
-(void)setPreviousEnabled:(BOOL)arg1 ;
-(BOOL)isPreviousEnabled;
-(UIBarButtonItem *)_clearButton;
-(void)initForUCB:(id)arg1 ;
-(void)_nextTapped:(id)arg1 ;
-(void)_updateFrame;
-(BOOL)isNextEnabled;
-(void)set_autofill:(UIBarButtonItem *)arg1 ;
-(void)dealloc;
@end

