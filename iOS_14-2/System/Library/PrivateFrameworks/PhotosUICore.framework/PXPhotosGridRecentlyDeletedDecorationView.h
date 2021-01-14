/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGDecorationView.h>

@class PXAssetReference, PXTextBannerView;

@interface PXPhotosGridRecentlyDeletedDecorationView : UIView <PXGDecorationView> {

	unsigned long long _decorationOptions;
	PXAssetReference* _userData;
	PXTextBannerView* _textBannerView;
	CGRect _clippingRect;

}

@property (nonatomic,retain) PXTextBannerView * textBannerView;                 //@synthesize textBannerView=_textBannerView - In the implementation block
@property (nonatomic,copy) PXAssetReference * userData;                         //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) unsigned long long decorationOptions;              //@synthesize decorationOptions=_decorationOptions - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                               //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)becomeReusable;
-(PXTextBannerView *)textBannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(PXAssetReference *)userData;
-(void)setDecorationOptions:(unsigned long long)arg1 ;
-(void)updateTextBanner;
-(void)setTextBannerView:(PXTextBannerView *)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setClippingRect:(CGRect)arg1 ;
-(unsigned long long)decorationOptions;
-(CGRect)clippingRect;
-(void)setUserData:(PXAssetReference *)arg1 ;
@end

