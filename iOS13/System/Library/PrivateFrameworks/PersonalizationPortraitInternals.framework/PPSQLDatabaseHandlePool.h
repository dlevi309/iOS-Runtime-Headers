/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASSqliteDatabase, NSMutableArray;

@interface PPSQLDatabaseHandlePool : NSObject {

	_PASSqliteDatabase* readWriteHandle;
	NSMutableArray* availableReadOnlyHandles;
	unsigned long long totalReadOnlyHandles;

}
@end

