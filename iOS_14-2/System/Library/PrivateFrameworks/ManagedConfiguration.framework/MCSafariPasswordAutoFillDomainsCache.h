/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface MCSafariPasswordAutoFillDomainsCache : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableArray* _memberQueueCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;              //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * memberQueueCache;                     //@synthesize memberQueueCache=_memberQueueCache - In the implementation block
+(id)sharedCache;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)rereadCache;
-(id)init;
-(void)memberQueueRereadCache;
-(NSMutableArray *)memberQueueCache;
-(void)setMemberQueueCache:(NSMutableArray *)arg1 ;
-(BOOL)isSafariPasswordAutoFillAllowedForURL:(id)arg1 ;
@end

