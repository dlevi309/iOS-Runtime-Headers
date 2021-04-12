/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


#import <CoreMediaStream/CoreMediaStream-Structs.h>
@interface MSObjectQueue : NSObject {

	sqlite3Ref _db;
	CFDictionaryRef _statements;

}

@property (readonly) long long count; 
-(id)initWithPath:(id)arg1 ;
-(long long)count;
-(void)dealloc;
-(sqlite3_stmtRef)_statementLabel:(id)arg1 query:(const char*)arg2 ;
-(void)appendObjectWrappers:(id)arg1 ;
-(id)_objectWrapperFromQueueQuery:(sqlite3_stmtRef)arg1 outSize:(long long*)arg2 ;
-(id)allObjectWrappersMaxCount:(long long)arg1 ;
-(id)objectWrappersWithZeroSizeMaxCount:(long long)arg1 ;
-(id)smallestObjectWrappersTargetTotalSize:(long long)arg1 maxCount:(long long)arg2 ;
-(id)allObjectWrappersOrderedByDescendingErrorCountMaxCount:(long long)arg1 ;
-(void)removeObjectWrappersFromQueue:(id)arg1 ;
-(void)removeAllObjectWrappersFromQueue;
-(void)commitErrorCountsForObjectWrappers:(id)arg1 ;
-(void)commitObjectsWrappers:(id)arg1 ;
@end

