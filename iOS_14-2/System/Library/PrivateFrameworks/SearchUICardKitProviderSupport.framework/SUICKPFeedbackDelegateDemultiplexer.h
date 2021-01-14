/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/

#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate.h>

@protocol SearchUIFeedbackDelegate;
@class NSMutableDictionary, NSString;

@interface SUICKPFeedbackDelegateDemultiplexer : NSObject <SearchUIFeedbackDelegate> {

	NSMutableDictionary* _feedbackDelegatesByCardSectionIdentifiers;
	NSMutableDictionary* _feedbackDelegatesByCardSectionViewIds;
	id<SearchUIFeedbackDelegate> _defaultDelegate;

}

@property (nonatomic,readonly) NSMutableDictionary * feedbackDelegatesByCardSectionIdentifiers;              //@synthesize feedbackDelegatesByCardSectionIdentifiers=_feedbackDelegatesByCardSectionIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * feedbackDelegatesByCardSectionViewIds;                  //@synthesize feedbackDelegatesByCardSectionViewIds=_feedbackDelegatesByCardSectionViewIds - In the implementation block
@property (nonatomic,retain) id<SearchUIFeedbackDelegate> defaultDelegate;                                   //@synthesize defaultDelegate=_defaultDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)willDismissViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(id)init;
-(void)didErrorOccur:(id)arg1 ;
-(void)setDefaultDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id<SearchUIFeedbackDelegate>)defaultDelegate;
-(void)didEngageCardSection:(id)arg1 ;
-(void)reportFeedback:(id)arg1 queryId:(long long)arg2 ;
-(void)cardViewDidAppear:(id)arg1 ;
-(void)didReportUserResponseFeedback:(id)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1 ;
-(BOOL)shouldHandleCardSectionEngagement:(id)arg1 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2 ;
-(void)presentViewControllerForCard:(id)arg1 animate:(BOOL)arg2 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 ;
-(NSMutableDictionary *)feedbackDelegatesByCardSectionIdentifiers;
-(NSMutableDictionary *)feedbackDelegatesByCardSectionViewIds;
-(id)_delegateForFeedback:(id)arg1 ;
-(id)_delegateForView:(id)arg1 ;
@end

