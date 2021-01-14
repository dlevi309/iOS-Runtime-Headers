/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SCD_Struct_CP17)columnSpan;
-(void)setColumnSpan:(SCD_Struct_CP17)arg1 ;
-(void)finalize;
-(SCD_Struct_CP17)rowSpan;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)setRowSpan:(SCD_Struct_CP17)arg1 ;
-(void)dispose;
-(CGColorRef)backgroundColor;
-(void)dealloc;
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
@end

