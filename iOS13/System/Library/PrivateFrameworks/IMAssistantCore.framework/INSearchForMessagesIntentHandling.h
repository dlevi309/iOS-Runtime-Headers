/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@protocol INSearchForMessagesIntentHandling <NSObject>
@optional
-(void)confirmSearchForMessages:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveDateTimeRangeForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveGroupNamesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleSearchForMessages:(id)arg1 completion:(/*^block*/id)arg2;

@end

