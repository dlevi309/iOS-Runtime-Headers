/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDTableRowProperties, NSMutableArray, WDTable;

@interface WDTableRow : NSObject {

	unsigned long long mIndex;
	WDTableRowProperties* mProperties;
	NSMutableArray* mCells;
	WDTable* mTable;

}

@property (__weak,readonly) WDTable * table; 
-(id)description;
-(unsigned long long)index;
-(id)properties;
-(void)setIndex:(unsigned long long)arg1 ;
-(WDTable *)table;
-(unsigned long long)cellCount;
-(id)cellAt:(unsigned long long)arg1 ;
-(id)addCell;
-(id)initWithTable:(id)arg1 at:(unsigned long long)arg2 ;
-(id)addCellWithIndex:(unsigned long long)arg1 ;
-(id)cellIterator;
-(id)newCellIterator;
@end

