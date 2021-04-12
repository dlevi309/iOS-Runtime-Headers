/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)presentViewController:(id)arg1 ;
-(void)reportFeedback:(id)arg1 queryId:(long long)arg2 ;
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)cardViewDidAppear:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)didErrorOccur:(id)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(void)didReportUserResponseFeedback:(id)arg1 ;
-(void)willDismissViewController:(id)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1 ;
-(BOOL)shouldHandleCardSectionEngagement:(id)arg1 ;
-(void)presentViewControllerForCard:(id)arg1 animate:(BOOL)arg2 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 ;
-(void)setDefaultDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(NSMutableDictionary *)feedbackDelegatesByCardSectionIdentifiers;
-(NSMutableDictionary *)feedbackDelegatesByCardSectionViewIds;
-(id)_delegateForFeedback:(id)arg1 ;
-(id)_delegateForView:(id)arg1 ;
-(id<SearchUIFeedbackDelegate>)defaultDelegate;
@end

