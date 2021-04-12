/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSDictionary;

@interface CHPatternNetwork : NSObject {

	Network* _network;
	NSDictionary* _symbols;
	NSDictionary* _startNodes;
	NSDictionary* _startCursorForContentTypes;

}
+(id)patternToSymbolMap;
+(id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2 forFirstSegmentGroup:(BOOL)arg3 ;
+(id)newCursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3 ;
+(id)newCursorByAdvancingWithSymbol:(unsigned long long)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3 ;
+(id)rootCursorForPatternType:(long long)arg1 inNetwork:(id)arg2 forFirstSegmentGroup:(BOOL)arg3 ;
+(id)contentTypesToPatternsMapping;
+(BOOL)isString:(id)arg1 fullPattern:(long long)arg2 inNetwork:(id)arg3 ;
-(id)initWithFile:(id)arg1 ;
-(void)dealloc;
-(id)newCursorByAdvancingCursor:(id)arg1 withSymbol:(unsigned long long)arg2 ;
-(unsigned long long)stateTypeForNodeIndex:(unsigned long long)arg1 ;
@end

