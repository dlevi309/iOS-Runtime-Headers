/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class CKRecordZoneID, CKRecordZone, IMDCKDatabaseManager, APSConnection, NSString;

@interface IMDRecordZoneManager : NSObject <APSConnectionDelegate> {

	CKRecordZoneID* _chatRecordZoneID;
	CKRecordZone* _chatRecordZone;
	CKRecordZoneID* _attachmentRecordZoneID;
	CKRecordZone* _attachmentRecordZone;
	CKRecordZoneID* _messageRecordZoneID;
	CKRecordZone* _messageRecordZone;
	CKRecordZoneID* _analyticRecordZoneID;
	CKRecordZone* _analyticRecordZone;
	CKRecordZoneID* _deDupeSaltZoneID;
	CKRecordZone* _deDupeSaltRecordZone;
	CKRecordZoneID* _metricZoneID;
	IMDCKDatabaseManager* _dataBaseManager;
	APSConnection* _pushConnection;

}

@property (nonatomic,retain) IMDCKDatabaseManager * dataBaseManager;                 //@synthesize dataBaseManager=_dataBaseManager - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnection;                         //@synthesize pushConnection=_pushConnection - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * chatRecordZoneID;                    //@synthesize chatRecordZoneID=_chatRecordZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * chatRecordZone;                        //@synthesize chatRecordZone=_chatRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * attachmentRecordZoneID;              //@synthesize attachmentRecordZoneID=_attachmentRecordZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * attachmentRecordZone;                  //@synthesize attachmentRecordZone=_attachmentRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * messageRecordZoneID;                 //@synthesize messageRecordZoneID=_messageRecordZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * messageRecordZone;                     //@synthesize messageRecordZone=_messageRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * analyticRecordZoneID;                //@synthesize analyticRecordZoneID=_analyticRecordZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * analyticRecordZone;                    //@synthesize analyticRecordZone=_analyticRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * deDupeSaltZoneID;                    //@synthesize deDupeSaltZoneID=_deDupeSaltZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * deDupeSaltRecordZone;                  //@synthesize deDupeSaltRecordZone=_deDupeSaltRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * metricZoneID;                        //@synthesize metricZoneID=_metricZoneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(CKRecordZone *)messageRecordZone;
-(void)_handleNotificationForZoneID:(id)arg1 subscriptionID:(id)arg2 ;
-(id)init;
-(void)createDeDupeSaltZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_checkRecordZoneExists:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CKRecordZone *)attachmentRecordZone;
-(void)_createRecordZoneIfNeeded:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deleteAnalyticZone;
-(long long)derivedQualityOfService;
-(void)deleteAllZones;
-(void)_setUpPushConnection;
-(void)fetchChatZoneToCheckManateeStatus:(/*^block*/id)arg1 ;
-(void)_deleteZone:(id)arg1 ;
-(CKRecordZone *)deDupeSaltRecordZone;
-(void)createAnalyticZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(void)_createSubscriptionForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)ckUtilities;
-(void)createMessageZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(CKRecordZoneID *)attachmentRecordZoneID;
-(CKRecordZone *)analyticRecordZone;
-(void)deleteChatZone;
-(void)deleteDeDupeSaltZone;
-(void)createSubscriptionIfNeededOnDeDupeZoneForSubscription:(id)arg1 recordType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)createAttachmentZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(CKRecordZoneID *)analyticRecordZoneID;
-(void)_deleteAllZonesForDatabase:(id)arg1 ;
-(CKRecordZoneID *)chatRecordZoneID;
-(APSConnection *)pushConnection;
-(CKRecordZoneID *)messageRecordZoneID;
-(void)deleteAttachmentZone;
-(void)_deleteZone:(id)arg1 forDatabase:(id)arg2 ;
-(CKRecordZoneID *)deDupeSaltZoneID;
-(IMDCKDatabaseManager *)dataBaseManager;
-(void)deleteMessageZone;
-(CKRecordZoneID *)metricZoneID;
-(void)_createSubscriptionIfNeededForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_createRecordZone:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CKRecordZone *)chatRecordZone;
-(void)setDataBaseManager:(IMDCKDatabaseManager *)arg1 ;
-(void)dealloc;
-(void)createChatZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
@end

