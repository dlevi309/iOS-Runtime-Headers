/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <libobjc.A.dylib/HUControllableCollectionViewLayout.h>
#import <libobjc.A.dylib/HUProvidesMosaicFrames.h>

@protocol HUMosaicLayoutDelegate;
@class NSMutableArray, NSString;

@interface HUMosaicLayout : UICollectionViewLayout <HUControllableCollectionViewLayout, HUProvidesMosaicFrames> {

	BOOL _layoutInvalidatedForBoundsChange;
	id<HUMosaicLayoutDelegate> _delegate;
	NSMutableArray* _attributeCache;
	CGRect _contentBounds;

}

@property (nonatomic,retain) NSMutableArray * attributeCache;                    //@synthesize attributeCache=_attributeCache - In the implementation block
@property (assign,nonatomic) BOOL layoutInvalidatedForBoundsChange;              //@synthesize layoutInvalidatedForBoundsChange=_layoutInvalidatedForBoundsChange - In the implementation block
@property (assign,nonatomic) CGRect contentBounds;                               //@synthesize contentBounds=_contentBounds - In the implementation block
@property (assign,nonatomic) id<HUMosaicLayoutDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)contentBounds;
-(void)invalidateLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id<HUMosaicLayoutDelegate>)delegate;
-(void)setContentBounds:(CGRect)arg1 ;
-(void)setDelegate:(id<HUMosaicLayoutDelegate>)arg1 ;
-(NSMutableArray *)attributeCache;
-(void)setLayoutInvalidatedForBoundsChange:(BOOL)arg1 ;
-(BOOL)layoutInvalidatedForBoundsChange;
-(void)applyOverrideAttributes:(id)arg1 toItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)clearOverrideAttributesForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)clearAllOverrideAttributesForItems:(id)arg1 ;
-(id)currentMosaicFrames;
-(void)setAttributeCache:(NSMutableArray *)arg1 ;
@end

