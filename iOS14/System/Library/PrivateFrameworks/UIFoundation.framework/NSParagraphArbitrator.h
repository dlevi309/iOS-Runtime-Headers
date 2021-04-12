/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSString, NSAttributedString;

@interface NSParagraphArbitrator : NSObject {

	CFStringTokenizerRef _tokenizer;
	UBreakIteratorRef _breaker;
	NSString* _breakerString;
	NSString* _breakerLocale;
	NSAttributedString* _attributedString;
	/*^block*/id _lineWidth;
	/*^block*/id _validateLineBreakContext;
	unsigned long long _lineBreakStrategy;
	double _hyphenationFactor;
	long long _typesetterBehavior;
	NSString* _preferredLanguage;
	NSRange _paragraphRange;
	NSRange _previousLineRange;

}

@property (retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign) NSRange paragraphRange;                             //@synthesize paragraphRange=_paragraphRange - In the implementation block
@property (copy) id lineWidth;                                         //@synthesize lineWidth=_lineWidth - In the implementation block
@property (copy) id validateLineBreakContext;                          //@synthesize validateLineBreakContext=_validateLineBreakContext - In the implementation block
@property (assign) unsigned long long lineBreakStrategy;               //@synthesize lineBreakStrategy=_lineBreakStrategy - In the implementation block
@property (assign) double hyphenationFactor;                           //@synthesize hyphenationFactor=_hyphenationFactor - In the implementation block
@property (assign) long long typesetterBehavior;                       //@synthesize typesetterBehavior=_typesetterBehavior - In the implementation block
@property (assign) NSRange previousLineRange;                          //@synthesize previousLineRange=_previousLineRange - In the implementation block
@property (copy) NSString * preferredLanguage;                         //@synthesize preferredLanguage=_preferredLanguage - In the implementation block
@property (readonly) CFStringTokenizerRef tokenizer;                   //@synthesize tokenizer=_tokenizer - In the implementation block
+(id)paragraphArbitratorWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(void)setTypesetterBehavior:(long long)arg1 ;
-(void)setLineWidth:(id)arg1 ;
-(id)lineWidth;
-(unsigned long long)lineBreakStrategy;
-(long long)typesetterBehavior;
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(NSRange)paragraphRange;
-(NSString *)preferredLanguage;
-(double)hyphenationFactor;
-(void)setHyphenationFactor:(double)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)init;
-(NSAttributedString *)attributedString;
-(void)setPreviousLineRange:(NSRange)arg1 ;
-(void)resetBreaker;
-(CFStringTokenizerRef)tokenizer;
-(void)setParagraphRange:(NSRange)arg1 ;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)arg1 ;
-(NSRange)previousLineRange;
-(BOOL)prepareBreakIteratorForAttributedString:(id)arg1 characterIndex:(unsigned long long)arg2 ;
-(void)reset;
-(void)setValidateLineBreakContext:(id)arg1 ;
-(BOOL)prepareTokenizerForPreferredLanguage:(id)arg1 ;
-(id)validateLineBreakContext;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(SCD_Struct_NS31)lineBreakContextBeforeIndex:(unsigned long long)arg1 lineFragmentWidth:(double)arg2 range:(NSRange)arg3 ;
-(void)dealloc;
@end

