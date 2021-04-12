/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSFormAutoFillFeedbackDomainPolicyProvider.h>

@protocol WBSCrowdsourcedFeedbackAllowList;
@class NSString;

@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider> {

	id<WBSCrowdsourcedFeedbackAllowList> _feedbackAllowList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)autoFillFeedbackProcessor:(id)arg1 determineWhetherToSendFeedbackForDomain:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)initWithFeedbackAllowList:(id)arg1 ;
-(void)setPoliciesWithJSONData:(id)arg1 retrievalURLString:(id)arg2 ;
-(void)getLastPolicyRetrievalURLStringWithResultHandler:(/*^block*/id)arg1 ;
@end

