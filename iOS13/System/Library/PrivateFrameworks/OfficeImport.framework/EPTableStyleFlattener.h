/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EPStyleFlattener.h>

@class EDTable;

@interface EPTableStyleFlattener : EPStyleFlattener {

	EDTable* mTable;
	unsigned long long mHeaderRowCount;
	unsigned long long mTotalsRowCount;

}
-(void)clearCache;
-(BOOL)isObjectSupported:(id)arg1 ;
-(int)stripeOffset:(int)arg1 row:(BOOL)arg2 ;
-(void)cacheSizes:(id)arg1 inObject:(id)arg2 ;
-(id)collectionFromWorksheet:(id)arg1 ;
-(id)styleFromObject:(id)arg1 ;
-(id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 ;
-(id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3 ;
-(id)newExtractedGlobalStyleElements:(id)arg1 ;
@end

