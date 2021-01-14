/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIView, UIImage;

@interface SBSwitcherSnapshotImageView : UIView {

	UIImageView* _imageView;
	UIView* _scalingView;
	double _cornerRadius;
	unsigned long long _maskedCorners;
	BOOL _usesNonuniformScaling;
	BOOL _hasOpaqueContents;
	long long _orientationForClassicLayout;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) unsigned long long maskedCorners; 
@property (assign,nonatomic) BOOL usesNonuniformScaling;                         //@synthesize usesNonuniformScaling=_usesNonuniformScaling - In the implementation block
@property (assign,nonatomic) BOOL hasOpaqueContents;                             //@synthesize hasOpaqueContents=_hasOpaqueContents - In the implementation block
@property (assign,nonatomic) long long orientationForClassicLayout;              //@synthesize orientationForClassicLayout=_orientationForClassicLayout - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setHasOpaqueContents:(BOOL)arg1 ;
-(void)_updateCornerRadius;
-(long long)orientationForClassicLayout;
-(void)setOrientationForClassicLayout:(long long)arg1 ;
-(void)setUsesNonuniformScaling:(BOOL)arg1 ;
-(UIImage *)image;
-(unsigned long long)maskedCorners;
-(double)cornerRadius;
-(double)_transformHorizontalScale;
-(void)layoutSubviews;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(CGAffineTransform)scalingTransform;
-(double)_transformScale;
-(BOOL)_isUsingExternalClassicLayout;
-(double)_transformVerticalScale;
-(BOOL)hasOpaqueContents;
-(void)setCornerRadius:(double)arg1 ;
-(BOOL)usesNonuniformScaling;
@end

