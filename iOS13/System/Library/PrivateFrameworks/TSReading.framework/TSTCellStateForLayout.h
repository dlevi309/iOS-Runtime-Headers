/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSTCell, TSWPColumn, TSTLayoutContentCachedKey;

@interface TSTCellStateForLayout : NSObject {

	BOOL mCellPropsRowHeight;
	BOOL mCellWraps;
	BOOL mForDrawing;
	BOOL mInDynamicLayout;
	SCD_Struct_TS140 mModelCellID;
	unsigned mVerticalAlignment;
	int mLayoutCacheFlags;
	TSTCell* mCell;
	SCD_Struct_TS141 mMergedRange;
	TSWPColumn* mWPColumn;
	id mCellContents;
	TSTLayoutContentCachedKey* mKeyVal;
	unsigned long long mPageNumber;
	unsigned long long mPageCount;
	CGSize mMinSize;
	CGSize mMaxSize;
	UIEdgeInsets mPaddingInsets;

}

@property (assign,nonatomic) SCD_Struct_TS140 modelCellID; 
@property (nonatomic,copy) TSTCell * cell; 
@property (assign,nonatomic) SCD_Struct_TS142 mergedRange; 
@property (nonatomic,retain) id cellContents; 
@property (assign,nonatomic) CGSize minSize; 
@property (assign,nonatomic) CGSize maxSize; 
@property (assign,nonatomic) UIEdgeInsets paddingInsets; 
@property (assign,nonatomic) unsigned verticalAlignment; 
@property (assign,nonatomic) BOOL cellPropsRowHeight; 
@property (assign,nonatomic) BOOL cellWraps; 
@property (assign,nonatomic) BOOL forDrawing; 
@property (assign,nonatomic) BOOL inDynamicLayout; 
@property (assign,nonatomic) int layoutCacheFlags; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) TSTLayoutContentCachedKey * keyVal; 
@property (nonatomic,retain) TSWPColumn * wpColumn; 
@property (assign,nonatomic) unsigned long long pageNumber; 
@property (assign,nonatomic) unsigned long long pageCount; 
-(id)init;
-(void)dealloc;
-(void)setMaxSize:(CGSize)arg1 ;
-(unsigned)verticalAlignment;
-(void)setVerticalAlignment:(unsigned)arg1 ;
-(TSTCell *)cell;
-(unsigned long long)pageCount;
-(void)setPageCount:(unsigned long long)arg1 ;
-(BOOL)hasContent;
-(void)setCell:(TSTCell *)arg1 ;
-(CGSize)minSize;
-(void)setMinSize:(CGSize)arg1 ;
-(CGSize)maxSize;
-(unsigned long long)pageNumber;
-(void)setPageNumber:(unsigned long long)arg1 ;
-(void)setModelCellID:(SCD_Struct_TS140)arg1 ;
-(void)setCellPropsRowHeight:(BOOL)arg1 ;
-(void)setCellWraps:(BOOL)arg1 ;
-(void)setPaddingInsets:(UIEdgeInsets)arg1 ;
-(void)setForDrawing:(BOOL)arg1 ;
-(void)setMergedRange:(SCD_Struct_TS142)arg1 ;
-(void)setInDynamicLayout:(BOOL)arg1 ;
-(void)setCellContents:(id)arg1 ;
-(void)setLayoutCacheFlags:(int)arg1 ;
-(TSWPColumn *)wpColumn;
-(TSTLayoutContentCachedKey *)keyVal;
-(int)layoutCacheFlags;
-(id)cellContents;
-(SCD_Struct_TS140)modelCellID;
-(BOOL)cellWraps;
-(UIEdgeInsets)paddingInsets;
-(void)setKeyVal:(TSTLayoutContentCachedKey *)arg1 ;
-(void)setWpColumn:(TSWPColumn *)arg1 ;
-(SCD_Struct_TS142)mergedRange;
-(BOOL)cellPropsRowHeight;
-(BOOL)forDrawing;
-(BOOL)inDynamicLayout;
@end

