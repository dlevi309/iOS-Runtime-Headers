/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASSqliteDatabase, NSMutableArray;

@interface PPSQLDatabaseHandlePool : NSObject {

	_PASSqliteDatabase* readWriteHandle;
	NSMutableArray* availableReadOnlyHandles;
	unsigned long long totalReadOnlyHandles;

}
@end

