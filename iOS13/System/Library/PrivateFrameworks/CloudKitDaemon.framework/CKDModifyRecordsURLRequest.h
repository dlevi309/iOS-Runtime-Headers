/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSDictionary, NSArray, NSData, NSMutableDictionary;

@interface CKDModifyRecordsURLRequest : CKDURLRequest {

	BOOL _atomic;
	BOOL _markAsParticipantNeedsNewInvitationToken;
	BOOL _oplock;
	BOOL _sendAllFields;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;
	NSDictionary* _pluginFieldsForRecordDeletesByID;
	NSArray* _userPublicKeys;
	/*^block*/id _recordPostedBlock;
	NSArray* _records;
	NSArray* _recordIDsToDelete;
	NSData* _clientChangeTokenData;
	NSDictionary* _requestedFieldsByRecordID;
	NSMutableDictionary* _recordIDByRequestID;
	NSMutableDictionary* _recordByRequestID;

}

@property (nonatomic,retain) NSArray * records;                                             //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                   //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (assign,nonatomic) BOOL oplock;                                                   //@synthesize oplock=_oplock - In the implementation block
@property (assign,nonatomic) BOOL sendAllFields;                                            //@synthesize sendAllFields=_sendAllFields - In the implementation block
@property (nonatomic,retain) NSData * clientChangeTokenData;                                //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (nonatomic,retain) NSDictionary * requestedFieldsByRecordID;                      //@synthesize requestedFieldsByRecordID=_requestedFieldsByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDByRequestID;                     //@synthesize recordIDByRequestID=_recordIDByRequestID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordByRequestID;                       //@synthesize recordByRequestID=_recordByRequestID - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToDeleteToEtags;                       //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;              //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginFieldsForRecordDeletesByID;               //@synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID - In the implementation block
@property (assign,nonatomic) BOOL atomic;                                                   //@synthesize atomic=_atomic - In the implementation block
@property (assign,nonatomic) BOOL markAsParticipantNeedsNewInvitationToken;                 //@synthesize markAsParticipantNeedsNewInvitationToken=_markAsParticipantNeedsNewInvitationToken - In the implementation block
@property (nonatomic,retain) NSArray * userPublicKeys;                                      //@synthesize userPublicKeys=_userPublicKeys - In the implementation block
@property (nonatomic,copy) id recordPostedBlock;                                            //@synthesize recordPostedBlock=_recordPostedBlock - In the implementation block
-(int)operationType;
-(void)setAtomic:(BOOL)arg1 ;
-(NSArray *)records;
-(NSArray *)recordIDsToDelete;
-(NSData *)clientChangeTokenData;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(BOOL)atomic;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(NSDictionary *)pluginFieldsForRecordDeletesByID;
-(void)setPluginFieldsForRecordDeletesByID:(NSDictionary *)arg1 ;
-(BOOL)markAsParticipantNeedsNewInvitationToken;
-(void)setMarkAsParticipantNeedsNewInvitationToken:(BOOL)arg1 ;
-(void)setRecords:(NSArray *)arg1 ;
-(int)isolationLevel;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(id)zoneIDsToLock;
-(NSMutableDictionary *)recordIDByRequestID;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
-(NSArray *)userPublicKeys;
-(void)setUserPublicKeys:(NSArray *)arg1 ;
-(id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 oplock:(BOOL)arg3 sendAllFields:(BOOL)arg4 clientChangeTokenData:(id)arg5 requestedFieldsByRecordId:(id)arg6 ;
-(void)setRecordPostedBlock:(id)arg1 ;
-(BOOL)sendAllFields;
-(BOOL)oplock;
-(NSDictionary *)requestedFieldsByRecordID;
-(NSMutableDictionary *)recordByRequestID;
-(id)recordPostedBlock;
-(void)setOplock:(BOOL)arg1 ;
-(void)setSendAllFields:(BOOL)arg1 ;
-(void)setRequestedFieldsByRecordID:(NSDictionary *)arg1 ;
-(void)setRecordByRequestID:(NSMutableDictionary *)arg1 ;
@end

