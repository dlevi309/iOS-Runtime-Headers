/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/

#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate.h>
#import <libobjc.A.dylib/CRKFeedbackDelegateProxying.h>

@protocol CRKFeedbackDelegate;
@class NSString;

@interface SUICKPFeedbackAdapter : NSObject <SearchUIFeedbackDelegate, CRKFeedbackDelegateProxying> {

	id<CRKFeedbackDelegate> _feedbackDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CRKFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
-(id)feedbackListener;
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)willDismissViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)cardViewDidAppear:(id)arg1 ;
-(void)didReportUserResponseFeedback:(id)arg1 ;
-(BOOL)shouldHandleCardSectionEngagement:(id)arg1 ;
-(void)setFeedbackDelegate:(id<CRKFeedbackDelegate>)arg1 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2 ;
-(void)presentViewControllerForCard:(id)arg1 animate:(BOOL)arg2 ;
-(id<CRKFeedbackDelegate>)feedbackDelegate;
@end

