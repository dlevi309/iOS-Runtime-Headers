/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

