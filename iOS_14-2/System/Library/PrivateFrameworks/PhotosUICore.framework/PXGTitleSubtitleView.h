/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTitleSubtitleUILabel.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXGTitleSubtitleViewConfiguration;

@interface PXGTitleSubtitleView : PXTitleSubtitleUILabel <PXGReusableView> {

	PXGTitleSubtitleViewConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXGTitleSubtitleViewConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                     //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)becomeReusable;
-(PXGTitleSubtitleViewConfiguration *)userData;
-(void)prepareForReuse;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGRect)clippingRect;
-(void)setUserData:(PXGTitleSubtitleViewConfiguration *)arg1 ;
@end

