/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSWPStorage;

@interface TSWPStoragePasteRules : NSObject {

	unsigned _flags;
	unsigned _actionFlags[4];
	unsigned _lastFlag;
	NSRange _srcLeadRange;
	NSRange _srcTrailRange;
	BOOL _mapDestTrailCS;
	TSWPStorage* _destStorage;
	unsigned long long _sourceColumnStyleCount;
	unsigned long long _sourceSectionCount;
	SCD_Struct_TS124 _paragraphs[4];

}
-(void)dealloc;
-(void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 ;
-(void)didPasteWithIOTransaction:(TSWPStorageTransaction*)arg1 atDestRange:(NSRange)arg2 ;
-(void)mapCharacterStyleProperties:(id)arg1 toRange:(NSRange)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 ;
-(void)addActionFlag:(int)arg1 ;
-(void)applyParagraph:(int)arg1 toCharIndex:(unsigned long long)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)mapCharacterStyles:(int)arg1 toRange:(NSRange)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
@end

