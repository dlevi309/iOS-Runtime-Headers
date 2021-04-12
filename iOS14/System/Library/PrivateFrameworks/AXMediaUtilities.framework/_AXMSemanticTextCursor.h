/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSAttributedString, AXMSemanticText, NSDictionary;

@interface _AXMSemanticTextCursor : NSObject {

	NSAttributedString* _text;
	AXMSemanticText* _semanticText;
	unsigned long long _length;
	unsigned long long _currentIndex;

}

@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,readonly) NSDictionary * currentAttributes; 
@property (nonatomic,readonly) NSRange remainingRange; 
@property (nonatomic,readonly) BOOL isOtherWord; 
@property (nonatomic,readonly) BOOL isWhitespace; 
@property (nonatomic,readonly) BOOL isPunctuation; 
@property (nonatomic,readonly) BOOL isProperNoun; 
@property (nonatomic,readonly) BOOL isSentenceTerminator; 
@property (nonatomic,readonly) BOOL isInLexicon; 
@property (nonatomic,readonly) BOOL isCustomPattern; 
@property (nonatomic,readonly) BOOL isDataDetector; 
-(void)advance;
-(BOOL)isPunctuation;
-(BOOL)isFinished;
-(id)initWithText:(id)arg1 semanticText:(id)arg2 ;
-(NSRange)remainingRange;
-(BOOL)isOtherWord;
-(BOOL)isInLexicon;
-(BOOL)isWhitespace;
-(BOOL)isCustomPattern;
-(BOOL)processAttribute:(id)arg1 getSubstring:(id*)arg2 advanceCursor:(BOOL)arg3 markAsSemanticError:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)isDataDetector;
-(BOOL)isSentenceTerminator;
-(BOOL)isProperNoun;
-(void)markCurrentIndexAsSemanticErrorAndAdvanceCursor;
-(NSDictionary *)currentAttributes;
@end

