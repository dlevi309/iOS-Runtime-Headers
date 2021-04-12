/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@protocol MFContactsSearchConsumer <NSObject>
@optional
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedSearchingForCorecipients;
-(void)finishedTaskWithID:(id)arg1;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;

@end

