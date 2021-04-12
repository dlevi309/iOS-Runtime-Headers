/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding> {

	SCD_Union_TI22 _mask;
	NSString* _textContentType;
	NSString* _recentInputIdentifier;

}

@property (assign,nonatomic) unsigned long long autocapitalizationType; 
@property (assign,nonatomic) unsigned long long autocorrectionType; 
@property (assign,nonatomic) unsigned long long spellCheckingType; 
@property (assign,nonatomic) unsigned long long keyboardType; 
@property (assign,nonatomic) unsigned long long keyboardAppearance; 
@property (assign,nonatomic) unsigned long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * recentInputIdentifier;                         //@synthesize recentInputIdentifier=_recentInputIdentifier - In the implementation block
@property (nonatomic,copy) NSString * textContentType;                               //@synthesize textContentType=_textContentType - In the implementation block
@property (assign,nonatomic) unsigned long long textScriptType; 
@property (assign,nonatomic) BOOL smartInsertDeleteEnabled; 
@property (assign,nonatomic) BOOL smartQuotesEnabled; 
@property (assign,nonatomic) BOOL smartDashesEnabled; 
@property (assign,nonatomic) unsigned long long smartInsertDeleteType; 
@property (assign,nonatomic) unsigned long long smartQuotesType; 
@property (assign,nonatomic) unsigned long long smartDashesType; 
@property (assign,nonatomic) BOOL disablePrediction; 
+(unsigned long long)translateToTextInputAutocapitalizationType:(long long)arg1 ;
+(unsigned long long)translateToTextInputAutocorrectionType:(long long)arg1 ;
+(unsigned long long)translateToTextInputSpellCheckingType:(long long)arg1 ;
+(unsigned long long)translateToTextInputKeyboardType:(long long)arg1 ;
+(unsigned long long)translateToTextInputKeyboardAppearance:(long long)arg1 ;
+(unsigned long long)translateToTextInputReturnKeyType:(long long)arg1 ;
+(BOOL)translateToTextInputSmartInsertDeleteEnabled:(long long)arg1 ;
+(unsigned long long)translateToTextScriptType:(long long)arg1 ;
+(id)translateToTextInputRecentInputIdentifier:(id)arg1 ;
+(id)traitsForUITextInputTraits:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)keyboardType;
-(BOOL)smartQuotesEnabled;
-(void)setSmartQuotesEnabled:(BOOL)arg1 ;
-(BOOL)smartDashesEnabled;
-(void)setSmartDashesEnabled:(BOOL)arg1 ;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)setAutocorrectionType:(unsigned long long)arg1 ;
-(void)setAutocapitalizationType:(unsigned long long)arg1 ;
-(void)setSmartQuotesType:(unsigned long long)arg1 ;
-(void)setSmartDashesType:(unsigned long long)arg1 ;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(void)setReturnKeyType:(unsigned long long)arg1 ;
-(void)setKeyboardType:(unsigned long long)arg1 ;
-(void)setSpellCheckingType:(unsigned long long)arg1 ;
-(void)setKeyboardAppearance:(unsigned long long)arg1 ;
-(void)setTextContentType:(NSString *)arg1 ;
-(void)setSmartInsertDeleteType:(unsigned long long)arg1 ;
-(unsigned long long)spellCheckingType;
-(unsigned long long)autocorrectionType;
-(unsigned long long)autocapitalizationType;
-(unsigned long long)keyboardAppearance;
-(unsigned long long)returnKeyType;
-(BOOL)enablesReturnKeyAutomatically;
-(NSString *)textContentType;
-(unsigned long long)smartInsertDeleteType;
-(unsigned long long)smartQuotesType;
-(unsigned long long)smartDashesType;
-(NSString *)recentInputIdentifier;
-(void)setRecentInputIdentifier:(NSString *)arg1 ;
-(unsigned long long)textScriptType;
-(void)setTextScriptType:(unsigned long long)arg1 ;
-(BOOL)disablePrediction;
-(void)setDisablePrediction:(BOOL)arg1 ;
-(void)setSmartInsertDeleteEnabled:(BOOL)arg1 ;
-(BOOL)secureTextEntry;
-(BOOL)smartInsertDeleteEnabled;
@end

