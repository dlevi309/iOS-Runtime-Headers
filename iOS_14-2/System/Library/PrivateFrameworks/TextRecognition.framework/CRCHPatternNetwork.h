/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSDictionary;

@interface CRCHPatternNetwork : NSObject {

	CRCHNetwork* _network;
	NSDictionary* _symbols;
	NSDictionary* _startEdges;
	NSDictionary* _startCursorForContentTypes;

}
+(id)cursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3 ;
+(id)patternToSymbolMap;
+(id)kDefaultPatternsPlusUrlsAndEmails;
+(id)kDefaultPatterns;
+(id)kEmailPatterns;
+(id)kUrlPatterns;
+(id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2 ;
+(id)cursorByAdvancingWithSymbol:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3 ;
+(BOOL)isFinalCursor:(id)arg1 inNetwork:(id)arg2 ;
-(id)initWithFile:(id)arg1 ;
-(void)dealloc;
-(id)advanceCursor:(id)arg1 withSymbol:(unsigned long long)arg2 ;
@end

