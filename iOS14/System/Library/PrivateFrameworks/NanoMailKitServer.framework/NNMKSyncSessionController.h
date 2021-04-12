/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSMutableSet, NSMutableDictionary, NSDate;

@interface NNMKSyncSessionController : NSObject {

	BOOL _deviceInStandalone;
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
@property (assign,nonatomic) BOOL deviceInStandalone;                                             //@synthesize deviceInStandalone=_deviceInStandalone - In the implementation block
-(id)init;
-(double)accountAuthRequestLastRequestTime;
-(void)setStandaloneStateByAccountId:(NSMutableDictionary *)arg1 ;
-(BOOL)deviceInStandalone;
-(void)deleteStandaloneStateForAccountId:(id)arg1 ;
-(void)setNotificationPayloadAcks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)notificationPayloadAcks;
-(void)setSyncingAccountIdentityByUsername:(NSMutableDictionary *)arg1 ;
-(void)updateStandaloneState:(unsigned long long)arg1 forAccountId:(id)arg2 ;
-(unsigned long long)standaloneStateForAccountId:(id)arg1 ;
-(NSMutableDictionary *)syncingAccountIdentityByUsername;
-(void)setAccountAuthRequestLastRequestTime:(double)arg1 ;
-(void)setLastSyncDueToMailboxesMismatchRequestTime:(NSDate *)arg1 ;
-(NSMutableSet *)messageIdsToIgnoreStatusUpdates;
-(NSDate *)lastSyncDueToMailboxesMismatchRequestTime;
-(void)setMessageIdsToIgnoreStatusUpdates:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)standaloneStateByAccountId;
-(void)setDeviceInStandalone:(BOOL)arg1 ;
@end

