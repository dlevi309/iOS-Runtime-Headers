/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {

	unsigned long long mColumnIndex;
	NSMutableArray* mFilters;
	int mFiltersRelation;

}
-(unsigned long long)columnIndex;
-(id)init;
-(void)setColumnIndex:(unsigned long long)arg1 ;
-(void)addFilter:(id)arg1 ;
-(id)description;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)filterCount;
-(void)setFiltersRelation:(int)arg1 ;
-(int)filtersRelation;
@end

