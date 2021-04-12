/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionFocusingLayout.h>

@class NSDictionary;

@interface GKCollectionColumnLayout : GKCollectionFocusingLayout {

	NSDictionary* _itemAttributes;
	NSDictionary* _headerAttributes;
	NSDictionary* _decorationAttributes;
	NSDictionary* _footerAttributes;

}

@property (nonatomic,retain) NSDictionary * itemAttributes;                    //@synthesize itemAttributes=_itemAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * headerAttributes;                  //@synthesize headerAttributes=_headerAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * decorationAttributes;              //@synthesize decorationAttributes=_decorationAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * footerAttributes;                  //@synthesize footerAttributes=_footerAttributes - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)setDecorationAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)decorationAttributes;
-(NSDictionary *)footerAttributes;
-(void)setHeaderAttributes:(NSDictionary *)arg1 ;
-(void)setFooterAttributes:(NSDictionary *)arg1 ;
-(void)setItemAttributes:(NSDictionary *)arg1 ;
-(void)applyDefaults;
-(NSDictionary *)itemAttributes;
-(NSDictionary *)headerAttributes;
@end

