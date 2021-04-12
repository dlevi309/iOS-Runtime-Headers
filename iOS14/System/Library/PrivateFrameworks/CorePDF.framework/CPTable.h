/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finalize;
-(double*)rowY;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)dispose;
-(CGColorRef)backgroundColor;
-(void)setRowCount:(unsigned)arg1 ;
-(void)setColumnCount:(unsigned)arg1 ;
-(unsigned)columnCount;
-(double*)columnX;
-(void)dealloc;
-(unsigned)rowCount;
-(CGRect)tableBounds;
-(void)incrementUsedGraphicCount;
-(unsigned)usedGraphicCount;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
@end

