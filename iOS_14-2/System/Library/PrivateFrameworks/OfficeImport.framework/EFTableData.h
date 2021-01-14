/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)table;
-(id)reference;
-(const EFRefTok*)refTok;
-(unsigned short*)ptgData;
-(void)dealloc;
-(id)initWith:(EFStrTok*)arg1 ;
-(void)makeup:(id)arg1 with:(int)arg2 ;
@end

