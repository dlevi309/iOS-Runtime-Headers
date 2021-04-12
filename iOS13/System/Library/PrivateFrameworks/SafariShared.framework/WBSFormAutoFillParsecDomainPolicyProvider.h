/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSFormAutoFillFeedbackDomainPolicyProvider.h>

@protocol WBSCrowdsourcedFeedbackWhitelist;
@class NSString;

@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider> {

	id<WBSCrowdsourcedFeedbackWhitelist> _feedbackWhitelist;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)autoFillFeedbackProcessor:(id)arg1 determineWhetherToSendFeedbackForDomain:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)initWithFeedbackWhitelist:(id)arg1 ;
-(void)setPoliciesWithJSONData:(id)arg1 retrievalURLString:(id)arg2 ;
-(void)getLastPolicyRetrievalURLStringWithResultHandler:(/*^block*/id)arg1 ;
@end

