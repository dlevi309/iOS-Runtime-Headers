/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPSharedTripStorageDelegate;
@class MSPGroupSessionStorage, NSMutableDictionary;

@interface MSPSharedTripStorageController : NSObject {

	id<MSPSharedTripStorageDelegate> _delegate;
	MSPGroupSessionStorage* _senderSession;
	NSMutableDictionary* _sharedTripGroupSessionInfo;
	NSMutableDictionary* _receiverRules;
	NSMutableDictionary* _senderRules;

}

@property (nonatomic,retain) NSMutableDictionary * sharedTripGroupSessionInfo;              //@synthesize sharedTripGroupSessionInfo=_sharedTripGroupSessionInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * receiverRules;                           //@synthesize receiverRules=_receiverRules - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * senderRules;                             //@synthesize senderRules=_senderRules - In the implementation block
@property (assign,nonatomic,__weak) id<MSPSharedTripStorageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MSPGroupSessionStorage * senderSession;                        //@synthesize senderSession=_senderSession - In the implementation block
-(void)_loadSenderSession;
-(void)_loadStoredSessions;
-(NSMutableDictionary *)sharedTripGroupSessionInfo;
-(id)init;
-(MSPGroupSessionStorage *)senderSession;
-(id<MSPSharedTripStorageDelegate>)delegate;
-(void)setSenderRules:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)receiverRules;
-(void)setReceiverRules:(NSMutableDictionary *)arg1 ;
-(void)_saveSendingRules;
-(id)sendingRulesForIdentifier:(id)arg1 ;
-(id)_storingSenderPath;
-(void)setDelegate:(id<MSPSharedTripStorageDelegate>)arg1 ;
-(void)setSenderSession:(MSPGroupSessionStorage *)arg1 ;
-(void)setSharedTripGroupSessionInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)senderRules;
-(void)_saveStoredSessions;
-(void)addNewSession:(id)arg1 originator:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4 ;
-(void)updateGroupSessionStorageWithState:(id)arg1 ;
-(id)receivingRulesForIdentifier:(id)arg1 ;
-(void)removeSession:(id)arg1 ;
-(id)_rulesPath;
-(void)_saveSenderSession;
-(void)_saveReceivingRules;
-(void)sendingRulesTouched;
-(id)_storingPath;
-(void)dealloc;
-(id)_senderRulesPath;
-(void)receivingRulesTouched;
-(id)groupSessionInfoForKey:(id)arg1 ;
@end

