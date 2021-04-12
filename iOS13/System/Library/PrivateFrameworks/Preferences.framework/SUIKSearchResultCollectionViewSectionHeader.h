/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCategoryImageView:(UIImageView *)arg1 ;
-(UIImageView *)categoryImageView;
-(void)setCategoryImage:(id)arg1 ;
@end

