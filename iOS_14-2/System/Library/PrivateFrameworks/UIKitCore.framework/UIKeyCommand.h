/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 discoverabilityTitle:(id)arg4 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4 discoverabilityTitle:(id)arg5 ;
+(id)commandWithTitle:(id)arg1 imageName:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 ;
+(id)keyCommandWithCompactInput:(id)arg1 action:(SEL)arg2 upAction:(SEL)arg3 ;
+(id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 ;
+(id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4 ;
+(id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4 ;
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6 alternates:(id)arg7 ;
-(long long)_layoutAwareModifierFlags;
-(UIViewController *)_controllerForSegue;
-(void)_setOriginatingResponder:(id)arg1 ;
-(void)_localizeWithGSKeyboard:(GSKeyboardRef)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned long long)arg7 state:(long long)arg8 ;
-(id)_leafKeyInput;
-(id)nextResponder;
-(id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6 alternates:(id)arg7 discoverabilityTitle:(id)arg8 attributes:(unsigned long long)arg9 state:(long long)arg10 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 action:(SEL)arg4 propertyList:(id)arg5 alternates:(id)arg6 discoverabilityTitle:(id)arg7 attributes:(unsigned long long)arg8 state:(long long)arg9 ;
-(SEL)upAction;
-(void)_markHandleAfterKeyEvent;
-(BOOL)_handleAfterKeyEvent;
-(NSString *)_layoutAwareInput;
-(BOOL)isPlaceholder;
-(id)_nonRepeatableKeyCommand;
-(BOOL)repeatable;
-(void)_setTriggeringEvent:(id)arg1 ;
-(id)init;
-(BOOL)triggerSegueIfPossible;
-(id)_initWithInput:(id)arg1 modifierFlags:(long long)arg2 keyCodes:(id)arg3 action:(SEL)arg4 upAction:(SEL)arg5 discoverabilityTitle:(id)arg6 buttonType:(long long)arg7 segueIdentifier:(id)arg8 ;
-(NSString *)input;
-(NSIndexSet *)_keyCodes;
-(id)initWithKeyCommand:(id)arg1 ;
-(NSString *)discoverabilityInput;
-(long long)modifierFlags;
-(id)initWithCommand:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)_buttonType;
-(UIEvent *)_triggeringEvent;
-(id)description;
-(long long)_leafKeyModifierFlags;
-(id)_immutableCopy;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_setViewControllerForSegue:(id)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 action:(SEL)arg4 input:(id)arg5 modifierFlags:(long long)arg6 propertyList:(id)arg7 alternates:(id)arg8 discoverabilityTitle:(id)arg9 attributes:(unsigned long long)arg10 state:(long long)arg11 ;
-(NSString *)_segueIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_placeholderKeyCommand;
@end

