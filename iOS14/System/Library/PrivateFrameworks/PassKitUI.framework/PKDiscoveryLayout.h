/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)init;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(double)interimSpacing;
-(void)setInterimSpacing:(double)arg1 ;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
@end

