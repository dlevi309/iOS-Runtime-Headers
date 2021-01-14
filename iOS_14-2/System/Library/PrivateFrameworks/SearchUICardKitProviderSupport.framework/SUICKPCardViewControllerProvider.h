/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/

#import <SearchUICardKitProviderSupport/SearchUICardKitProviderSupport-Structs.h>
#import <libobjc.A.dylib/CRKCardSectionViewControllerDelegate.h>
#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControllerProviding.h>
#import <SearchUICardKitProviderSupport/SearchUICardViewDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface SUICKPCardViewControllerProvider : NSObject <CRKCardSectionViewControllerDelegate, SearchUIFeedbackDelegate, CRKCardViewControllerProviding, SearchUICardViewDelegate> {

	NSMutableDictionary* _cardsByCardSectionIdentifiers;
	NSMutableDictionary* _cardViewControllersByCardIdentifiers;
	NSMutableArray* _pendingDismissalCommands;
	long long _preferredPunchoutIndex;
	NSMutableDictionary* _feedbackDelegateDemultiplexersByCardIdentifiers;
	CGSize _preferredContentSize;

}

@property (nonatomic,retain) NSMutableDictionary * feedbackDelegateDemultiplexersByCardIdentifiers;              //@synthesize feedbackDelegateDemultiplexersByCardIdentifiers=_feedbackDelegateDemultiplexersByCardIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentViewController:(id)arg1 ;
-(id)init;
-(id)customViewControllerForCardSection:(id)arg1 ;
-(void)cardViewController:(id)arg1 preferredContentSizeDidChange:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)cardSectionView:(id)arg1 willProcessEngagementFeedback:(id)arg2 ;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(CGSize)boundingSizeForCardSectionViewController:(id)arg1 ;
-(unsigned long long)displayPriorityForCard:(id)arg1 ;
-(id)cardViewControllerForCard:(id)arg1 ;
-(void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3 ;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2 ;
-(id)_createCardViewControllerForCard:(id)arg1 ;
-(id)_cardViewControllerForCardSection:(id)arg1 ;
-(BOOL)_askDelegateToPerformReferentialCommand:(id)arg1 forCardSection:(id)arg2 ;
-(NSMutableDictionary *)feedbackDelegateDemultiplexersByCardIdentifiers;
-(void)setFeedbackDelegateDemultiplexersByCardIdentifiers:(NSMutableDictionary *)arg1 ;
@end

