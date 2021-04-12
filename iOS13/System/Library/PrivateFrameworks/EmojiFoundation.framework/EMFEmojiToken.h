/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/

#import <EmojiFoundation/EmojiFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, EMFEmojiLocaleData;

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding> {

	EmojiTokenWrapperRef _emojiTokenRef;
	BOOL _didFailCEM;
	NSString* _localeIdentifier;
	NSString* _string;

}

@property (nonatomic,retain) NSString * localeIdentifier;                             //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * string;                                         //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * _baseString; 
@property (nonatomic,copy,readonly) NSArray * _skinToneVariantStrings; 
@property (nonatomic,readonly) BOOL _shouldHighlightEmoji; 
@property (nonatomic,readonly) const EmojiTokenWrapperRef emojiTokenRef;              //@synthesize emojiTokenRef=_emojiTokenRef - In the implementation block
@property (nonatomic,readonly) EMFEmojiLocaleData * localeData; 
@property (nonatomic,readonly) BOOL supportsSkinToneVariants; 
@property (nonatomic,readonly) int skinTone; 
@property (nonatomic,readonly) NSArray * skinToneSpecifiers; 
@property (nonatomic,readonly) NSArray * skinToneChooserVariants; 
@property (nonatomic,copy,readonly) NSArray * skinToneVariants; 
@property (nonatomic,readonly) int presentationStyle; 
@property (nonatomic,readonly) BOOL isCommon; 
+(BOOL)supportsSecureCoding;
+(id)emojiTokenWithString:(id)arg1 localeData:(id)arg2 ;
+(id)emojiTokenWithCEMEmojiToken:(EmojiTokenWrapperRef)arg1 ;
+(id)emojiTokensForCEMEmojiTokens:(CFArrayRef)arg1 ;
+(id)emojiTokenWithLongCharacter:(unsigned)arg1 localeData:(id)arg2 ;
-(NSString *)string;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localeIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSString *)_baseString;
-(int)presentationStyle;
-(BOOL)supportsSkinToneVariants;
-(NSArray *)_skinToneVariantStrings;
-(BOOL)_shouldHighlightEmoji;
-(id)copyWithSkinToneVariantSpecifier:(id)arg1 ;
-(id)copyWithSkinToneVariant:(int)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(id)copyWithoutModifiers;
-(EMFEmojiLocaleData *)localeData;
-(int)skinTone;
-(BOOL)isEqualIgnoringModifiers:(id)arg1 ;
-(id)initWithCEMEmojiToken:(EmojiTokenWrapperRef)arg1 ;
-(id)initWithString:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)_createEmojiTokenRefIfNecessary;
-(const EmojiTokenWrapperRef)emojiTokenRef;
-(NSArray *)skinToneSpecifiers;
-(NSArray *)skinToneChooserVariants;
-(NSArray *)skinToneVariants;
-(BOOL)supportsPresentationStyle:(int)arg1 ;
-(id)copyWithPresentationStyle:(int)arg1 ;
-(BOOL)isCommon;
-(id)relatedEmojiTokens:(unsigned long long)arg1 ;
-(id)nameForType:(int)arg1 ;
@end

