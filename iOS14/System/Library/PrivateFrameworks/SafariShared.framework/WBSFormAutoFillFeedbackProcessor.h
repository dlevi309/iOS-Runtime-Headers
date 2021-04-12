/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSFormAutoFillFeedbackProcessor <NSObject>
@property (nonatomic,retain) id<WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider; 
@required
-(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)domainPolicyProvider;
-(void)setDomainPolicyProvider:(id)arg1;
-(void)sendFeedbackWithCorrectionSet:(id)arg1;

@end

