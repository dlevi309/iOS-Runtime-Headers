/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSMutableAttributedString, NSMutableDictionary, NSLocale, NSString;

@interface AXMTaggedText : NSMutableAttributedString {

	NSMutableAttributedString* _attrString;
	NSMutableDictionary* _globalAttributes;
	/*^block*/id _evaluationBlock;

}

@property (nonatomic,readonly) NSLocale * locale; 
@property (assign,getter=isSpeakable,nonatomic) BOOL speakable; 
@property (nonatomic,readonly) NSString * speakableText; 
+(id)textWithString:(id)arg1 locale:(id)arg2 evaluationBlock:(/*^block*/id)arg3 ;
-(id)string;
-(id)description;
-(id)debugDescription;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)mutableString;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 ;
-(NSLocale *)locale;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(void)_evaluateIfNeeded;
-(BOOL)hasGlobalTag:(id)arg1 ;
-(void)addGlobalTag:(id)arg1 ;
-(void)removeGlobalTag:(id)arg1 ;
-(NSRange)_stringRange;
-(NSString *)speakableText;
-(BOOL)_isEvaluated;
-(BOOL)isSpeakable;
-(id)_substringWithRange:(NSRange)arg1 ;
-(id)_initWithAttributedString:(id)arg1 ;
-(void)addReplacementTag:(id)arg1 withToken:(id)arg2 range:(NSRange)arg3 ;
-(void)addTag:(id)arg1 withToken:(id)arg2 range:(NSRange)arg3 ;
-(void)setSpeakable:(BOOL)arg1 ;
-(BOOL)isRangeSpeakable:(NSRange)arg1 ;
-(void)_setNeedEvaluation;
@end

