/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PUPhotoViewContentHelper;

@interface PUPhotoView : UIView {

	PUPhotoViewContentHelper* _contentHelper;

}

@property (nonatomic,readonly) PUPhotoViewContentHelper * contentHelper;              //@synthesize contentHelper=_contentHelper - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PUPhotoViewContentHelper *)contentHelper;
@end

