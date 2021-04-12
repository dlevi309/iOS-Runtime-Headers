/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/_OSLogIndexTimeRangable.h>

@class _OSLogIndex, _OSLogChunkStore, NSString;

@interface _OSLogEnumeratorCatalog : NSObject <_OSLogIndexTimeRangable> {

	NSRange _chunkRange;
	_OSLogIndex* _index;
	catalog_s* _catalog;
	tracev3_chunk_s* _chunk;
	tracev3_chunk_s* _fileHeader;
	_OSLogChunkStore* _store;
	unsigned long long _ot;
	unsigned long long _et;

}

@property (nonatomic,readonly) const char* bootUUID; 
@property (nonatomic,readonly) catalog_s* catalog;                         //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,readonly) tracev3_chunk_s* fileHeader;                //@synthesize fileHeader=_fileHeader - In the implementation block
@property (nonatomic,readonly) tracev3_chunk_s* chunk;                     //@synthesize chunk=_chunk - In the implementation block
@property (nonatomic,__weak,readonly) _OSLogIndex * index;                 //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned long long oldestTime;              //@synthesize ot=_ot - In the implementation block
@property (nonatomic,readonly) unsigned long long endTime;                 //@synthesize et=_et - In the implementation block
@property (nonatomic,readonly) _OSLogChunkStore * store;                   //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(_OSLogIndex *)index;
-(_OSLogChunkStore *)store;
-(unsigned long long)endTime;
-(catalog_s*)catalog;
-(void)unionWithRange:(NSRange)arg1 ;
-(tracev3_chunk_s*)chunk;
-(const char*)bootUUID;
-(unsigned long long)oldestTime;
-(id)initWithStore:(id)arg1 index:(id)arg2 fileHeader:(tracev3_chunk_s*)arg3 range:(NSRange)arg4 chunk:(tracev3_chunk_s*)arg5 ;
-(void)enumerateSubchunksUsingBlock:(/*^block*/id)arg1 ;
-(tracev3_chunk_s*)fileHeader;
@end

