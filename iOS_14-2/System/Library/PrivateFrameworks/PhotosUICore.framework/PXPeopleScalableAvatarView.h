/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSmartScaleView.h>

@protocol PXPerson;
@class UIImageView;

@interface PXPeopleScalableAvatarView : PXSmartScaleView {

	double _imageViewCornerRadius;
	BOOL _useCornerRadius;
	BOOL _useRoundAvatar;
	UIImageView* _imageView;
	id<PXPerson> _person;

}

@property (retain) UIImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) id<PXPerson> person;               //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) BOOL useCornerRadius;              //@synthesize useCornerRadius=_useCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL useRoundAvatar;               //@synthesize useRoundAvatar=_useRoundAvatar - In the implementation block
-(id<PXPerson>)person;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateImage;
-(UIImageView *)imageView;
-(void)setPersonAndWaitForImage:(id)arg1 ;
-(void)setUseCornerRadius:(BOOL)arg1 ;
-(void)setUseRoundAvatar:(BOOL)arg1 ;
-(void)_updateImageViewCornerWithRadius:(double)arg1 ;
-(void)viewScaleDidChange;
-(void)_updateImageAndWait:(BOOL)arg1 ;
-(BOOL)useCornerRadius;
-(BOOL)useRoundAvatar;
-(void)layoutSubviews;
-(void)setPerson:(id<PXPerson>)arg1 ;
@end

