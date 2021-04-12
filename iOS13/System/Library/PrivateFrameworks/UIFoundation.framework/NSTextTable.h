/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextBlock.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSTextTable : NSTextBlock <NSSecureCoding> {

	unsigned long long _numCols;
	unsigned long long _tableFlags;
	id _lcache;
	void* _tablePrimary;
	void* _tableSecondary;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(void)_takeValuesFromTextBlock:(id)arg1 ;
-(CGRect)rectForBlock:(id)arg1 layoutAtPoint:(CGPoint)arg2 inRect:(CGRect)arg3 textContainer:(id)arg4 characterRange:(NSRange)arg5 ;
-(CGRect)boundsRectForBlock:(id)arg1 contentRect:(CGRect)arg2 inRect:(CGRect)arg3 textContainer:(id)arg4 characterRange:(NSRange)arg5 ;
-(void)drawBackgroundForBlock:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 characterRange:(NSRange)arg4 layoutManager:(id)arg5 ;
-(BOOL)collapsesBorders;
-(id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 withRepetitions:(BOOL)arg6 collapseBorders:(BOOL)arg7 rowCharRange:(NSRange*)arg8 indexInRow:(unsigned long long*)arg9 startingRow:(long long*)arg10 startingColumn:(long long*)arg11 previousRowBlockHelper:(id*)arg12 ;
-(CGRect)_contentRectForCharRange:(NSRange)arg1 textContainer:(id)arg2 ;
-(BOOL)hidesEmptyCells;
-(BOOL)_missingColumnsForRowRange:(NSRange)arg1 blockIndex:(unsigned long long)arg2 text:(id)arg3 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(void)setCollapsesBorders:(BOOL)arg1 ;
-(void)setHidesEmptyCells:(BOOL)arg1 ;
-(unsigned long long)layoutAlgorithm;
-(void)setLayoutAlgorithm:(unsigned long long)arg1 ;
-(unsigned long long)_tableFlags;
-(void)_setTableFlags:(unsigned long long)arg1 ;
-(id)_descriptionAtIndex:(unsigned long long)arg1 text:(id)arg2 ;
@end

