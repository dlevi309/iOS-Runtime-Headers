/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OBAnimationAppearanceChangeDelegate;
@class CALayer, CAPackage;

@interface OBAnimationView : UIView {

	BOOL _flipForRTL;
	double _scale;
	id<OBAnimationAppearanceChangeDelegate> _appearanceChangeDelegate;
	CALayer* _packageLayer;
	CAPackage* _package;
	CGRect _preferredFrame;

}

@property (nonatomic,retain) CALayer * packageLayer;                                                               //@synthesize packageLayer=_packageLayer - In the implementation block
@property (nonatomic,retain) CAPackage * package;                                                                  //@synthesize package=_package - In the implementation block
@property (assign,nonatomic) CGRect preferredFrame;                                                                //@synthesize preferredFrame=_preferredFrame - In the implementation block
@property (assign) double scale;                                                                                   //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic,__weak) id<OBAnimationAppearanceChangeDelegate> appearanceChangeDelegate;              //@synthesize appearanceChangeDelegate=_appearanceChangeDelegate - In the implementation block
@property (assign) BOOL flipForRTL;                                                                                //@synthesize flipForRTL=_flipForRTL - In the implementation block
-(void)setPackage:(CAPackage *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)flipForRTL;
-(double)defaultScale;
-(CGRect)preferredFrame;
-(id<OBAnimationAppearanceChangeDelegate>)appearanceChangeDelegate;
-(void)setFlipForRTL:(BOOL)arg1 ;
-(void)setPreferredFrame:(CGRect)arg1 ;
-(CALayer *)packageLayer;
-(void)setPackageLayer:(CALayer *)arg1 ;
-(double)scale;
-(void)_setPackage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setScale:(double)arg1 ;
-(CAPackage *)package;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAppearanceChangeDelegate:(id<OBAnimationAppearanceChangeDelegate>)arg1 ;
-(void)setPackage:(id)arg1 sizingTransformScale:(double)arg2 ;
@end

