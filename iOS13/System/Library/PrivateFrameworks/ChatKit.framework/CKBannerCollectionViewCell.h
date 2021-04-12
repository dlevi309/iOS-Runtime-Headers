/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface CKBannerCollectionViewCell : UICollectionViewCell {

	UIImageView* _bannerView;

}

@property (nonatomic,retain) UIImageView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
+(id)reuseIdentifier;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBannerImage:(id)arg1 ;
-(UIImageView *)bannerView;
-(void)setBannerView:(UIImageView *)arg1 ;
-(void)configureWithEntity:(id)arg1 ;
@end

