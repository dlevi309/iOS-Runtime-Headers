/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

@interface HMDAccessoryQueues : HMFObject {

	NSMutableDictionary* queues;

}

@property (nonatomic,retain) NSMutableDictionary * queues; 
-(id)init;
-(NSMutableDictionary *)queues;
-(void)removeAccessory:(id)arg1 ;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
-(BOOL)createQueue:(id)arg1 ;
-(id)popAccessoryFromQueue:(id)arg1 ;
-(id)getContextForAccessory:(id)arg1 ;
-(int)countForQueue:(id)arg1 ;
-(void)addAccessory:(id)arg1 toQueue:(id)arg2 context:(id)arg3 ;
-(id)getAccessoryForContext:(id)arg1 fromQueue:(id)arg2 ;
-(id)whichQueueForAccessory:(id)arg1 ;
-(void)enumerateQueue:(id)arg1 enumerateAccessory:(/*^block*/id)arg2 ;
-(BOOL)_inQueue:(id)arg1 queue:(id)arg2 ;
@end

