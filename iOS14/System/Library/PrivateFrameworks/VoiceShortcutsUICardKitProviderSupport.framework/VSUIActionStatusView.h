/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUICardKitProviderSupport.framework/VoiceShortcutsUICardKitProviderSupport
*/

#import <VoiceShortcutsUICardKitProviderSupport/VoiceShortcutsUICardKitProviderSupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICProgressStateMachineObserving.h>

@protocol VSUIActionStatusViewDelegate;
@class UIView, _VSUIActionStatusErrorView, NSString;

@interface VSUIActionStatusView : UIView <SUICProgressStateMachineObserving> {

	id<VSUIActionStatusViewDelegate> _delegate;
	UIView* _activityView;
	_VSUIActionStatusErrorView* _errorView;

}

@property (nonatomic,retain) UIView * activityView;                                         //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) _VSUIActionStatusErrorView * errorView;                        //@synthesize errorView=_errorView - In the implementation block
@property (assign,nonatomic,__weak) id<VSUIActionStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<VSUIActionStatusViewDelegate>)delegate;
-(UIView *)activityView;
-(void)setActivityView:(UIView *)arg1 ;
-(void)setDelegate:(id<VSUIActionStatusViewDelegate>)arg1 ;
-(_VSUIActionStatusErrorView *)errorView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resetState;
-(id)initWithCoder:(id)arg1 ;
-(void)setErrorView:(_VSUIActionStatusErrorView *)arg1 ;
-(void)_setUpViews;
-(void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4 ;
-(void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2 ;
-(void)_updateAcitivityViewSubviewWithDelegateProvidedView;
@end

