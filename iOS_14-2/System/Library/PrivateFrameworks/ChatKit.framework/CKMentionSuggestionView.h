/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKMentionSuggestionViewDelegate, CKMentionSuggestionViewDataSource;
@class UICollectionView, UICollectionViewDiffableDataSource, UICollectionViewCompositionalLayout, NSString;

@interface CKMentionSuggestionView : UIView <UICollectionViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _hasCompletedInitialLayoutPass;
	id<CKMentionSuggestionViewDelegate> _delegate;
	id<CKMentionSuggestionViewDataSource> _dataSource;
	UICollectionView* _collectionView;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	UICollectionViewCompositionalLayout* _suggestionViewLayout;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                 //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewCompositionalLayout * suggestionViewLayout;              //@synthesize suggestionViewLayout=_suggestionViewLayout - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedInitialLayoutPass;                                      //@synthesize hasCompletedInitialLayoutPass=_hasCompletedInitialLayoutPass - In the implementation block
@property (assign,nonatomic,__weak) id<CKMentionSuggestionViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKMentionSuggestionViewDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id<CKMentionSuggestionViewDelegate>)delegate;
-(UICollectionView *)collectionView;
-(id<CKMentionSuggestionViewDataSource>)dataSource;
-(void)setDelegate:(id<CKMentionSuggestionViewDelegate>)arg1 ;
-(BOOL)hasCompletedInitialLayoutPass;
-(void)setHasCompletedInitialLayoutPass:(BOOL)arg1 ;
-(id)suggestionsLayoutSectionForEnvironment:(id)arg1 ;
-(id)suggestionsLayout;
-(UICollectionViewCompositionalLayout *)suggestionViewLayout;
-(void)setSuggestionViewLayout:(UICollectionViewCompositionalLayout *)arg1 ;
-(void)setDataSource:(id<CKMentionSuggestionViewDataSource>)arg1 ;
-(void)reloadData;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)suggestionsDidChange;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)dealloc;
@end

