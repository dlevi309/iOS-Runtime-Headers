/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CKAcknowledgmentVotingViewAnimatorDelegate.h>

@class NSArray, CKAggregateAcknowledgmentChatItem, UICollectionView, CKGroupAcknowledgmentVotingLayout, CKAcknowledgmentVotingViewAnimator, UITapGestureRecognizer, UIButton, _CKAcknowledgmentVoteCountView, NSString;

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKAcknowledgmentVotingViewAnimatorDelegate> {

	NSArray* _tallies;
	CKAggregateAcknowledgmentChatItem* _chatItem;
	UICollectionView* _collectionView;
	CKGroupAcknowledgmentVotingLayout* _layout;
	CKAcknowledgmentVotingViewAnimator* _animator;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIButton* _collapseButton;
	_CKAcknowledgmentVoteCountView* _currentlyExpandedVoteCountView;
	NSArray* _sortedAnimatorModelItems;

}

@property (nonatomic,retain) NSArray * tallies;                                                            //@synthesize tallies=_tallies - In the implementation block
@property (nonatomic,retain) CKAggregateAcknowledgmentChatItem * chatItem;                                 //@synthesize chatItem=_chatItem - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CKGroupAcknowledgmentVotingLayout * layout;                                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentVotingViewAnimator * animator;                                //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIButton * collapseButton;                                                    //@synthesize collapseButton=_collapseButton - In the implementation block
@property (nonatomic,retain) _CKAcknowledgmentVoteCountView * currentlyExpandedVoteCountView;              //@synthesize currentlyExpandedVoteCountView=_currentlyExpandedVoteCountView - In the implementation block
@property (nonatomic,copy) NSArray * sortedAnimatorModelItems;                                             //@synthesize sortedAnimatorModelItems=_sortedAnimatorModelItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CKGroupAcknowledgmentVotingLayout *)layout;
-(void)setLayout:(CKGroupAcknowledgmentVotingLayout *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setAnimator:(CKAcknowledgmentVotingViewAnimator *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CKAcknowledgmentVotingViewAnimator *)animator;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(CKAggregateAcknowledgmentChatItem *)chatItem;
-(void)setChatItem:(CKAggregateAcknowledgmentChatItem *)arg1 ;
-(void)_setupTallies;
-(NSArray *)tallies;
-(void)setSortedAnimatorModelItems:(NSArray *)arg1 ;
-(void)_handleCollapseButton:(id)arg1 ;
-(NSArray *)sortedAnimatorModelItems;
-(void)setTallies:(NSArray *)arg1 ;
-(UIButton *)collapseButton;
-(_CKAcknowledgmentVoteCountView *)currentlyExpandedVoteCountView;
-(id)_contactNameSupplementaryViewAtIndexPath:(id)arg1 ;
-(id)_ackIconSupplementaryViewAtIndexPath:(id)arg1 ;
-(id)_voteCountSupplementaryViewAtIndexPath:(id)arg1 ;
-(void)_collapseCollectionView;
-(void)_animateToLayout:(unsigned long long)arg1 aroundSection:(long long)arg2 ;
-(void)_layoutCollapseButton;
-(void)_layoutCurrentlyExpandedVoteCountView;
-(void)_expandCollectionViewExpandedViewAroundSection:(long long)arg1 ;
-(void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)arg1 ;
-(id)initWithMessagePartChatItem:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withGestureRecognizer:(id)arg2 ;
-(void)setCollapseButton:(UIButton *)arg1 ;
-(void)setCurrentlyExpandedVoteCountView:(_CKAcknowledgmentVoteCountView *)arg1 ;
@end

