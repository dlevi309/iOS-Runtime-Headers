/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIImageView, NSLayoutConstraint, NSDictionary;

@interface WDAppCollectionViewCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _priceLabel;
	unsigned long long _displayMode;
	UIImageView* _icon;
	NSLayoutConstraint* _iconTopConstraint;
	NSLayoutConstraint* _priceLabelToBottomConstraint;
	NSDictionary* _storeData;

}

@property (nonatomic,retain) NSDictionary * storeData;              //@synthesize storeData=_storeData - In the implementation block
+(id)reuseIdentifier;
+(double)_topToIconHeightWithDisplayMode:(unsigned long long)arg1 ;
+(double)_priceToBottomHeightWithDisplayMode:(unsigned long long)arg1 ;
+(double)heightWithIconSize:(CGSize)arg1 displayMode:(unsigned long long)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSDictionary *)storeData;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setStoreData:(NSDictionary *)arg1 ;
@end

