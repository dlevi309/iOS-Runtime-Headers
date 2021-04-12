/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OKNavigatorCollectionViewController, NSIndexPath, UIPanGestureRecognizer, NSString;

@interface OKNavigatorCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate> {

	OKNavigatorCollectionViewController* _collectionViewController;
	unsigned long long _transitionStyle;
	NSIndexPath* _sourceItemIndexPath;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGRect _oldBounds;

}

@property (assign,nonatomic) OKNavigatorCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic) unsigned long long transitionStyle;                                          //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceItemIndexPath;                                           //@synthesize sourceItemIndexPath=_sourceItemIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setTransitionStyle:(unsigned long long)arg1 ;
-(unsigned long long)transitionStyle;
-(OKNavigatorCollectionViewController *)collectionViewController;
-(void)handlePanGesture:(id)arg1 ;
-(void)setCollectionViewController:(OKNavigatorCollectionViewController *)arg1 ;
-(void)setSourceItemIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)sourceItemIndexPath;
-(id)itemClosestToCenter;
@end

