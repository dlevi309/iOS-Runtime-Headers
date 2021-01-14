/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIBezierPath;

@interface MSPieImageView : UIView {

	UIImage* _backgroundImage;
	UIBezierPath* _clipPath;
	UIImage* _foregroundImage;
	double _pieFraction;
	double _pieRadius;

}

@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * foregroundImage;              //@synthesize foregroundImage=_foregroundImage - In the implementation block
@property (assign,nonatomic) double pieFraction;                     //@synthesize pieFraction=_pieFraction - In the implementation block
@property (assign,nonatomic) double pieRadius;                       //@synthesize pieRadius=_pieRadius - In the implementation block
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPieRadius:(double)arg1 ;
-(void)sizeToFit;
-(UIImage *)backgroundImage;
-(void)dealloc;
-(void)setPieFraction:(double)arg1 ;
-(void)setForegroundImage:(UIImage *)arg1 ;
-(void)_reloadClipPath;
-(UIImage *)foregroundImage;
-(double)pieFraction;
-(double)pieRadius;
@end

