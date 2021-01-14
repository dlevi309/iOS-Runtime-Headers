/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface FPThreadedCopier : NSObject {

	long long _numberOfInflightCopies;
	NSObject*<OS_dispatch_semaphore> _bufferLimitSemaphore;
	NSMutableArray* _buffers;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (assign,nonatomic) long long numberOfInflightCopies;                                   //@synthesize numberOfInflightCopies=_numberOfInflightCopies - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> bufferLimitSemaphore;              //@synthesize bufferLimitSemaphore=_bufferLimitSemaphore - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffers;                                           //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;                            //@synthesize writeQueue=_writeQueue - In the implementation block
+(id)sharedCopier;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(int)beginReading:(id)arg1 error:(id*)arg2 ;
-(int)beginWriting:(id)arg1 overwriteDestination:(BOOL)arg2 error:(id*)arg3 ;
-(void)beginOperation;
-(NSObject*<OS_dispatch_semaphore>)bufferLimitSemaphore;
-(BOOL)finishReading:(int)arg1 writing:(int)arg2 error:(id*)arg3 ;
-(long long)numberOfInflightCopies;
-(void)setBuffers:(NSMutableArray *)arg1 ;
-(void)setNumberOfInflightCopies:(long long)arg1 ;
-(BOOL)copy:(id)arg1 to:(id)arg2 overwriteDestination:(BOOL)arg3 progress:(id)arg4 error:(id*)arg5 ;
-(void)setBufferLimitSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)writeQueue;
-(void)endOperation;
-(NSMutableArray *)buffers;
@end

