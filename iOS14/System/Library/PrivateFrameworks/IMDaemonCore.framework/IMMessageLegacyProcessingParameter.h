/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMMessageLegacyProcessingParameter <IMPipelineParameter>
@required
-(id)chat;
-(id)groupID;
-(id)encryptionType;
-(id)fromIdentifier;
-(BOOL)isFromMe;
-(BOOL)wantsDeliveryReceipt;
-(BOOL)wantsCheckpointing;
-(id)currentGroupName;
-(id)groupPhotoCreationTime;
-(BOOL)isFromStorage;
-(BOOL)isLastFromStorage;
-(id)messageItems;
-(id)toIdentifier;
-(id)participantIdentifiers;
-(id)inlineAttachmentsDictionary;
-(id)attributionInfoArray;
-(id)nicknameDictionary;

@end

