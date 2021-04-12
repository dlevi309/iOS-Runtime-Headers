/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDTable, EDReference;

@interface EFTableData : NSObject {

	EFRefTok mRefTok;
	EDTable* mTable;
	EDReference* mReference;
	int mMakeups;

}
-(void)dealloc;
-(id)table;
-(id)reference;
-(id)initWith:(EFStrTok*)arg1 ;
-(unsigned short*)ptgData;
-(const EFRefTok*)refTok;
-(void)makeup:(id)arg1 with:(int)arg2 ;
@end

