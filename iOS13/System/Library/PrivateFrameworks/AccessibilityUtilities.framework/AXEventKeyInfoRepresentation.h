/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	BOOL _keyDown;
	unsigned short _keyCode;
	unsigned short _alternativeKeyCode;
	unsigned _usagePage;
	unsigned _modifierState;
	unsigned _gsModifierState;
	NSString* _unmodifiedInput;
	NSString* _modifiedInput;
	NSString* _shiftModifiedInput;
	NSString* _backupUnmodifiedInput;
	NSString* _backupModifiedInput;
	NSString* _backupShiftModifiedInput;

}

@property (assign,nonatomic) unsigned short keyCode;                         //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) unsigned short alternativeKeyCode;              //@synthesize alternativeKeyCode=_alternativeKeyCode - In the implementation block
@property (assign,nonatomic) unsigned usagePage;                             //@synthesize usagePage=_usagePage - In the implementation block
@property (assign,nonatomic) BOOL keyDown;                                   //@synthesize keyDown=_keyDown - In the implementation block
@property (nonatomic,copy) NSString * unmodifiedInput;                       //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,copy) NSString * modifiedInput;                         //@synthesize modifiedInput=_modifiedInput - In the implementation block
@property (nonatomic,copy) NSString * shiftModifiedInput;                    //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (assign,nonatomic) unsigned modifierState;                         //@synthesize modifierState=_modifierState - In the implementation block
@property (nonatomic,copy) NSString * backupUnmodifiedInput;                 //@synthesize backupUnmodifiedInput=_backupUnmodifiedInput - In the implementation block
@property (nonatomic,copy) NSString * backupModifiedInput;                   //@synthesize backupModifiedInput=_backupModifiedInput - In the implementation block
@property (nonatomic,copy) NSString * backupShiftModifiedInput;              //@synthesize backupShiftModifiedInput=_backupShiftModifiedInput - In the implementation block
@property (assign,nonatomic) unsigned gsModifierState;                       //@synthesize gsModifierState=_gsModifierState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(GSKeyboardRef)_getUIKitKeyboardRef;
+(GSKeyboardRef)_getUSUIKitKeyboardRef;
+(void)prepareForKeycodeTranslation;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)unmodifiedInput;
-(NSString *)modifiedInput;
-(unsigned short)keyCode;
-(void)setUnmodifiedInput:(NSString *)arg1 ;
-(NSString *)shiftModifiedInput;
-(void)setShiftModifiedInput:(NSString *)arg1 ;
-(id)accessibilityEventRepresentationTabularDescription;
-(void)setKeyCode:(unsigned short)arg1 ;
-(unsigned)modifierState;
-(void)setUsagePage:(unsigned)arg1 ;
-(void)setKeyDown:(BOOL)arg1 ;
-(void)setModifiedInput:(NSString *)arg1 ;
-(void)setBackupUnmodifiedInput:(NSString *)arg1 ;
-(void)setBackupModifiedInput:(NSString *)arg1 ;
-(void)setBackupShiftModifiedInput:(NSString *)arg1 ;
-(void)setModifierState:(unsigned)arg1 ;
-(void)setGsModifierState:(unsigned)arg1 ;
-(void)setAlternativeKeyCode:(unsigned short)arg1 ;
-(unsigned)gsModifierState;
-(unsigned)usagePage;
-(unsigned short)alternativeKeyCode;
-(BOOL)keyDown;
-(NSString *)backupUnmodifiedInput;
-(NSString *)backupShiftModifiedInput;
-(NSString *)backupModifiedInput;
-(GSKeyboardRef)_getUIKitKeyboardRef;
-(GSKeyboardRef)_getUSUIKitKeyboardRef;
-(void)translateStringToKeycode;
-(void)translateKeycode;
@end

