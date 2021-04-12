/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>
#import <UIKit/UICollectionViewListSeparatorAttributes.h>
#import <UIKit/UICollectionViewListItemAttributes.h>
#import <UIKit/UICollectionViewListSectionHeaderFooterAttributes.h>

@class UIColor, UIVisualEffect;

@interface _UICollectionViewListLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewListSeparatorAttributes, UICollectionViewListItemAttributes, UICollectionViewListSectionHeaderFooterAttributes> {

	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	long long _appearanceStyle;

}

@property (assign,nonatomic) long long appearanceStyle;                     //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (nonatomic,copy) UIColor * separatorColor;                        //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;              //@synthesize separatorEffect=_separatorEffect - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(long long)appearanceStyle;
-(void)setAppearanceStyle:(long long)arg1 ;
@end

