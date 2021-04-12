/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewTransitionLayout.h>

@class PUCollectionViewLayoutCache;

@interface PUStackedAlbumTransitionLayout : UICollectionViewTransitionLayout {

	CGPoint _expandedStackDelta;
	BOOL _didPrepareLayout;
	PUCollectionViewLayoutCache* _currentLayoutCache;
	PUCollectionViewLayoutCache* _nextLayoutCache;
	BOOL _isExpanding;
	CGPoint _expandedStackFinalDelta;
	CGPoint _interactionOffset;
	CGPoint _initialCollapsedStackCenter;
	CGPoint _finalCollapsedStackCenter;
	CGPoint _currentCollapsedStackCenter;

}

@property (nonatomic,readonly) BOOL isExpanding;                               //@synthesize isExpanding=_isExpanding - In the implementation block
@property (nonatomic,readonly) CGPoint expandedStackFinalDelta;                //@synthesize expandedStackFinalDelta=_expandedStackFinalDelta - In the implementation block
@property (assign,nonatomic) CGPoint interactionOffset;                        //@synthesize interactionOffset=_interactionOffset - In the implementation block
@property (assign,nonatomic) CGPoint initialCollapsedStackCenter;              //@synthesize initialCollapsedStackCenter=_initialCollapsedStackCenter - In the implementation block
@property (assign,nonatomic) CGPoint finalCollapsedStackCenter;                //@synthesize finalCollapsedStackCenter=_finalCollapsedStackCenter - In the implementation block
@property (assign,nonatomic) CGPoint currentCollapsedStackCenter;              //@synthesize currentCollapsedStackCenter=_currentCollapsedStackCenter - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(CGPoint)expandedStackFinalDelta;
-(void)setInteractionOffset:(CGPoint)arg1 ;
-(void)setCurrentCollapsedStackCenter:(CGPoint)arg1 ;
-(void)setFinalCollapsedStackCenter:(CGPoint)arg1 ;
-(void)setInitialCollapsedStackCenter:(CGPoint)arg1 ;
-(id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2 isExpanding:(BOOL)arg3 ;
-(CGPoint)_newCenterForLayoutAttributes:(id)arg1 transitionProgress:(double)arg2 ;
-(CGPoint)_centerOfLayoutAttributes:(id)arg1 ;
-(CGPoint)interactionOffset;
-(CGPoint)initialCollapsedStackCenter;
-(CGPoint)finalCollapsedStackCenter;
-(CGPoint)currentCollapsedStackCenter;
-(BOOL)isExpanding;
@end

