/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSString;

@interface _CKDispatchQueueBlock : NSObject {

	/*^block*/id _block;
	NSString* _key;
	long long _priority;
	unsigned long long _fifo;

}

@property (nonatomic,copy) id block;                                               //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * key;                                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long priority;                                   //@synthesize priority=_priority - In the implementation block
@property (assign,setter=setFIFO:,nonatomic) unsigned long long fifo;              //@synthesize fifo=_fifo - In the implementation block
-(id)description;
-(NSString *)key;
-(long long)compare:(id)arg1 ;
-(void)cancel;
-(id)block;
-(void)setKey:(NSString *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 key:(id)arg2 priority:(long long)arg3 fifo:(unsigned long long)arg4 ;
-(unsigned long long)fifo;
-(void)setFIFO:(unsigned long long)arg1 ;
@end

