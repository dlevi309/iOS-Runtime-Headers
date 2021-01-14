/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@protocol NSCopying;
@class UIView;

@interface _PXGSingleViewLayoutContainerView : UIView <PXGReusableView> {

	id<NSCopying> userData;
	UIView* _contentView;
	CGRect clippingRect;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) id<NSCopying> userData; 
@property (assign,nonatomic) CGRect clippingRect; 
-(void)becomeReusable;
-(id<NSCopying>)userData;
-(void)prepareForReuse;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(CGRect)clippingRect;
-(void)setUserData:(id<NSCopying>)arg1 ;
-(UIView *)contentView;
@end

