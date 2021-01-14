/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIImageView;

@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView {

	UIImageView* _categoryImageView;

}

@property (nonatomic,retain) UIImageView * categoryImageView;              //@synthesize categoryImageView=_categoryImageView - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setCategoryImageView:(UIImageView *)arg1 ;
-(UIImageView *)categoryImageView;
-(void)setCategoryImage:(id)arg1 ;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
@end

