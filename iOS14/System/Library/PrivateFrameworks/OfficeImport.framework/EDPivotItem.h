/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(unsigned)repeatedItemCounts;
-(void)setRepeatedItemCounts:(unsigned)arg1 ;
-(id)itemIndexes;
@end

