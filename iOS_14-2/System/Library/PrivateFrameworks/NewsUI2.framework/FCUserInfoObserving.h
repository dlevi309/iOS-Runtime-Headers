/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@protocol FCUserInfoObserving <NSObject>
@optional
-(void)userInfoDidChangeNotificationsUserID:(id)arg1;
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeOnboardingStatus:(id)arg1;
-(void)userInfoDidChangeAdsUserID:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeDateLastViewedSaved:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeEditorialArticleVersion:(id)arg1;
-(void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;
-(void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(BOOL)arg3;
-(void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;

@end

