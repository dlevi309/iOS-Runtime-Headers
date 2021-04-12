/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTintColor:(id)arg1 ;
-(id)init;
-(BOOL)useInPlaceFilteredBlur;
-(void)updateEffect;
-(void)setBaseTintColor:(UIColor *)arg1 ;
-(void)setUseInPlaceFilteredBlur:(BOOL)arg1 ;
-(UIColor *)baseTintColor;
@end

