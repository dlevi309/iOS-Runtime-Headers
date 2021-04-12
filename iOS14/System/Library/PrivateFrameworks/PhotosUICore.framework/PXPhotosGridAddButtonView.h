/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class UIButton, PXUpdater, PXPhotosGridAddButtonViewUserData, UIImage;

@interface PXPhotosGridAddButtonView : UIView <PXGReusableView> {

	UIButton* _button;
	PXUpdater* _updater;
	PXPhotosGridAddButtonViewUserData* _userData;
	UIImage* _buttonImage;
	CGRect _clippingRect;

}

@property (nonatomic,readonly) id actionHandler; 
@property (nonatomic,retain) UIImage * buttonImage;                                   //@synthesize buttonImage=_buttonImage - In the implementation block
@property (nonatomic,copy) PXPhotosGridAddButtonViewUserData * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                     //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)becomeReusable;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_handleButton:(id)arg1 ;
-(void)_updateButtonImage;
-(void)setButtonImage:(UIImage *)arg1 ;
-(id)actionHandler;
-(PXPhotosGridAddButtonViewUserData *)userData;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setClippingRect:(CGRect)arg1 ;
-(UIImage *)buttonImage;
-(CGRect)clippingRect;
-(void)setUserData:(PXPhotosGridAddButtonViewUserData *)arg1 ;
-(void)_setNeedsUpdate;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

