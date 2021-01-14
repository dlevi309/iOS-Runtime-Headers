/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSHIDEventKeyCommand : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying> {

	NSString* _input;
	long long _keyCode;
	long long _modifierFlags;
	NSString* _unmodifiedInput;
	NSString* _shiftModifiedInput;
	NSString* _commandModifiedInput;

}

@property (nonatomic,retain) NSString * unmodifiedInput;                   //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * shiftModifiedInput;                //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * commandModifiedInput;              //@synthesize commandModifiedInput=_commandModifiedInput - In the implementation block
@property (nonatomic,readonly) NSString * input;                           //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) long long keyCode;                          //@synthesize keyCode=_keyCode - In the implementation block
@property (nonatomic,readonly) long long modifierFlags;                    //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) BOOL isTextualKeyCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_keyCodeIsModifierKey:(long long)arg1 ;
+(id)keyCommandForEvent:(IOHIDEventRef)arg1 gsKeyboard:(GSKeyboardRef)arg2 ;
+(id)descriptorWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
+(id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 ;
+(id)descriptorWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 ;
+(id)keyCommandForEvent:(IOHIDEventRef)arg1 gsKeyboard:(GSKeyboardRef)arg2 activeModifiers:(long long*)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
+(BOOL)_shouldMatchKeyCommandsWithKeyCode:(long long)arg1 gsKeyboard:(GSKeyboardRef)arg2 ;
-(NSString *)commandModifiedInput;
-(id)init;
-(void)_appendPropertiesCommon:(id)arg1 ;
-(NSString *)input;
-(long long)describes:(id)arg1 ;
-(long long)modifierFlags;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)keyCode;
-(void)setShiftModifiedInput:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)unmodifiedInput;
-(void)setUnmodifiedInput:(NSString *)arg1 ;
-(NSString *)shiftModifiedInput;
-(id)_sanitizedInputForDescription;
-(id)_initWithInput:(id)arg1 keyCode:(long long)arg2 modifierFlags:(long long)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTextualKeyCommand;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCommandModifiedInput:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

