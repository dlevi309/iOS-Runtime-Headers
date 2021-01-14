/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NS38* _runs;
	long long _numRuns;
	long long _allocedRunsSize;
	long long _numHits;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)_isStringDrawingTextStorage;
-(id)initWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(oneway void)release;
-(void)finalize;
-(void)cache;
-(id)init;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)length;
-(id)initWithAttributedString:(id)arg1 ;
-(BOOL)hasColorGlyphsInRange:(NSRange)arg1 ;
-(id)copyCachedInstance;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)hash;
-(id)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)_baselineMode;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

