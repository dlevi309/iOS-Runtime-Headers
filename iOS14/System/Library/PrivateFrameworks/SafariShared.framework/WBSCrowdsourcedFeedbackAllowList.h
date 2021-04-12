/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSCrowdsourcedFeedbackAllowList
@required
-(void)getLastAllowListRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1;
-(void)setLastAllowListRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)replaceDomainAllowListWithDomains:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getAllowListStatusForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDomain:(id)arg1 isAllowListedForFeedback:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;

@end

