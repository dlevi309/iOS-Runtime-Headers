/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {

	id _contents;
	NSAttributeDictionary* _baseAttributes;
	long long _length;
	unsigned long long _hashValue;
	SCD_Struct_NS36* _runs;
	long long _numRuns;
	long long _allocedRunsSize;
	long long _numHits;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)init;
-(id)string;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(oneway void)release;
-(unsigned long long)hash;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)finalize;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(void)cache;
-(BOOL)_isStringDrawingTextStorage;
-(BOOL)_baselineMode;
-(BOOL)hasColorGlyphsInRange:(NSRange)arg1 ;
-(id)copyCachedInstance;
@end

