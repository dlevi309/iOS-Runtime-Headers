/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSArray, AXAttributedString, NSString;

@interface AXSSKeyChord : NSObject <NSSecureCoding, NSCopying> {

	NSNumber* _cachedIsFunctionKey;
	NSNumber* _cachedContainsModifier;
	NSArray* _keys;

}

@property (nonatomic,readonly) AXAttributedString * accessibilitySpeakableDisplayValue; 
@property (nonatomic,readonly) AXAttributedString * fkaSpeakableDisplayValue; 
@property (nonatomic,retain) NSArray * keys;                                                         //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSString * displayValue; 
@property (nonatomic,readonly) BOOL isFunctionKeyChord; 
@property (nonatomic,readonly) BOOL containsModifier; 
@property (nonatomic,readonly) BOOL isTextInputChord; 
@property (nonatomic,readonly) BOOL isTextInputTabChord; 
@property (nonatomic,readonly) BOOL isArrowKeyChord; 
@property (nonatomic,readonly) BOOL isNull; 
+(id)keyChordWithEvent:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)keyChordWithKeys:(id)arg1 ;
+(id)keyChordWithString:(id)arg1 ;
+(id)nullKeyChord;
+(id)keyFromKeyCode:(unsigned long long)arg1 unicodeCharacter:(id)arg2 ;
-(id)accessibilitySpeakableDisplayValueWithStyle:(long long)arg1 ;
-(id)_accessibilitySpeakableDisplayValueWithStyle:(long long)arg1 isUSKeyboard:(BOOL)arg2 ;
-(AXAttributedString *)accessibilitySpeakableDisplayValue;
-(AXAttributedString *)fkaSpeakableDisplayValue;
-(id)keyChordByUpdatingModifiersFromEvent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)keys;
-(void)setKeys:(NSArray *)arg1 ;
-(NSString *)displayValue;
-(BOOL)isNull;
-(id)displayValueWithStyle:(long long)arg1 isUSKeyboard:(BOOL)arg2 ;
-(BOOL)isFunctionKeyChord;
-(id)_initWithKeys:(id)arg1 ;
-(id)_normalizeKeys:(id)arg1 ;
-(BOOL)isEqualToKeyChord:(id)arg1 ;
-(BOOL)isTextInputTabChord;
-(BOOL)isArrowKeyChord;
-(id)displayValueWithStyle:(long long)arg1 ;
-(id)_displayValueWithSortedModifiers:(id)arg1 isUSKeyboard:(BOOL)arg2 ;
-(BOOL)containsModifier;
-(BOOL)isTextInputChord;
@end

