/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(double)cornerRadius;
-(unsigned long long)maskedCorners;
-(void)_updateCornerRadius;
-(CGAffineTransform)scalingTransform;
-(BOOL)usesNonuniformScaling;
-(double)_transformHorizontalScale;
-(double)_transformVerticalScale;
-(double)_transformScale;
-(BOOL)_isUsingExternalClassicLayout;
-(void)setHasOpaqueContents:(BOOL)arg1 ;
-(void)setOrientationForClassicLayout:(long long)arg1 ;
-(void)setUsesNonuniformScaling:(BOOL)arg1 ;
-(BOOL)hasOpaqueContents;
-(long long)orientationForClassicLayout;
@end

