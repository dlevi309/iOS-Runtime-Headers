/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PKDiscoveryLayout : UICollectionViewLayout {

	NSMutableDictionary* _attributesPerIndexPath;
	NSMutableDictionary* _headersPerIndexPath;
	CGSize _currentSize;
	double _interimSpacing;
	double _lineSpacing;

}

@property (assign,nonatomic) double interimSpacing;              //@synthesize interimSpacing=_interimSpacing - In the implementation block
@property (assign,nonatomic) double lineSpacing;                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
-(id)init;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(double)interimSpacing;
-(void)setInterimSpacing:(double)arg1 ;
@end

