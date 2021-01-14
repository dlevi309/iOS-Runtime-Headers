/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSPhishingURLClassifier.h>

@protocol WBSCrowdsourcedFeedbackAllowList;
@class WBSCrowdsourcedFeedbackDomainNormalizer;

@interface WBSPhishingURLClassifierCrowdsourcedFeedbackAllowListAdapter : NSObject <WBSPhishingURLClassifier> {

	id<WBSCrowdsourcedFeedbackAllowList> _crowdsourcedFeedbackAllowList;
	WBSCrowdsourcedFeedbackDomainNormalizer* _crowdsourcedFeedbackDomainNormalizer;

}
-(void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithCrowdsourcedFeedbackAllowList:(id)arg1 ;
@end

