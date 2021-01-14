/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKTestQueryEndpoint.h>

@class NSString;

@interface FCCKTestMultiFetchQueryEndpoint : NSObject <FCCKTestQueryEndpoint>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleQueryOperation:(id)arg1 withRecords:(id)arg2 droppedFeeds:(id)arg3 ;
-(id)_collectRecordsWithRecords:(id)arg1 recordIDs:(id)arg2 linkKeysByRecordType:(id)arg3 visitedRecordIDs:(id)arg4 missingRecordIDs:(id)arg5 ;
-(id)_collectRecordIDsFromRecords:(id)arg1 linkKeysByRecordType:(id)arg2 ;
@end

