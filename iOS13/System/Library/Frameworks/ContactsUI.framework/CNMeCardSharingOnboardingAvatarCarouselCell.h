/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(double)imageInsetPercentage;
-(void)setImageInsetPercentage:(double)arg1 ;
@end

