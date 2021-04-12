/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <UIKitCore/UIVisualEffectView.h>

@class UIColor;

@interface SPUIHeaderBlurView : UIVisualEffectView {

	BOOL _useInPlaceFilteredBlur;
	UIColor* _baseTintColor;

}

@property (retain) UIColor * baseTintColor;                            //@synthesize baseTintColor=_baseTintColor - In the implementation block
@property (assign,nonatomic) BOOL useInPlaceFilteredBlur;              //@synthesize useInPlaceFilteredBlur=_useInPlaceFilteredBlur - In the implementation block
+(double)backgroundViewBlurAlphaForProgress:(double)arg1 isDarkBackground:(BOOL)arg2 ;
-(id)init;
-(void)setTintColor:(id)arg1 ;
-(void)updateEffect;
-(void)setUseInPlaceFilteredBlur:(BOOL)arg1 ;
-(void)setBaseTintColor:(UIColor *)arg1 ;
-(UIColor *)baseTintColor;
-(BOOL)useInPlaceFilteredBlur;
@end

