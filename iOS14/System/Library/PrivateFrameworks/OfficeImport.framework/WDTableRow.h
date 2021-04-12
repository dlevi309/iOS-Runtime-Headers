/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WDTable *)table;
-(unsigned long long)index;
-(id)properties;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)cellAt:(unsigned long long)arg1 ;
-(id)addCell;
-(unsigned long long)cellCount;
-(id)initWithTable:(id)arg1 at:(unsigned long long)arg2 ;
-(id)addCellWithIndex:(unsigned long long)arg1 ;
-(id)cellIterator;
-(id)newCellIterator;
@end

