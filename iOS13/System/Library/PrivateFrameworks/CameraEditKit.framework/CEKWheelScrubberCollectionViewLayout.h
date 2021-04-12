/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol CEKWheelScrubberCollectionViewLayoutDelegate;
@class NSArray;

@interface CEKWheelScrubberCollectionViewLayout : UICollectionViewLayout {

	BOOL _useRoundedCorners;
	id<CEKWheelScrubberCollectionViewLayoutDelegate> _wheelScrubberDelegate;
	long long _layoutDirection;
	long long _layoutOrder;
	NSArray* __cachedLayoutAttributesCells;
	NSArray* __cachedLayoutAttributesDecorations;
	CGSize __cachedContentSize;
	UIEdgeInsets _contentInsets;

}

@property (assign,setter=_setCachedContentSize:,nonatomic) CGSize _cachedContentSize;                                                 //@synthesize _cachedContentSize=__cachedContentSize - In the implementation block
@property (setter=_setCachedLayoutAttributesCells:,nonatomic,retain) NSArray * _cachedLayoutAttributesCells;                          //@synthesize _cachedLayoutAttributesCells=__cachedLayoutAttributesCells - In the implementation block
@property (setter=_setCachedLayoutAttributesDecorations:,nonatomic,retain) NSArray * _cachedLayoutAttributesDecorations;              //@synthesize _cachedLayoutAttributesDecorations=__cachedLayoutAttributesDecorations - In the implementation block
@property (assign,nonatomic,__weak) id<CEKWheelScrubberCollectionViewLayoutDelegate> wheelScrubberDelegate;                           //@synthesize wheelScrubberDelegate=_wheelScrubberDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                                              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) BOOL useRoundedCorners;                                                                                  //@synthesize useRoundedCorners=_useRoundedCorners - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                                                               //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic) long long layoutOrder;                                                                                   //@synthesize layoutOrder=_layoutOrder - In the implementation block
-(id)init;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGSize)_cachedContentSize;
-(void)setWheelScrubberDelegate:(id<CEKWheelScrubberCollectionViewLayoutDelegate>)arg1 ;
-(void)setUseRoundedCorners:(BOOL)arg1 ;
-(long long)layoutOrder;
-(void)setLayoutOrder:(long long)arg1 ;
-(BOOL)useRoundedCorners;
-(double)_circularlyWrapped:(double)arg1 forCenter:(double)arg2 radius:(double)arg3 scale:(double)arg4 ;
-(void)_setCachedContentSize:(CGSize)arg1 ;
-(void)_setCachedLayoutAttributesCells:(id)arg1 ;
-(void)_setCachedLayoutAttributesDecorations:(id)arg1 ;
-(NSArray *)_cachedLayoutAttributesCells;
-(NSArray *)_cachedLayoutAttributesDecorations;
-(id<CEKWheelScrubberCollectionViewLayoutDelegate>)wheelScrubberDelegate;
@end

