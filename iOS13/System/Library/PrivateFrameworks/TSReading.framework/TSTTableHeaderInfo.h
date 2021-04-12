/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTTableHeaderInfo : NSObject {

	TSTCellStyle* mCellStyle;
	TSWPParagraphStyle* mTextStyle;
	double mSize;
	unsigned char mHidingState;
	unsigned short mNumberOfCells;

}

@property (nonatomic,retain) TSTCellStyle * cellStyle; 
@property (nonatomic,retain) TSWPParagraphStyle * textStyle; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) unsigned char hidingState; 
@property (assign,nonatomic) unsigned short numberOfCells; 
-(void)dealloc;
-(id)description;
-(double)size;
-(void)setSize:(double)arg1 ;
-(void)setTextStyle:(TSWPParagraphStyle *)arg1 ;
-(TSWPParagraphStyle *)textStyle;
-(TSTCellStyle *)cellStyle;
-(void)setCellStyle:(TSTCellStyle *)arg1 ;
-(unsigned short)numberOfCells;
-(unsigned char)hidingState;
-(void)setHidingState:(unsigned char)arg1 ;
-(void)setNumberOfCells:(unsigned short)arg1 ;
@end

