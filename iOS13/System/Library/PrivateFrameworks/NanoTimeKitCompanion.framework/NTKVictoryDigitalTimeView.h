/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@protocol NTKVictoryDigitalTimeViewDelegate;
@class CLKDevice, NTKVictoryDigitsView, CLKTimeFormatter, NSString;

@interface NTKVictoryDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView> {

	CLKDevice* _device;
	NTKVictoryDigitsView* _upperDigitsView;
	NTKVictoryDigitsView* _lowerDigitsView;
	NTKVictoryDigitsView* _flipDigitsView;
	BOOL _flipViewIsLower;
	CLKTimeFormatter* _timeFormatter;
	BOOL _frozen;
	BOOL _invertedColors;
	unsigned long long _style;
	unsigned long long _color;
	id<NTKVictoryDigitalTimeViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL invertedColors;                                                //@synthesize invertedColors=_invertedColors - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                           //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long color;                                           //@synthesize color=_color - In the implementation block
@property (assign,nonatomic,__weak) id<NTKVictoryDigitalTimeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                                        //@synthesize frozen=_frozen - In the implementation block
+(id)transitionTimingFunction;
-(id<NTKVictoryDigitalTimeViewDelegate>)delegate;
-(void)setDelegate:(id<NTKVictoryDigitalTimeViewDelegate>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)color;
-(void)setColor:(unsigned long long)arg1 ;
-(BOOL)isFrozen;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTimeOffset:(double)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(long long)defaultAppearance;
-(void)willBeginEditing;
-(void)timeFormatterTextDidChange:(id)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 ;
-(id)initForDevice:(id)arg1 ;
-(void)setInvertedColors:(BOOL)arg1 ;
-(BOOL)invertedColors;
-(void)clearEditingTransitions;
-(void)_setupFlipDigitsView;
-(void)_setFlipViewIsLower:(BOOL)arg1 ;
-(void)_resetDigitAppearanceForStyle:(unsigned long long)arg1 ;
-(long long)_upperDigitAppearanceForStyle:(unsigned long long)arg1 ;
-(long long)_lowerDigitAppearanceForStyle:(unsigned long long)arg1 ;
@end
