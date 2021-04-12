/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextBlock.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSTextTable : NSTextBlock <NSSecureCoding> {

	unsigned long long _numCols;
	unsigned long long _tableFlags;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 withRepetitions:(BOOL)arg6 collapseBorders:(BOOL)arg7 rowCharRange:(NSRange*)arg8 indexInRow:(unsigned long long*)arg9 startingRow:(long long*)arg10 startingColumn:(long long*)arg11 previousRowBlockHelper:(id*)arg12 ;
-(id)init;
-(void)_takeValuesFromTextBlock:(id)arg1 ;
-(unsigned long long)layoutAlgorithm;
-(void)setLayoutAlgorithm:(unsigned long long)arg1 ;
-(BOOL)_missingColumnsForRowRange:(NSRange)arg1 blockIndex:(unsigned long long)arg2 text:(id)arg3 ;
-(void)setCollapsesBorders:(BOOL)arg1 ;
-(void)setHidesEmptyCells:(BOOL)arg1 ;
-(CGRect)rectForBlock:(id)arg1 layoutAtPoint:(CGPoint)arg2 inRect:(CGRect)arg3 textContainer:(id)arg4 characterRange:(NSRange)arg5 ;
-(CGRect)_contentRectForCharRange:(NSRange)arg1 textContainer:(id)arg2 ;
-(CGRect)boundsRectForBlock:(id)arg1 contentRect:(CGRect)arg2 inRect:(CGRect)arg3 textContainer:(id)arg4 characterRange:(NSRange)arg5 ;
-(BOOL)collapsesBorders;
-(BOOL)hidesEmptyCells;
-(void)drawBackgroundForBlock:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 characterRange:(NSRange)arg4 layoutManager:(id)arg5 ;
-(void)_setTableFlags:(unsigned long long)arg1 ;
-(id)_descriptionAtIndex:(unsigned long long)arg1 text:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_tableFlags;
-(void)dealloc;
@end

