/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class UIColor;

@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout {

	UIColor* _evenColor;
	long long _numberOfColumns;
	UIColor* _oddColor;

}

@property (nonatomic,copy) UIColor * evenRowBackgroundColor;              //@synthesize evenColor=_evenColor - In the implementation block
@property (nonatomic,copy) UIColor * oddRowBackgroundColor;               //@synthesize oddColor=_oddColor - In the implementation block
@property (assign,nonatomic) long long numberOfColumns;                   //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
+(Class)layoutAttributesClass;
-(id)init;
-(long long)numberOfColumns;
-(void)setNumberOfColumns:(long long)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(UIColor *)evenRowBackgroundColor;
-(void)setEvenRowBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)oddRowBackgroundColor;
-(void)setOddRowBackgroundColor:(UIColor *)arg1 ;
@end

