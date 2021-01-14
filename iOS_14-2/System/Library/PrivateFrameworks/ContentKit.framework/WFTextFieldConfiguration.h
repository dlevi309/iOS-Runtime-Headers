/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFTextFieldConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _secureTextEntry;
	BOOL _multiline;
	BOOL _allowsNegativeNumbers;
	BOOL _smartQuotesDisabled;
	BOOL _smartDashesDisabled;
	BOOL _focusImmediatelyWhenPresented;
	BOOL _showsDateFormattingHint;
	BOOL _doesRelativeDateFormatting;
	NSString* _prefix;
	NSString* _text;
	NSString* _placeholder;
	NSString* _keyboardType;
	NSString* _clearButtonMode;
	NSString* _autocapitalizationType;
	NSString* _autocorrectionType;
	NSString* _returnKeyType;
	NSString* _textContentType;
	NSString* _textAlignment;
	long long _initialInsertionIndex;
	unsigned long long _dateFormatStyle;
	unsigned long long _timeFormatStyle;
	NSString* _localizedIncompleteHintString;

}

@property (nonatomic,copy) NSString * prefix;                                            //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                       //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (assign,getter=isMultiline,nonatomic) BOOL multiline;                          //@synthesize multiline=_multiline - In the implementation block
@property (assign,nonatomic) BOOL allowsNegativeNumbers;                                 //@synthesize allowsNegativeNumbers=_allowsNegativeNumbers - In the implementation block
@property (assign,nonatomic) BOOL smartQuotesDisabled;                                   //@synthesize smartQuotesDisabled=_smartQuotesDisabled - In the implementation block
@property (assign,nonatomic) BOOL smartDashesDisabled;                                   //@synthesize smartDashesDisabled=_smartDashesDisabled - In the implementation block
@property (nonatomic,copy) NSString * keyboardType;                                      //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) NSString * clearButtonMode;                                   //@synthesize clearButtonMode=_clearButtonMode - In the implementation block
@property (nonatomic,copy) NSString * autocapitalizationType;                            //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,copy) NSString * autocorrectionType;                                //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,copy) NSString * returnKeyType;                                     //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (nonatomic,copy) NSString * textContentType;                                   //@synthesize textContentType=_textContentType - In the implementation block
@property (nonatomic,copy) NSString * textAlignment;                                     //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL focusImmediatelyWhenPresented;                         //@synthesize focusImmediatelyWhenPresented=_focusImmediatelyWhenPresented - In the implementation block
@property (assign,nonatomic) long long initialInsertionIndex;                            //@synthesize initialInsertionIndex=_initialInsertionIndex - In the implementation block
@property (assign,nonatomic) BOOL showsDateFormattingHint;                               //@synthesize showsDateFormattingHint=_showsDateFormattingHint - In the implementation block
@property (assign,nonatomic) unsigned long long dateFormatStyle;                         //@synthesize dateFormatStyle=_dateFormatStyle - In the implementation block
@property (assign,nonatomic) unsigned long long timeFormatStyle;                         //@synthesize timeFormatStyle=_timeFormatStyle - In the implementation block
@property (assign,nonatomic) BOOL doesRelativeDateFormatting;                            //@synthesize doesRelativeDateFormatting=_doesRelativeDateFormatting - In the implementation block
@property (nonatomic,copy) NSString * localizedIncompleteHintString;                     //@synthesize localizedIncompleteHintString=_localizedIncompleteHintString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)autocapitalizationType;
-(void)setTextContentType:(NSString *)arg1 ;
-(NSString *)keyboardType;
-(void)setReturnKeyType:(NSString *)arg1 ;
-(NSString *)returnKeyType;
-(void)setAutocorrectionType:(NSString *)arg1 ;
-(NSString *)prefix;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(NSString *)autocorrectionType;
-(void)setKeyboardType:(NSString *)arg1 ;
-(id)init;
-(void)setAutocapitalizationType:(NSString *)arg1 ;
-(NSString *)textContentType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)setDoesRelativeDateFormatting:(BOOL)arg1 ;
-(NSString *)textAlignment;
-(NSString *)clearButtonMode;
-(BOOL)doesRelativeDateFormatting;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setMultiline:(BOOL)arg1 ;
-(NSString *)text;
-(unsigned long long)dateFormatStyle;
-(NSString *)placeholder;
-(void)setPrefix:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setClearButtonMode:(NSString *)arg1 ;
-(void)setTextAlignment:(NSString *)arg1 ;
-(BOOL)isMultiline;
-(void)setDateFormatStyle:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFocusImmediatelyWhenPresented:(BOOL)arg1 ;
-(NSString *)localizedIncompleteHintString;
-(void)setLocalizedIncompleteHintString:(NSString *)arg1 ;
-(void)setTimeFormatStyle:(unsigned long long)arg1 ;
-(void)setShowsDateFormattingHint:(BOOL)arg1 ;
-(BOOL)smartQuotesDisabled;
-(BOOL)smartDashesDisabled;
-(void)setInitialInsertionIndex:(long long)arg1 ;
-(void)setSmartDashesDisabled:(BOOL)arg1 ;
-(void)setSmartQuotesDisabled:(BOOL)arg1 ;
-(BOOL)allowsNegativeNumbers;
-(void)setAllowsNegativeNumbers:(BOOL)arg1 ;
-(BOOL)focusImmediatelyWhenPresented;
-(long long)initialInsertionIndex;
-(BOOL)showsDateFormattingHint;
-(unsigned long long)timeFormatStyle;
@end

