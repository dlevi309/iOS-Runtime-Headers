/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface PXLoadingFailureBadgeView : UIImageView {

	SCD_Struct_PX59 _needsUpdateFlags;
	long long __sizeClass;

}

@property (assign,setter=_setSizeClass:,nonatomic) long long _sizeClass;              //@synthesize _sizeClass=__sizeClass - In the implementation block
+(CGSize)_imageSizeForSizeClass:(long long)arg1 ;
+(id)_imageForSizeClass:(long long)arg1 ;
-(void)_invalidateImage;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)_sizeClass;
-(void)_invalidateSizeClass;
-(void)_updateSizeClassIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateImageIfNeeded;
-(void)_setSizeClass:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_needsUpdate;
-(id)initWithCoder:(id)arg1 ;
-(void)sizeToFit;
-(void)_setNeedsUpdate;
@end

