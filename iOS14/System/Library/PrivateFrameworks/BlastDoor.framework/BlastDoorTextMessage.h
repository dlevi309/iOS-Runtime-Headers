/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, BlastDoorMetadata, BlastDoorTextMessageMessageTypeWrapper, NSUUID, BlastDoorTextMessage_MessageSummaryInfo, BlastDoorNicknameInformation;

@interface BlastDoorTextMessage : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) BlastDoorMetadata * metadata; 
@property (readonly,nonatomic) BlastDoorTextMessageMessageTypeWrapper * messageSubType; 
@property (readonly,nonatomic) long long encryptionType; 
@property (readonly,nonatomic) NSUUID * replyToGUID; 
@property (readonly,nonatomic) NSString * threadIdentifierGUID; 
@property (readonly,nonatomic) NSString * expressiveSendStyleIdentifier; 
@property (readonly,nonatomic) NSString * groupID; 
@property (readonly,nonatomic) NSString * currentGroupName; 
@property (readonly,nonatomic) BOOL has_groupParticipantVersion; 
@property (readonly,nonatomic) unsigned long long groupParticipantVersion; 
@property (readonly,nonatomic) BOOL has_groupProtocolVersion; 
@property (readonly,nonatomic) unsigned long long groupProtocolVersion; 
@property (readonly,nonatomic) BOOL has_groupPhotoCreationTime; 
@property (readonly,nonatomic) unsigned long long groupPhotoCreationTime; 
@property (readonly,nonatomic) BlastDoorTextMessage_MessageSummaryInfo * messageSummaryInfo; 
@property (readonly,nonatomic) BlastDoorNicknameInformation * nicknameInformation; 
@property (readonly,nonatomic) NSString * truncatedNicknameRecordKey; 
-(id)init;
-(NSString *)groupID;
-(long long)encryptionType;
-(NSString *)description;
-(BlastDoorTextMessage_MessageSummaryInfo *)messageSummaryInfo;
-(BlastDoorMetadata *)metadata;
-(NSUUID *)replyToGUID;
-(BlastDoorTextMessageMessageTypeWrapper *)messageSubType;
-(NSString *)threadIdentifierGUID;
-(NSString *)expressiveSendStyleIdentifier;
-(NSString *)currentGroupName;
-(BOOL)has_groupParticipantVersion;
-(unsigned long long)groupParticipantVersion;
-(BOOL)has_groupProtocolVersion;
-(unsigned long long)groupProtocolVersion;
-(BOOL)has_groupPhotoCreationTime;
-(unsigned long long)groupPhotoCreationTime;
-(BlastDoorNicknameInformation *)nicknameInformation;
-(NSString *)truncatedNicknameRecordKey;
@end

