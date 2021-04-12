/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSMutableSet, NSMutableDictionary, NSDate;

@interface NNMKSyncSessionController : NSObject {

	NSMutableSet* _messageIdsToIgnoreStatusUpdates;
	NSMutableDictionary* _notificationPayloadAcks;
	NSMutableDictionary* _syncingAccountIdentityByUsername;
	NSMutableDictionary* _standaloneStateByAccountId;
	double _accountAuthRequestLastRequestTime;
	NSDate* _lastSyncDueToMailboxesMismatchRequestTime;

}

@property (nonatomic,retain) NSMutableSet * messageIdsToIgnoreStatusUpdates;                      //@synthesize messageIdsToIgnoreStatusUpdates=_messageIdsToIgnoreStatusUpdates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationPayloadAcks;                       //@synthesize notificationPayloadAcks=_notificationPayloadAcks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * syncingAccountIdentityByUsername;              //@synthesize syncingAccountIdentityByUsername=_syncingAccountIdentityByUsername - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * standaloneStateByAccountId;                    //@synthesize standaloneStateByAccountId=_standaloneStateByAccountId - In the implementation block
@property (assign,nonatomic) double accountAuthRequestLastRequestTime;                            //@synthesize accountAuthRequestLastRequestTime=_accountAuthRequestLastRequestTime - In the implementation block
@property (nonatomic,retain) NSDate * lastSyncDueToMailboxesMismatchRequestTime;                  //@synthesize lastSyncDueToMailboxesMismatchRequestTime=_lastSyncDueToMailboxesMismatchRequestTime - In the implementation block
-(id)init;
-(unsigned long long)standaloneStateForAccountId:(id)arg1 ;
-(void)updateStandaloneState:(unsigned long long)arg1 forAccountId:(id)arg2 ;
-(void)deleteStandaloneStateForAccountId:(id)arg1 ;
-(NSMutableSet *)messageIdsToIgnoreStatusUpdates;
-(void)setMessageIdsToIgnoreStatusUpdates:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)notificationPayloadAcks;
-(void)setNotificationPayloadAcks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)syncingAccountIdentityByUsername;
-(void)setSyncingAccountIdentityByUsername:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)standaloneStateByAccountId;
-(void)setStandaloneStateByAccountId:(NSMutableDictionary *)arg1 ;
-(double)accountAuthRequestLastRequestTime;
-(void)setAccountAuthRequestLastRequestTime:(double)arg1 ;
-(NSDate *)lastSyncDueToMailboxesMismatchRequestTime;
-(void)setLastSyncDueToMailboxesMismatchRequestTime:(NSDate *)arg1 ;
@end

