/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@interface _OSLogTracepointBuffer : NSObject {

	SCD_Struct_OS18* _events;
	unsigned long long _cursor;
	unsigned long long _count;
	unsigned long long _size;
	BOOL _mutable;

}
-(id)init;
-(void)dealloc;
-(BOOL)_isEmpty;
-(void)beginInsertingTracepointsClippingFromTime:(unsigned long long)arg1 ;
-(void)insertTimesyncPoints:(os_timesync_db_sRef)arg1 forBoot:(unsigned char)arg2 oldestContinuousTime:(unsigned long long)arg3 ;
-(void)insertNonsparsePoint:(unsigned long long)arg1 uuid:(unsigned char)arg2 ttl:(unsigned char)arg3 inMemory:(BOOL)arg4 ;
-(void)insertStatedumpChunk:(tracev3_chunk_s*)arg1 subchunk:(id)arg2 ;
-(void)insertTracepoints:(tracev3_chunk_s*)arg1 subchunk:(id)arg2 options:(unsigned)arg3 ;
-(void)finishedInsertingTracepointsWithNextMajorTime:(unsigned long long)arg1 options:(unsigned)arg2 ;
-(void)enumerateEventsFromTime:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

