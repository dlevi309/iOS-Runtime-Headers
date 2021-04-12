/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSFormAutoFillFeedbackProcessor.h>

@protocol WBSParsecGlobalFeedbackDispatcher, OS_dispatch_queue, WBSFormAutoFillFeedbackDomainPolicyProvider;
@class WBSCrowdsourcedFeedbackDomainNormalizer, NSObject, NSString;

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor> {

	id<WBSParsecGlobalFeedbackDispatcher> _globalFeedbackDispatcher;
	unsigned long long _autoFillVersion;
	WBSCrowdsourcedFeedbackDomainNormalizer* _domainNormalizer;
	NSObject*<OS_dispatch_queue> _internalQueue;
	id<WBSFormAutoFillFeedbackDomainPolicyProvider> _domainPolicyProvider;

}

@property (nonatomic,retain) id<WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;              //@synthesize domainPolicyProvider=_domainPolicyProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_getFeedbackWithCorrectionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_feedbackWithCorrectionSet:(id)arg1 includeOrigin:(BOOL)arg2 ;
-(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)domainPolicyProvider;
-(void)setDomainPolicyProvider:(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)arg1 ;
-(id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3 ;
-(void)sendFeedbackWithCorrectionSet:(id)arg1 ;
@end

