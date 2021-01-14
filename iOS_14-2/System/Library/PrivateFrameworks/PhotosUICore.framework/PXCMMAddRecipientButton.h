/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIButton.h>

@interface PXCMMAddRecipientButton : UIButton {

	double _inset;
	CGSize _imageSizeToAlignWith;

}

@property (assign,nonatomic) CGSize imageSizeToAlignWith;              //@synthesize imageSizeToAlignWith=_imageSizeToAlignWith - In the implementation block
@property (assign,nonatomic) double inset;                             //@synthesize inset=_inset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)inset;
-(void)layoutSubviews;
-(void)setInset:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commmonPXCMMAddRecipientButtonInitialization;
-(CGSize)imageSizeToAlignWith;
-(void)setImageSizeToAlignWith:(CGSize)arg1 ;
@end

