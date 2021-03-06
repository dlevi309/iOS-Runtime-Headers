/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSWPTextSource <NSObject>
@optional
-(id)substringWithRange:(NSRange)arg1;
-(void)enumerateSmartFieldsWithAttributeKind:(unsigned)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3;
-(void)enumerateWithAttributeKind:(unsigned)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3;
-(BOOL)hasSmartFieldsInRange:(NSRange)arg1;

@required
-(id)string;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2;
-(NSRange*)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2;
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2;
-(id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
-(void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4;
-(unsigned long long)storageLength;
-(BOOL)adjustRangesByDelta:(long long)arg1;
-(BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
-(double)filteredCoreTextAttributesFontScaleEffectiveRange:(NSRange*)arg1 filterDelegate:(id)arg2;
-(CFDictionaryRef)createFilteredCoreTextAttributes:(CFDictionaryRef)arg1 effectiveRange:(NSRange*)arg2 filterDelegate:(id)arg3;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned)arg2 effectiveRange:(NSRange*)arg3;
-(id)smartFieldsWithAttributeKind:(unsigned)arg1 intersectingRange:(NSRange)arg2;
-(id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
-(id)attachmentAtCharIndex:(unsigned long long)arg1;
-(id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
-(id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned)arg2 effectiveRange:(NSRange*)arg3;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
-(NSRange*)charRangeMappedToStorage:(NSRange)arg1;
-(NSRange*)charRangeMappedFromStorage:(NSRange)arg1;
-(long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange)arg2 locale:(CFLocaleRef)arg3 hyphenChar:(unsigned*)arg4;
-(unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;

@end

