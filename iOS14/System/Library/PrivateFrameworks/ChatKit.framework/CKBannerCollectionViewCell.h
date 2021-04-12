/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setBannerView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)configureWithEntity:(id)arg1 ;
-(UIImageView *)bannerView;
@end

