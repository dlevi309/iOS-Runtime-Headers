/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {

	unsigned long long mColumnIndex;
	NSMutableArray* mFilters;
	int mFiltersRelation;

}
-(id)init;
-(id)description;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)addFilter:(id)arg1 ;
-(unsigned long long)columnIndex;
-(void)setColumnIndex:(unsigned long long)arg1 ;
-(unsigned long long)filterCount;
-(void)setFiltersRelation:(int)arg1 ;
-(int)filtersRelation;
@end

