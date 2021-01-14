/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@class NSMutableArray;

@interface WFAssociationContextQueue : NSObject {

	NSMutableArray* _queue;

}

@property (nonatomic,retain) NSMutableArray * queue;              //@synthesize queue=_queue - In the implementation block
-(id)pop;
-(void)push:(id)arg1 ;
-(id)init;
-(id)peek;
-(NSMutableArray *)queue;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(void)removeAll;
-(void)_dumpQueue;
@end

