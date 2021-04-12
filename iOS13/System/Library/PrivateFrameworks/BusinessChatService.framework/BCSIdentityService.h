/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol OS_dispatch_queue;
@class IDSAccount, NSObject, NSMutableDictionary;

@interface BCSIdentityService : NSObject {

	IDSAccount* _businessChatAccount;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	NSMutableDictionary* _idStatusCompletionBlocks;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialDispatchQueue;              //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * idStatusCompletionBlocks;                //@synthesize idStatusCompletionBlocks=_idStatusCompletionBlocks - In the implementation block
+(id)sharedInstance;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(void)setSerialDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)refreshIDStatusForBizID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)businessChatAccount;
-(void)addIDSIDQueryControllerDelegate;
-(NSMutableDictionary *)idStatusCompletionBlocks;
-(void)setIdStatusCompletionBlocks:(NSMutableDictionary *)arg1 ;
-(void)handleIDStatusCompletionBlocksForBizID:(id)arg1 idStatus:(long long)arg2 ;
-(void)warmBusinessChatAccountCache;
@end

