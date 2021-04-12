/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)decimalSeparator;
-(void)reset;
-(void)setDecimalSeparator:(NSString *)arg1 ;
-(id)mathSymbolPunctuationedStringForInputString:(id)arg1 ;
-(BOOL)replaceAfterNumerals;
-(void)setReplaceAfterNumerals:(BOOL)arg1 ;
-(BOOL)converted;
@end

