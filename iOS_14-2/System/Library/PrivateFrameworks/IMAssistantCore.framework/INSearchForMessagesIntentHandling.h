/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

