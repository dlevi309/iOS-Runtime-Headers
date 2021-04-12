/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)presentViewController:(id)arg1 ;
-(void)cardViewDidAppear:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)didReportUserResponseFeedback:(id)arg1 ;
-(void)willDismissViewController:(id)arg1 ;
-(id)feedbackListener;
-(id<CRKFeedbackDelegate>)feedbackDelegate;
-(void)setFeedbackDelegate:(id<CRKFeedbackDelegate>)arg1 ;
-(BOOL)shouldHandleCardSectionEngagement:(id)arg1 ;
-(void)presentViewControllerForCard:(id)arg1 animate:(BOOL)arg2 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2 ;
@end

