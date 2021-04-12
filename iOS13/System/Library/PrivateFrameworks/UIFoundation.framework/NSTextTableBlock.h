/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextBlock.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTextTable;

@interface NSTextTableBlock : NSTextBlock <NSSecureCoding> {

	NSTextTable* _table;
	long long _rowNum;
	long long _colNum;
	long long _rowSpan;
	long long _colSpan;
	void* _tableBlockPrimary;
	void* _tableBlockSecondary;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)table;
-(void)drawBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 characterRange:(NSRange)arg3 layoutManager:(id)arg4 ;
-(long long)startingRow;
-(long long)columnSpan;
-(long long)rowSpan;
-(CGRect)rectForLayoutAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(CGRect)boundsRectForContentRect:(CGRect)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(id)initWithTable:(id)arg1 startingRow:(long long)arg2 rowSpan:(long long)arg3 startingColumn:(long long)arg4 columnSpan:(long long)arg5 ;
-(long long)startingColumn;
-(void)_setRowSpan:(long long)arg1 ;
-(void)_setColumnSpan:(long long)arg1 ;
@end

