/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@class NSMutableArray, SAMutableDataOutputStream;

@interface SAStackString : NSObject {

	BOOL _isMainThread;
	BOOL _isTargetThread;
	unsigned long long _count;
	NSMutableArray* _dispatchQueues;
	NSMutableArray* _threadIds;
	SAMutableDataOutputStream* _stream;

}

@property (assign) unsigned long long count;                        //@synthesize count=_count - In the implementation block
@property (retain) NSMutableArray * dispatchQueues;                 //@synthesize dispatchQueues=_dispatchQueues - In the implementation block
@property (retain) NSMutableArray * threadIds;                      //@synthesize threadIds=_threadIds - In the implementation block
@property (assign) BOOL isMainThread;                               //@synthesize isMainThread=_isMainThread - In the implementation block
@property (assign) BOOL isTargetThread;                             //@synthesize isTargetThread=_isTargetThread - In the implementation block
@property (retain) SAMutableDataOutputStream * stream;              //@synthesize stream=_stream - In the implementation block
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(BOOL)isMainThread;
-(SAMutableDataOutputStream *)stream;
-(void)setStream:(SAMutableDataOutputStream *)arg1 ;
-(void)setIsMainThread:(BOOL)arg1 ;
-(NSMutableArray *)dispatchQueues;
-(void)setDispatchQueues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)threadIds;
-(void)setThreadIds:(NSMutableArray *)arg1 ;
-(BOOL)isTargetThread;
-(void)setIsTargetThread:(BOOL)arg1 ;
@end

