/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTCellIterator.h>

@class TSTMasterLayout, TSTCell, TSTTableModel;

@interface TSTLayoutCellIterator : TSTCellIterator {

	TSTMasterLayout* mMasterLayout;
	SCD_Struct_TS141 mLayoutRange;
	SCD_Struct_TS140 mLayoutCellID;
	TSTCell* mLayoutCell;
	SCD_Struct_TS205* mModelIteratorData;
	BOOL mQueriedModel;
	BOOL mModelIteratorHasCell;
	unsigned short mNumberOfLayoutColumns;
	unsigned short mNumberOfColumns;
	unsigned short mNumberOfRows;

}

@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
-(void)dealloc;
-(id)initWithLayout:(id)arg1 ;
-(TSTTableModel *)tableModel;
-(id)initWithMasterLayout:(id)arg1 ;
-(TSTMasterLayout *)masterLayout;
-(id)initWithMasterLayout:(id)arg1 range:(SCD_Struct_TS142)arg2 flags:(unsigned long long)arg3 ;
-(id)initWithLayout:(id)arg1 range:(SCD_Struct_TS142)arg2 flags:(unsigned long long)arg3 ;
-(id)initWithMasterLayout:(id)arg1 range:(SCD_Struct_TS142)arg2 ;
-(id)initWithLayout:(id)arg1 range:(SCD_Struct_TS142)arg2 ;
@end

