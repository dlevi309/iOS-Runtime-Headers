/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
*/


#import <MMCS/MMCS-Structs.h>
@class NSMutableArray;

@interface MMCSBoundedQueue : NSObject {

	BOOL _isValid;
	unsigned long long _bytesUpperBound;
	unsigned long long _bytesErrorLevel;
	NSMutableArray* _entries;
	dispatch_semaphore_sRef _boundsExceeded;

}

@property (nonatomic,retain) NSMutableArray * entries;                            //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) dispatch_semaphore_sRef boundsExceeded;              //@synthesize boundsExceeded=_boundsExceeded - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesUpperBound;                //@synthesize bytesUpperBound=_bytesUpperBound - In the implementation block
@property (assign,nonatomic) unsigned long long bytesErrorLevel;                  //@synthesize bytesErrorLevel=_bytesErrorLevel - In the implementation block
@property (nonatomic,readonly) BOOL isValid;                                      //@synthesize isValid=_isValid - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)entries;
-(unsigned long long)bytesUpperBound;
-(void)addData:(id)arg1 ;
-(unsigned long long)_sync_aggregateByteCount;
-(BOOL)_sync_isFull;
-(id)initWithUpperBound:(unsigned long long)arg1 ;
-(void)removeNextDataWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)bytesErrorLevel;
-(void)setBytesErrorLevel:(unsigned long long)arg1 ;
-(dispatch_semaphore_sRef)boundsExceeded;
-(void)setBoundsExceeded:(dispatch_semaphore_sRef)arg1 ;
@end

