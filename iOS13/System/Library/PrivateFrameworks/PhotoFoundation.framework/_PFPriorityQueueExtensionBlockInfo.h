/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface _PFPriorityQueueExtensionBlockInfo : NSObject {

	unsigned _qos;
	/*^block*/id _block;
	unsigned long long _priority;

}

@property (readonly) id block;                                 //@synthesize block=_block - In the implementation block
@property (readonly) unsigned qos;                             //@synthesize qos=_qos - In the implementation block
@property (readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
-(id)block;
-(unsigned)qos;
-(unsigned long long)priority;
-(id)initWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3 ;
@end

