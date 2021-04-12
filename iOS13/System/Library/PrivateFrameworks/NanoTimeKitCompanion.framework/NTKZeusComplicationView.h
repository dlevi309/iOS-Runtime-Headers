/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKComplicationDisplay.h>
#import <libobjc.A.dylib/NTKZeusComplicationDisplay.h>

@protocol NTKComplicationDisplayObserver;
@class NTKZeusColorPalette, CLKDevice, NSString;

@interface NTKZeusComplicationView : UIView <NTKComplicationDisplay, NTKZeusComplicationDisplay> {

	BOOL canUseCurvedText;
	BOOL _highlighted;
	BOOL _legibilityEnabled;
	id<NTKComplicationDisplayObserver> displayObserver;
	unsigned long long _style;
	NTKZeusColorPalette* _palette;
	CLKDevice* _device;

}

@property (nonatomic,readonly) CLKDevice * device;                                                   //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (assign,nonatomic) unsigned long long style;                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NTKZeusColorPalette * palette;                                        //@synthesize palette=_palette - In the implementation block
@property (assign,nonatomic) BOOL legibilityEnabled;                                                 //@synthesize legibilityEnabled=_legibilityEnabled - In the implementation block
+(id)viewForComplicationType:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(CLKDevice *)device;
-(CGRect)contentFrame;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(NTKZeusColorPalette *)palette;
-(void)setLegibilityEnabled:(BOOL)arg1 ;
-(void)_updateLegibility;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(BOOL)legibilityEnabled;
@end

