/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(void)setCollectionViewController:(OKNavigatorCollectionViewController *)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(OKNavigatorCollectionViewController *)collectionViewController;
-(void)finalizeAnimatedBoundsChange;
-(unsigned long long)transitionStyle;
-(void)setTransitionStyle:(unsigned long long)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)setSourceItemIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)sourceItemIndexPath;
-(id)itemClosestToCenter;
@end

