/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSMutableDictionary;

@interface DEWorkQueues : NSObject {

	NSMutableDictionary* _queues;

}

@property (retain) NSMutableDictionary * queues;              //@synthesize queues=_queues - In the implementation block
-(id)init;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)queues;
-(void)on:(id)arg1 enqueue:(/*^block*/id)arg2 ;
-(void)advance:(id)arg1 ;
@end

