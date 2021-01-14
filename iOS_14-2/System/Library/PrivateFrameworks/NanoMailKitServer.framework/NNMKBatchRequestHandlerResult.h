/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSArray;

@interface NNMKBatchRequestHandlerResult : NSObject {

	NSArray* _fetchResults;
	NSArray* _mailboxesToTriggerFullSync;
	NSArray* _missingMessageHeaderIds;
	NSArray* _messageIdsForRequestingContentDownload;

}

@property (nonatomic,retain) NSArray * fetchResults;                                        //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) NSArray * mailboxesToTriggerFullSync;                          //@synthesize mailboxesToTriggerFullSync=_mailboxesToTriggerFullSync - In the implementation block
@property (nonatomic,retain) NSArray * missingMessageHeaderIds;                             //@synthesize missingMessageHeaderIds=_missingMessageHeaderIds - In the implementation block
@property (nonatomic,retain) NSArray * messageIdsForRequestingContentDownload;              //@synthesize messageIdsForRequestingContentDownload=_messageIdsForRequestingContentDownload - In the implementation block
-(NSArray *)fetchResults;
-(void)setFetchResults:(NSArray *)arg1 ;
-(void)setMailboxesToTriggerFullSync:(NSArray *)arg1 ;
-(void)setMissingMessageHeaderIds:(NSArray *)arg1 ;
-(void)setMessageIdsForRequestingContentDownload:(NSArray *)arg1 ;
-(NSArray *)mailboxesToTriggerFullSync;
-(NSArray *)missingMessageHeaderIds;
-(NSArray *)messageIdsForRequestingContentDownload;
@end

