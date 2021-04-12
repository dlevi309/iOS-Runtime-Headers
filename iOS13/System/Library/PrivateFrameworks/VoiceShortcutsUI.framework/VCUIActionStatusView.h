/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <VoiceShortcutsUI/VoiceShortcutsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICProgressStateMachineObserving.h>

@protocol VCUIActionStatusViewDelegate;
@class UIView, _VCUIActionStatusErrorView, NSString;

@interface VCUIActionStatusView : UIView <SUICProgressStateMachineObserving> {

	id<VCUIActionStatusViewDelegate> _delegate;
	UIView* _activityView;
	_VCUIActionStatusErrorView* _errorView;

}

@property (nonatomic,retain) UIView * activityView;                                         //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) _VCUIActionStatusErrorView * errorView;                        //@synthesize errorView=_errorView - In the implementation block
@property (assign,nonatomic,__weak) id<VCUIActionStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<VCUIActionStatusViewDelegate>)delegate;
-(void)setDelegate:(id<VCUIActionStatusViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)activityView;
-(void)setActivityView:(UIView *)arg1 ;
-(void)resetState;
-(_VCUIActionStatusErrorView *)errorView;
-(void)setErrorView:(_VCUIActionStatusErrorView *)arg1 ;
-(void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4 ;
-(void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2 ;
-(void)_setUpViews;
-(void)_updateAcitivityViewSubviewWithDelegateProvidedView;
@end

