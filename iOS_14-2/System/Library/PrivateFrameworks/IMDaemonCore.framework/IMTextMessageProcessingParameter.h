/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMTextMessageProcessingParameter <IMPipelineParameter>
@required
-(id)chat;
-(id)timestamp;
-(BOOL)isExpirable;
-(id)messageSummaryInfo;
-(id)fileTransferGUIDs;
-(id)fromIdentifier;
-(BOOL)isFromMe;
-(id)GUID;
-(BOOL)wantsDeliveryReceipt;
-(id)plainTextBody;
-(id)plainTextSubject;
-(id)threadIdentifierGUID;
-(id)expressiveSendStyleIdentifier;
-(void)setMessageItems:(id)arg1;
-(id)fromDisplayID;
-(id)richBody;
-(id)toIdentifier;
-(id)participantIdentifiers;

@end

