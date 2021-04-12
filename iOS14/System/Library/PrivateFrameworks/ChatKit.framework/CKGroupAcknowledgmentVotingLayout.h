/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray;

@interface CKGroupAcknowledgmentVotingLayout : UICollectionViewLayout {

	BOOL _isAnimatedLayoutChange;
	unsigned long long _layoutMode;
	long long _expandedSection;
	NSArray* _ballotItems;
	NSArray* _fromBallotItems;
	CGPoint _previousCollapsedContentOffset;
	CGSize _fromContentSize;
	CGPoint _fromContentOffset;

}

@property (nonatomic,copy) NSArray * ballotItems;                                 //@synthesize ballotItems=_ballotItems - In the implementation block
@property (assign,nonatomic) long long expandedSection;                           //@synthesize expandedSection=_expandedSection - In the implementation block
@property (assign,nonatomic) BOOL isAnimatedLayoutChange;                         //@synthesize isAnimatedLayoutChange=_isAnimatedLayoutChange - In the implementation block
@property (nonatomic,retain) NSArray * fromBallotItems;                           //@synthesize fromBallotItems=_fromBallotItems - In the implementation block
@property (assign,nonatomic) CGSize fromContentSize;                              //@synthesize fromContentSize=_fromContentSize - In the implementation block
@property (assign,nonatomic) CGPoint fromContentOffset;                           //@synthesize fromContentOffset=_fromContentOffset - In the implementation block
@property (assign,nonatomic) unsigned long long layoutMode;                       //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) CGPoint previousCollapsedContentOffset;              //@synthesize previousCollapsedContentOffset=_previousCollapsedContentOffset - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(long long)expandedSection;
-(void)preapareForLayoutAnimationAroundSection:(long long)arg1 ;
-(void)setPreviousCollapsedContentOffset:(CGPoint)arg1 ;
-(void)_setupAnimatedCollapsedLayout;
-(void)cleanupAnimationCache;
-(CGPoint)previousCollapsedContentOffset;
-(unsigned long long)layoutMode;
-(long long)_numberOfBallots;
-(NSArray *)ballotItems;
-(void)setIsAnimatedLayoutChange:(BOOL)arg1 ;
-(void)setExpandedSection:(long long)arg1 ;
-(void)setFromContentSize:(CGSize)arg1 ;
-(void)setFromContentOffset:(CGPoint)arg1 ;
-(void)setFromBallotItems:(NSArray *)arg1 ;
-(BOOL)isAnimatedLayoutChange;
-(CGSize)fromContentSize;
-(void)setBallotItems:(NSArray *)arg1 ;
-(BOOL)_shouldFillInFromCenter;
-(double)_totalBallotContainersWidth;
-(NSArray *)fromBallotItems;
-(CGPoint)fromContentOffset;
-(void)_initializeBallotItems;
-(void)_setupCollapsedLayout;
-(void)_setupExpandedLayout;
@end

