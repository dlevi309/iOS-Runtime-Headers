/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

@interface HMDAccessoryQueues : HMFObject {

	NSMutableDictionary* queues;

}

@property (nonatomic,retain) NSMutableDictionary * queues; 
-(id)init;
-(void)removeAccessory:(id)arg1 ;
-(BOOL)createQueue:(id)arg1 ;
-(id)popAccessoryFromQueue:(id)arg1 ;
-(id)getContextForAccessory:(id)arg1 ;
-(int)countForQueue:(id)arg1 ;
-(void)addAccessory:(id)arg1 toQueue:(id)arg2 context:(id)arg3 ;
-(id)getAccessoryForContext:(id)arg1 fromQueue:(id)arg2 ;
-(id)whichQueueForAccessory:(id)arg1 ;
-(void)enumerateQueue:(id)arg1 enumerateAccessory:(/*^block*/id)arg2 ;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)queues;
-(BOOL)_inQueue:(id)arg1 queue:(id)arg2 ;
@end

