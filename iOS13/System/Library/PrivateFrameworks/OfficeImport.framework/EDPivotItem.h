/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDCollection;

@interface EDPivotItem : NSObject {

	unsigned mRepeatedItemCounts;
	int mType;
	EDCollection* mItemIndexes;

}
+(id)pivotItem;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(unsigned)repeatedItemCounts;
-(void)setRepeatedItemCounts:(unsigned)arg1 ;
-(id)itemIndexes;
@end

