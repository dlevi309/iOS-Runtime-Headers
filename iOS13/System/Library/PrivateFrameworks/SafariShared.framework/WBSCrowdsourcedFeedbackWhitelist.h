/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSCrowdsourcedFeedbackWhitelist
@required
-(void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1;
-(void)replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getWhitelistStatusForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDomain:(id)arg1 isWhitelistedForFeedback:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLastWhitelistRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

