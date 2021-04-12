/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/


@protocol FCUserInfoObserving <NSObject>
@optional
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeOnboardingStatus:(id)arg1;
-(void)userInfoDidChangeNotificationsUserID:(id)arg1;
-(void)userInfoDidChangeDateLastViewedSaved:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeEditorialArticleVersion:(id)arg1;
-(void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;
-(void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(BOOL)arg3;
-(void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;

@end

