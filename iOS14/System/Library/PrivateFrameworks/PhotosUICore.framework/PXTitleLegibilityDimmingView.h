/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@protocol NSCopying;
@class CALayer, CABackdropLayer, NSString;

@interface PXTitleLegibilityDimmingView : UIView <PXGReusableView> {

	CALayer* _filterLayer;
	CABackdropLayer* _backdropLayer;
	id<NSCopying> _userData;
	NSString* _gradientImageName;
	CGRect _clippingRect;

}

@property (nonatomic,retain) NSString * gradientImageName;              //@synthesize gradientImageName=_gradientImageName - In the implementation block
@property (nonatomic,copy) id<NSCopying> userData;                      //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                       //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)becomeReusable;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NSCopying>)userData;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGRect)clippingRect;
-(void)setUserData:(id<NSCopying>)arg1 ;
-(void)setGradientImageName:(NSString *)arg1 ;
-(NSString *)gradientImageName;
@end

