/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <libobjc.A.dylib/CPDisposable.h>
#import <libobjc.A.dylib/CPGraphicUser.h>

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {

	CGRect tableBounds;
	unsigned rowCount;
	double* rowY;
	unsigned columnCount;
	double* columnX;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;
	unsigned usedGraphicCount;
	BOOL disposed;

}

@property (nonatomic,readonly) CGRect tableBounds; 
@property (assign,nonatomic) unsigned rowCount; 
@property (nonatomic,readonly) double* rowY; 
@property (assign,nonatomic) unsigned columnCount; 
@property (nonatomic,readonly) double* columnX; 
@property (nonatomic,readonly) unsigned backgroundGraphicCount; 
-(void)dealloc;
-(void)finalize;
-(unsigned)rowCount;
-(unsigned)columnCount;
-(CGColorRef)backgroundColor;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)dispose;
-(CGRect)tableBounds;
-(void)incrementUsedGraphicCount;
-(unsigned)usedGraphicCount;
-(double*)rowY;
-(double*)columnX;
-(void)setRowCount:(unsigned)arg1 ;
-(void)setColumnCount:(unsigned)arg1 ;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
@end

