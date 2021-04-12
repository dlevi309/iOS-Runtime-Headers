/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSObject;

@interface IMMessagesToTrack : NSObject {

	NSMutableOrderedSet* _recentMessageIDs;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSMutableOrderedSet * recentMessageIDs;                    //@synthesize recentMessageIDs=_recentMessageIDs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumberOfMessages; 
@property (nonatomic,readonly) unsigned long long currentNumberOfMessages; 
+(id)sharedInstance;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)addMessagesID:(id)arg1 ;
-(unsigned long long)maxNumberOfMessages;
-(NSMutableOrderedSet *)recentMessageIDs;
-(void)containsMessageID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)currentNumberOfMessages;
-(void)setRecentMessageIDs:(NSMutableOrderedSet *)arg1 ;
@end

