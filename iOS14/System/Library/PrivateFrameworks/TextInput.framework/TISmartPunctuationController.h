/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSCharacterSet, TISmartPunctuationOptions;

@interface TISmartPunctuationController : NSObject {

	BOOL _leftSingleQuotationMarkInserted;
	BOOL _leftDoubleQuotationMarkInserted;
	NSCharacterSet* _alphanumericCharacterSet;
	NSCharacterSet* _whitespaceAndNewlineCharacterSet;
	NSCharacterSet* _decimalDigitCharacterSet;
	NSCharacterSet* _punctuationCharacterSet;
	NSCharacterSet* _openerCharacterSet;
	NSCharacterSet* _germanApostrophePrecedingSet;
	NSCharacterSet* _dutchApostropheFollowingSet;
	NSCharacterSet* _cornerBracketCharacterSet;
	NSCharacterSet* _bookTitleMarkCharacterSet;
	NSCharacterSet* _dashCharacterSet;
	NSCharacterSet* _enDashCharacterSet;
	NSCharacterSet* _emDashCharacterSet;
	BOOL _smartQuotesEnabled;
	BOOL _smartDashesEnabled;
	unsigned long long _autoQuoteType;
	TISmartPunctuationOptions* _smartPunctuationOptions;

}

@property (assign,nonatomic) BOOL smartQuotesEnabled;                                          //@synthesize smartQuotesEnabled=_smartQuotesEnabled - In the implementation block
@property (assign,nonatomic) BOOL smartDashesEnabled;                                          //@synthesize smartDashesEnabled=_smartDashesEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long autoQuoteType;                                 //@synthesize autoQuoteType=_autoQuoteType - In the implementation block
@property (nonatomic,retain) TISmartPunctuationOptions * smartPunctuationOptions;              //@synthesize smartPunctuationOptions=_smartPunctuationOptions - In the implementation block
+(id)_chineseContextualVariantMapping;
-(BOOL)smartDashesEnabled;
-(id)_alternatingStringForInputString:(id)arg1 isLockedInput:(BOOL)arg2 hasMarkedText:(BOOL)arg3 ;
-(id)init;
-(void)setSmartPunctuationOptions:(TISmartPunctuationOptions *)arg1 ;
-(BOOL)smartQuotesEnabled;
-(void)setSmartQuotesEnabled:(BOOL)arg1 ;
-(id)_checkInput:(id)arg1 forContextualChinesePunctuationInDocumentState:(id)arg2 ;
-(id)smartPunctuationedStringForString:(id)arg1 ;
-(id)_checkInput:(id)arg1 forContextualDashesInDocumentState:(id)arg2 ;
-(void)setSmartDashesEnabled:(BOOL)arg1 ;
-(void)_initializeQuoteCharacterSetsIfNecessary;
-(unsigned long long)autoQuoteType;
-(void)reset;
-(id)_checkInput:(id)arg1 forContextualQuotesInDocumentState:(id)arg2 ;
-(void)_initializeDashCharacterSetsIfNecessary;
-(TISmartPunctuationOptions *)smartPunctuationOptions;
-(id)smartPunctuationOutputForInput:(id)arg1 isLockedInput:(BOOL)arg2 documentState:(id)arg3 ;
-(void)setAutoQuoteType:(unsigned long long)arg1 ;
-(id)smartPunctuationResultsForString:(id)arg1 ;
@end

