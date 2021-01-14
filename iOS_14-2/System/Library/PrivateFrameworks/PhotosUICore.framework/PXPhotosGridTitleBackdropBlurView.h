/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class UIVisualEffectView, NSString;

@interface PXPhotosGridTitleBackdropBlurView : UIView <PXGReusableView> {

	UIVisualEffectView* _visualEffectView;
	NSString* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) NSString * userData;                //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;              //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)becomeReusable;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)userData;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGRect)clippingRect;
-(void)setUserData:(NSString *)arg1 ;
@end

