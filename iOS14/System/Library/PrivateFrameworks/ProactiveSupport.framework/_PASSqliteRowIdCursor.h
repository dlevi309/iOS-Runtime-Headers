/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/_PASSqliteCollectionsCursor.h>

@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor
+(const char*)sqliteCreateTableStatement;
+(BOOL)hasRowId;
-(unsigned long long)outputRowId;
-(BOOL)currentIndexEof;
-(unsigned long long)currentIndexedRowId;
@end

