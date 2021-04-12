/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <Foundation/NSString.h>

@class NSString, TSWPDeletionRangeMap, TSWPRangeArray;

@interface TSWPFilteredString : NSString {

	unsigned long long _length;
	NSString* _sourceString;
	TSWPDeletionRangeMap* _rangeMap;
	TSWPRangeArray* _sourceRanges;

}

@property (nonatomic,retain) NSString * sourceString;                             //@synthesize sourceString=_sourceString - In the implementation block
@property (nonatomic,retain) TSWPDeletionRangeMap * rangeMap;                     //@synthesize rangeMap=_rangeMap - In the implementation block
@property (nonatomic,readonly) unsigned long long length;                         //@synthesize length=_length - In the implementation block
@property (nonatomic,retain,readonly) TSWPRangeArray * sourceRanges;              //@synthesize sourceRanges=_sourceRanges - In the implementation block
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(TSWPRangeArray *)sourceRanges;
-(NSString *)sourceString;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1 ;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1 ;
-(NSRange)charRangeMappedToStorage:(NSRange)arg1 ;
-(NSRange)charRangeMappedFromStorage:(NSRange)arg1 ;
-(TSWPDeletionRangeMap *)rangeMap;
-(id)initWithString:(id)arg1 subrange:(NSRange)arg2 removeRanges:(id)arg3 ;
-(void)setSourceString:(NSString *)arg1 ;
-(void)setRangeMap:(TSWPDeletionRangeMap *)arg1 ;
@end

