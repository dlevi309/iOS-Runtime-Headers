/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUIPasscodeLockViewDelegate.h>

@protocol AFUIPasscodeContainerViewDelegate, SBUIPasscodeLockView;
@class AFUIPasscodeBlurView, _UIBackdropView, UIView, NSString;

@interface AFUIPasscodeContainerView : UIView <SBUIPasscodeLockViewDelegate> {

	AFUIPasscodeBlurView* _passcodeBlurView;
	long long _mode;
	Class _factoryClass;
	id<AFUIPasscodeContainerViewDelegate> _delegate;
	_UIBackdropView* _backdropView;
	/*^block*/id _unlockCompletion;
	unsigned long long _unlockAttemptCount;
	UIView*<SBUIPasscodeLockView> _lockView;

}

@property (assign,nonatomic,__weak) _UIBackdropView * backdropView;                              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,copy) id unlockCompletion;                                                  //@synthesize unlockCompletion=_unlockCompletion - In the implementation block
@property (assign,nonatomic) unsigned long long unlockAttemptCount;                              //@synthesize unlockAttemptCount=_unlockAttemptCount - In the implementation block
@property (nonatomic,retain) UIView*<SBUIPasscodeLockView> lockView;                             //@synthesize lockView=_lockView - In the implementation block
@property (assign,nonatomic,__weak) id<AFUIPasscodeContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)maxUnlockAttempts;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(id<AFUIPasscodeContainerViewDelegate>)delegate;
-(UIView*<SBUIPasscodeLockView>)lockView;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)setDelegate:(id<AFUIPasscodeContainerViewDelegate>)arg1 ;
-(id)unlockCompletion;
-(void)setUnlockCompletion:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)setLockView:(UIView*<SBUIPasscodeLockView>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backdropView:(id)arg2 mode:(long long)arg3 passcodeViewFactoryClass:(Class)arg4 ;
-(void)showPasscodeUnlockWithStatusText:(id)arg1 subtitle:(id)arg2 completionHandler:(/*^block*/id)arg3 unlockCompletionHandler:(/*^block*/id)arg4 ;
-(void)cancelShowingPasscodeUnlock;
-(void)cleanupWithResult:(long long)arg1 ;
-(id)_lockViewLegibilityProvider;
-(unsigned long long)unlockAttemptCount;
-(void)setUnlockAttemptCount:(unsigned long long)arg1 ;
@end

