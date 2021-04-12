/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue, BSSharedMemoryStoreData;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject, NSString;

@interface BSSharedMemoryStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _basePath;
	SCD_Struct_BS3 _queue_path;
	id<BSSharedMemoryStoreData> _queue_data;
	unsigned char _queue_lastState;
	unsigned char _queue_nextWriteFailure;
	BOOL _queue_writeFailedOnce;
	BOOL _queue_invalidated;

}

@property (nonatomic,readonly) unsigned char _lastState; 
@property (nonatomic,copy) id<BSSharedMemoryStoreData> data; 
+(id)deserializeDataOfClass:(Class)arg1 withSerializedFromData:(id)arg2 ;
+(void)_unlinkAllForIdentifier:(id)arg1 ;
-(void)_setFailureModeForNextWrite:(unsigned char)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg1 dataClass:(Class)arg2 ;
-(void)setData:(id<BSSharedMemoryStoreData>)arg1 ;
-(unsigned char)_lastState;
-(id<BSSharedMemoryStoreData>)data;
-(void)invalidate;
-(void)dealloc;
@end

