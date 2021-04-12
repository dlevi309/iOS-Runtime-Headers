/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(void)setAppearanceStyle:(long long)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(long long)appearanceStyle;
-(unsigned long long)hash;
-(UIColor *)separatorColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

