/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol OS_dispatch_queue;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject;

@interface TSIntervalFilter : NSObject {

	unsigned long long _expectedInterval;
	unsigned _multiIntervalCount;
	unsigned long long _filterCount;
	unsigned long long* _filteredTimestamps;
	unsigned _timestampIndex;
	unsigned long long _timestampCount[8];
	unsigned long long _timestampIntervals[8];
	long long _validEntry;
	NSObject*<OS_dispatch_queue> _syncQueue;
	unsigned char _filterSize;
	unsigned long long _filterOffset;
	IOTS_U128 _filteredSnapshot;
	IOTS_U128 _filteredOffset;

}

@property (nonatomic,readonly) unsigned long long multiIntervalTime; 
@property (nonatomic,readonly) unsigned long long filterCount; 
-(void)resetFilter;
-(void)dealloc;
-(id)initWithExpectedInterval:(unsigned long long)arg1 multiIntervalCount:(unsigned)arg2 filterSize:(unsigned char)arg3 ;
-(unsigned long long)addTimestamp:(unsigned long long)arg1 entry:(long long*)arg2 ;
-(unsigned long long)multiIntervalTimeForEntry:(long long)arg1 ;
-(void)resetFilterWithNewExpectedInterval:(unsigned long long)arg1 ;
-(void)resetFilterWithNewExpectedInterval:(unsigned long long)arg1 multiIntervalCount:(unsigned)arg2 ;
-(void)changeToNewFilterSize:(unsigned char)arg1 ;
-(unsigned long long)_calculateNewTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)filterCountForEntry:(long long)arg1 ;
-(unsigned long long)multiIntervalTime;
-(unsigned long long)addTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)filterCount;
@end

