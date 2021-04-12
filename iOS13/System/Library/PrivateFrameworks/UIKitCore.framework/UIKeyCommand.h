/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICommand.h>

@class NSString, NSIndexSet, UIEvent, UIResponder, UIViewController, UIImage, NSArray;

@interface UIKeyCommand : UICommand {

	NSString* _lastLayout;
	NSIndexSet* _keyCodes;
	SEL _upAction;
	BOOL _repeatable;
	BOOL _isPlaceholder;
	long long _buttonType;
	UIEvent* _triggeringEvent;
	UIResponder* _originatingResponder;
	NSString* _segueIdentifier;
	UIViewController* _controllerForSegue;
	BOOL _handleAfterKeyEvent;
	NSString* _input;
	long long _modifierFlags;
	NSString* _layoutAwareInput;
	long long _layoutAwareModifierFlags;

}

@property (nonatomic,readonly) NSString * _layoutAwareInput;                        //@synthesize layoutAwareInput=_layoutAwareInput - In the implementation block
@property (nonatomic,readonly) long long _layoutAwareModifierFlags;                 //@synthesize layoutAwareModifierFlags=_layoutAwareModifierFlags - In the implementation block
@property (nonatomic,readonly) NSString * discoverabilityInput; 
@property (nonatomic,readonly) SEL upAction; 
@property (nonatomic,readonly) BOOL repeatable; 
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) NSIndexSet * _keyCodes; 
@property (nonatomic,readonly) long long _buttonType; 
@property (nonatomic,readonly) UIEvent * _triggeringEvent; 
@property (nonatomic,readonly) NSString * _segueIdentifier; 
@property (nonatomic,readonly) UIViewController * _controllerForSegue; 
@property (nonatomic,readonly) BOOL _handleAfterKeyEvent; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle; 
@property (nonatomic,readonly) SEL action; 
@property (nonatomic,readonly) NSString * input;                                    //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) long long modifierFlags;                             //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) id propertyList; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,readonly) NSArray * alternates; 
+(BOOL)supportsSecureCoding;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4 ;
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6 ;
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6 alternates:(id)arg7 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4 ;
+(id)keyCommandWithCompactInput:(id)arg1 action:(SEL)arg2 upAction:(SEL)arg3 ;
+(id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4 ;
+(id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 discoverabilityTitle:(id)arg4 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4 discoverabilityTitle:(id)arg5 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)input;
-(BOOL)isPlaceholder;
-(id)nextResponder;
-(id)_immutableCopy;
-(long long)_buttonType;
-(long long)modifierFlags;
-(NSIndexSet *)_keyCodes;
-(NSString *)_segueIdentifier;
-(id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned long long)arg7 state:(long long)arg8 ;
-(id)initWithCommand:(id)arg1 ;
-(id)initWithKeyCommand:(id)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6 alternates:(id)arg7 discoverabilityTitle:(id)arg8 attributes:(unsigned long long)arg9 state:(long long)arg10 ;
-(id)_initWithInput:(id)arg1 modifierFlags:(long long)arg2 keyCodes:(id)arg3 action:(SEL)arg4 upAction:(SEL)arg5 discoverabilityTitle:(id)arg6 buttonType:(long long)arg7 segueIdentifier:(id)arg8 ;
-(UIViewController *)_controllerForSegue;
-(void)_localizeWithGSKeyboard:(GSKeyboardRef)arg1 ;
-(NSString *)discoverabilityInput;
-(BOOL)triggerSegueIfPossible;
-(id)_nonRepeatableKeyCommand;
-(id)_placeholderKeyCommand;
-(SEL)upAction;
-(BOOL)repeatable;
-(UIEvent *)_triggeringEvent;
-(void)_setTriggeringEvent:(id)arg1 ;
-(void)_setOriginatingResponder:(id)arg1 ;
-(void)_markHandleAfterKeyEvent;
-(BOOL)_handleAfterKeyEvent;
-(id)_leafKeyInput;
-(long long)_leafKeyModifierFlags;
-(void)_setViewControllerForSegue:(id)arg1 ;
-(NSString *)_layoutAwareInput;
-(long long)_layoutAwareModifierFlags;
@end

