/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface UIKey : NSObject <NSCopying, NSCoding> {

	long long _modifierFlags;
	long long _keyCode;
	NSString* _unmodifiedInput;
	NSString* _modifiedInput;

}

@property (setter=_setUnmodifiedInput:,nonatomic,retain) NSString * unmodifiedInput;              //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (setter=_setModifiedInput:,nonatomic,retain) NSString * modifiedInput;                  //@synthesize modifiedInput=_modifiedInput - In the implementation block
@property (assign,setter=_setModifierFlags:,nonatomic) long long modifierFlags;                   //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (assign,setter=_setKeyCode:,nonatomic) long long keyCode;                               //@synthesize keyCode=_keyCode - In the implementation block
@property (nonatomic,readonly) NSString * characters; 
@property (nonatomic,readonly) NSString * charactersIgnoringModifiers; 
-(NSString *)characters;
-(long long)modifierFlags;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)keyCode;
-(id)description;
-(NSString *)unmodifiedInput;
-(NSString *)charactersIgnoringModifiers;
-(NSString *)modifiedInput;
-(id)_initWithKey:(id)arg1 ;
-(long long)modiferFlagsWithoutCapsLockOrNumberPad;
-(id)initWithKeyboardEvent:(id)arg1 ;
-(void)_setModifierFlags:(long long)arg1 ;
-(void)_setUnmodifiedInput:(id)arg1 ;
-(void)_setModifiedInput:(id)arg1 ;
-(BOOL)unmodifiedKeyCodeEquals:(long long)arg1 ;
-(BOOL)modifiersEqual:(long long)arg1 ;
-(BOOL)equalsKeyCode:(long long)arg1 modifiers:(long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setKeyCode:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

