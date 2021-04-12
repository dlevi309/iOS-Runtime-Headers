/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPTableCell : CPChunk <CPDisposable> {

	CGRect cellBounds;
	SCD_Struct_CP17 rowSpan;
	SCD_Struct_CP17 columnSpan;
	SCD_Struct_CP18* borders;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;

}

@property (nonatomic,readonly) CGRect cellBounds; 
@property (assign,nonatomic) SCD_Struct_CP17 rowSpan; 
@property (assign,nonatomic) SCD_Struct_CP17 columnSpan; 
@property (nonatomic,readonly) unsigned backgroundGraphicCount; 
-(void)dealloc;
-(void)finalize;
-(SCD_Struct_CP17)columnSpan;
-(SCD_Struct_CP17)rowSpan;
-(CGColorRef)backgroundColor;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)setRowSpan:(SCD_Struct_CP17)arg1 ;
-(void)dispose;
-(CGRect)cellBounds;
-(CGRect)boundsOfBorder:(int)arg1 ;
-(CGColorRef)colorOfBorder:(int)arg1 ;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
-(void)setBorder:(int)arg1 bounds:(CGRect)arg2 graphics:(id)arg3 ;
-(unsigned)graphicCountOfBorder:(int)arg1 ;
-(id)graphicObjectOfBorder:(int)arg1 atIndex:(unsigned)arg2 ;
-(long long)compareCellOrdinal:(id)arg1 ;
-(void)setColumnSpan:(SCD_Struct_CP17)arg1 ;
@end

