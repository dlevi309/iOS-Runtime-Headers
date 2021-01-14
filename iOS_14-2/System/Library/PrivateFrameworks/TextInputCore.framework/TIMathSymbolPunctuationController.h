/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSString;

@interface TIMathSymbolPunctuationController : NSObject {

	unsigned long long _state;
	long long _location;
	unsigned short _replacementCharacter;
	BOOL _replaceAfterNumerals;
	BOOL _enabled;
	BOOL _converted;
	NSString* _decimalSeparator;

}

@property (nonatomic,copy) NSString * decimalSeparator;              //@synthesize decimalSeparator=_decimalSeparator - In the implementation block
@property (assign,nonatomic) BOOL replaceAfterNumerals;              //@synthesize replaceAfterNumerals=_replaceAfterNumerals - In the implementation block
@property (assign,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL converted;                       //@synthesize converted=_converted - In the implementation block
-(BOOL)enabled;
-(void)setInputString:(id)arg1 ;
-(NSString *)decimalSeparator;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDecimalSeparator:(NSString *)arg1 ;
-(void)reset;
-(BOOL)updateInputString:(id)arg1 ;
-(id)mathSymbolPunctuationedStringForInputString:(id)arg1 ;
-(BOOL)replaceAfterNumerals;
-(void)setReplaceAfterNumerals:(BOOL)arg1 ;
-(BOOL)converted;
@end

