/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSMutableAttributedString, NSString, NSLocale;

@interface AXMSemanticText : NSObject {

	NSMutableAttributedString* _text;
	NSString* _transformedSpeechText;
	NSLocale* _locale;
	long long _tokenizedLength;

}

@property (nonatomic,retain) NSLocale * locale;                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * transformedSpeechText;              //@synthesize transformedSpeechText=_transformedSpeechText - In the implementation block
@property (assign,nonatomic) long long tokenizedLength;                     //@synthesize tokenizedLength=_tokenizedLength - In the implementation block
@property (nonatomic,readonly) NSString * preprocessedText; 
@property (nonatomic,readonly) BOOL isSemanticallyComplete; 
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSRange)textRange;
-(BOOL)isSemanticallyComplete;
-(NSString *)transformedSpeechText;
-(id)initWithText:(id)arg1 locale:(id)arg2 ;
-(long long)tokenizedLength;
-(NSString *)preprocessedText;
-(void)enumerateNLPTokens:(/*^block*/id)arg1 ;
-(void)enumerateLexiconMarkers:(/*^block*/id)arg1 ;
-(void)enumerateNumericTokens:(/*^block*/id)arg1 ;
-(void)enumerateDataDetectors:(/*^block*/id)arg1 ;
-(void)enumerateCustomPatterns:(/*^block*/id)arg1 ;
-(void)enumerateSemanticErrors:(/*^block*/id)arg1 ;
-(void)addNLPToken:(id)arg1 withRange:(NSRange)arg2 ;
-(void)addDataDetector:(id)arg1 withRange:(NSRange)arg2 ;
-(void)addCustomPattern:(id)arg1 withRange:(NSRange)arg2 ;
-(void)addIsInLexionMarker:(BOOL)arg1 withRange:(NSRange)arg2 ;
-(void)addSemanticErrorWithRange:(NSRange)arg1 ;
-(void)addNumericToken:(id)arg1 withRange:(NSRange)arg2 ;
-(id)makeCursor;
-(void)setTransformedSpeechText:(NSString *)arg1 ;
-(void)setTokenizedLength:(long long)arg1 ;
-(id)substringWithRange:(NSRange)arg1 ;
@end

