/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NTKZeudleColorPalette;
@interface NTKZeudleComplicationBackgroundView : UIView {

	unsigned long long _style;
	id<NTKZeudleColorPalette> _palette;
	CGRect _contentFrame;

}

@property (assign,nonatomic) CGRect contentFrame;                            //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) id<NTKZeudleColorPalette> palette;              //@synthesize palette=_palette - In the implementation block
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(id<NTKZeudleColorPalette>)palette;
-(void)setPalette:(id<NTKZeudleColorPalette>)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(void)applyStyleChange;
@end

