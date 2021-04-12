/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PKSpendingSummaryLayout : UICollectionViewLayout {

	NSMutableDictionary* _attributesPerIndexPath;
	NSMutableDictionary* _headersPerIndexPath;
	NSMutableDictionary* _footersPerIndexPath;
	CGSize _currentSize;
	BOOL _isLowEndDevice;
	BOOL _visible;
	double _transitionAlpha;
	double _lastDrawnAlpha;

}

@property (assign,nonatomic) BOOL isLowEndDevice;                        //@synthesize isLowEndDevice=_isLowEndDevice - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) double transitionAlpha;                     //@synthesize transitionAlpha=_transitionAlpha - In the implementation block
@property (assign,nonatomic) double lastDrawnAlpha;                      //@synthesize lastDrawnAlpha=_lastDrawnAlpha - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)init;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(BOOL)isLowEndDevice;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(double)alphaForIndexPath:(id)arg1 visible:(BOOL)arg2 transition:(double)arg3 ;
-(void)setTransitionAlpha:(double)arg1 ;
-(void)setIsLowEndDevice:(BOOL)arg1 ;
-(double)transitionAlpha;
-(double)lastDrawnAlpha;
-(void)setLastDrawnAlpha:(double)arg1 ;
@end

