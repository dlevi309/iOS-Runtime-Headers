/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTEngagementListCollectionViewLayout.h>

@class NSIndexPath, UICollectionViewUpdateItem, AVTUIEnvironment;

@interface AVTZIndexEngagementListCollectionViewLayout : AVTEngagementListCollectionViewLayout {

	NSIndexPath* _backIndexPath;
	NSIndexPath* _plusButtonIndexPath;
	UICollectionViewUpdateItem* _currentUpdateItem;
	double _minAlphaFactor;
	AVTUIEnvironment* _environment;

}

@property (nonatomic,retain) UICollectionViewUpdateItem * currentUpdateItem;              //@synthesize currentUpdateItem=_currentUpdateItem - In the implementation block
@property (assign,nonatomic) double minAlphaFactor;                                       //@synthesize minAlphaFactor=_minAlphaFactor - In the implementation block
@property (nonatomic,retain) AVTUIEnvironment * environment;                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSIndexPath * backIndexPath;                                 //@synthesize backIndexPath=_backIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * plusButtonIndexPath;                           //@synthesize plusButtonIndexPath=_plusButtonIndexPath - In the implementation block
-(AVTUIEnvironment *)environment;
-(void)setEnvironment:(AVTUIEnvironment *)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initWithEngagementLayout:(id)arg1 minAlphaFactor:(double)arg2 environment:(id)arg3 ;
-(void)setPlusButtonIndexPath:(NSIndexPath *)arg1 ;
-(void)setBackIndexPath:(NSIndexPath *)arg1 ;
-(UIEdgeInsets)engagementInsetsForCollectionViewBounds:(CGSize)arg1 ;
-(NSIndexPath *)backIndexPath;
-(NSIndexPath *)plusButtonIndexPath;
-(double)minAlphaFactor;
-(double)alphaForSunflowerElementWithEngagement:(double)arg1 ;
-(long long)zIndexForElementWithAttributes:(id)arg1 ;
-(double)alphaForElementWithAttributes:(id)arg1 ;
-(void)setCurrentUpdateItem:(UICollectionViewUpdateItem *)arg1 ;
-(UICollectionViewUpdateItem *)currentUpdateItem;
-(void)setMinAlphaFactor:(double)arg1 ;
@end

