/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface MCManagedDomainsCache : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableArray* _memberQueueCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;              //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * memberQueueCache;                     //@synthesize memberQueueCache=_memberQueueCache - In the implementation block
+(id)sharedCache;
-(id)init;
-(void)rereadCache;
-(void)memberQueueRereadCache;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(NSMutableArray *)memberQueueCache;
-(void)setMemberQueueCache:(NSMutableArray *)arg1 ;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isURLManaged:(id)arg1 ;
@end

