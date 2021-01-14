/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXGNamedImageViewConfiguration;

@interface PXGNamedImageView : UIImageView <PXGReusableView> {

	PXGNamedImageViewConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXGNamedImageViewConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                  //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)becomeReusable;
-(PXGNamedImageViewConfiguration *)userData;
-(void)prepareForReuse;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGRect)clippingRect;
-(void)setUserData:(PXGNamedImageViewConfiguration *)arg1 ;
@end

