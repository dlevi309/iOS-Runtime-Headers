/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFieldEditorHost.h>

@class _UIFieldEditorSystemInputHostView, UIVisualEffectView, UISystemInputViewController;

@interface _UIFieldEditorSystemInputHost : _UIFieldEditorHost {

	_UIFieldEditorSystemInputHostView* _containerView;
	UIVisualEffectView* _backgroundEffectView;
	UISystemInputViewController* _systemInputViewController;

}

@property (nonatomic,readonly) UISystemInputViewController * _systemInputViewController;              //@synthesize systemInputViewController=_systemInputViewController - In the implementation block
-(BOOL)_isTV;
-(void)layoutIfNeeded;
-(id)description;
-(void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(BOOL)arg1 ;
-(UISystemInputViewController *)_systemInputViewController;
-(void)addFieldEditor:(id)arg1 ;
-(void)addPlaceholderLabel:(id)arg1 ;
-(id)_viewForHostingFieldEditor;
-(void)removeFieldEditor;
-(void)dealloc;
@end

