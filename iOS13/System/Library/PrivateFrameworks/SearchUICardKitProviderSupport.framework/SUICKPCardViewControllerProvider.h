/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,retain) NSMutableDictionary * feedbackDelegateDemultiplexersByCardIdentifiers;              //@synthesize feedbackDelegateDemultiplexersByCardIdentifiers=_feedbackDelegateDemultiplexersByCardIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)presentViewController:(id)arg1 ;
-(id)customViewControllerForCardSection:(id)arg1 ;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(unsigned long long)displayPriorityForCard:(id)arg1 ;
-(id)cardViewControllerForCard:(id)arg1 ;
-(void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3 ;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2 ;
-(CGSize)boundingSizeForCardSectionViewController:(id)arg1 ;
-(id)_cardViewControllerForCardSection:(id)arg1 ;
-(BOOL)_askDelegateToPerformReferentialCommand:(id)arg1 forCardSection:(id)arg2 ;
-(NSMutableDictionary *)feedbackDelegateDemultiplexersByCardIdentifiers;
-(void)setFeedbackDelegateDemultiplexersByCardIdentifiers:(NSMutableDictionary *)arg1 ;
@end

