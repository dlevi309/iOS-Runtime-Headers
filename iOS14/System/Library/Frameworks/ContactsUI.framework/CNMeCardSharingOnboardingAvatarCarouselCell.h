/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSUUID, UIImageView, UILabel, UIImage, NSString;

@interface CNMeCardSharingOnboardingAvatarCarouselCell : UICollectionViewCell {

	NSUUID* _displaySessionUUID;
	double _imageInsetPercentage;
	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,retain) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;              //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) double imageInsetPercentage;              //@synthesize imageInsetPercentage=_imageInsetPercentage - In the implementation block
+(id)cellIdentifier;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setTitle:(NSString *)arg1 ;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)setImageInsetPercentage:(double)arg1 ;
-(double)imageInsetPercentage;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)title;
@end

