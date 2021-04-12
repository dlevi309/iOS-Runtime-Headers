/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)characters;
-(NSString *)charactersIgnoringModifiers;
-(long long)modifierFlags;
-(NSString *)unmodifiedInput;
-(NSString *)modifiedInput;
-(long long)keyCode;
-(id)_initWithKey:(id)arg1 ;
-(id)initWithKeyboardEvent:(id)arg1 ;
-(void)_setModifierFlags:(long long)arg1 ;
-(void)_setKeyCode:(long long)arg1 ;
-(void)_setUnmodifiedInput:(id)arg1 ;
-(void)_setModifiedInput:(id)arg1 ;
@end

