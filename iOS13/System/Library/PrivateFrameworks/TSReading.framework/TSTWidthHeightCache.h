/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSTWidthHeightCache : NSObject {

	vector<TSTWidthHeightCache_Private::WHCCol, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol> >* mFittingColumnWidth;
	vector<TSTWidthHeightCache_Private::WHCRow, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow> >* mFittingRowHeight;
	vector<double, std::__1::allocator<double> >* mModelColumnWidth;
	vector<double, std::__1::allocator<double> >* mModelRowHeight;
	unsigned short mMaxRow;
	unsigned char mMaxCol;
	opaque_pthread_rwlock_t mLock;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)_increaseRowCapacity:(unsigned)arg1 ;
-(void)_increaseColCapacity:(unsigned)arg1 ;
-(BOOL)moveRowsFrom:(SCD_Struct_TS142)arg1 toRow:(unsigned short)arg2 ;
-(BOOL)moveColsFrom:(SCD_Struct_TS142)arg1 toCol:(unsigned char)arg2 ;
-(BOOL)deleteRowsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2 ;
-(BOOL)deleteColsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2 ;
-(BOOL)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2 ;
-(BOOL)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2 ;
-(BOOL)setModelHeight:(double)arg1 forRow:(unsigned short)arg2 ;
-(BOOL)setModelWidth:(double)arg1 forColumn:(unsigned char)arg2 ;
-(void)resetWidthsHeightsForRange:(SCD_Struct_TS142)arg1 ;
-(BOOL)resetModelCache;
-(double)getModelHeightForRow:(unsigned short)arg1 ;
-(double)getFitHeightForRow:(unsigned short)arg1 ;
-(double)getModelWidthForColumn:(unsigned char)arg1 ;
-(double)getFitWidthForCol:(unsigned char)arg1 ;
-(id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2 ;
-(BOOL)setFitDims:(CGSize)arg1 forCellID:(SCD_Struct_TS140)arg2 ;
-(BOOL)setFitWidth:(double)arg1 forCellID:(SCD_Struct_TS140)arg2 ;
-(BOOL)setFitHeight:(double)arg1 forCellID:(SCD_Struct_TS140)arg2 ;
-(unsigned long long)numModelColumnWidths;
-(unsigned long long)numModelRowHeights;
-(BOOL)resetModelCacheRange:(SCD_Struct_TS142)arg1 ;
-(id)getListOfInvalidColsInRow:(unsigned short)arg1 ;
-(unsigned long long)resetAllInvalidColsInRow:(unsigned short)arg1 ;
-(void)resetRowHeightsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2 ;
-(void)resetColWidthsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2 ;
-(void)resetAllRow;
-(void)resetAllCol;
-(void)resetRowHeightForCell:(SCD_Struct_TS140)arg1 ;
-(void)resetFitHeightForCellID:(SCD_Struct_TS140)arg1 ;
-(void)setNumsRows:(unsigned short)arg1 andNumCols:(unsigned char)arg2 ;
-(BOOL)verifyDims:(CGSize)arg1 forCellID:(SCD_Struct_TS140)arg2 ;
-(void)logInternalState;
-(id)validateChangeDescriptors:(id)arg1 tableModel:(id)arg2 ;
@end

