/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationBezelView.h>
#import <libobjc.A.dylib/NTKRichComplicationCircularBezelView.h>

@class NTKRichComplicationView, NTKCurvedColoringLabel;

@interface NTKRichComplicationBezelBaseCircularView : NTKRichComplicationBezelView <NTKRichComplicationCircularBezelView> {

	NTKRichComplicationView* _circularView;
	double _circularViewRotationInDegree;
	NTKCurvedColoringLabel* _bezelTextLabel;
	double _bezelTextLabelRotationInDegree;
	double _newDataAnimationCircularScale;
	double _newDataAnimationBezelLabelScale;
	BOOL _allowUpdatingBezelTextProperties;
	BOOL _allowNofityingDelegateWithBezelTextUpdate;
	long long _fromTheme;
	long long _toTheme;
	double _themeFraction;
	BOOL _inMonochromeMode;
	double _bezelLabelCircularRadius;

}

@property (nonatomic,readonly) NTKRichComplicationView * circularView;              //@synthesize circularView=_circularView - In the implementation block
@property (assign,nonatomic) double bezelLabelCircularRadius;                       //@synthesize bezelLabelCircularRadius=_bezelLabelCircularRadius - In the implementation block
+(void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 bezelTextUpdateHandler:(/*^block*/id)arg7 ;
-(id)init;
-(id)description;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_editingDidEnd;
-(Class)_circularViewClassFromFromTemplate:(id)arg1 ;
-(id)_circularTemplateFromTemplate:(id)arg1 ;
-(id)_bezelTextProviderFromTemplate:(id)arg1 ;
-(void)_applyPausedUpdate;
-(void)setBezelTextColor:(id)arg1 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(void)_createBezelLabel;
-(void)_layoutCircularView;
-(void)_layoutBezelLabel;
-(void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 ;
-(CGPoint)circularViewCenter;
-(void)_updateNewDataAnimationFinalAlpha:(double)arg1 finalBezelLabelScale:(double)arg2 finalCircularViewScale:(double)arg3 animationApplierBlock:(/*^block*/id)arg4 animationFraction:(float)arg5 ;
-(double)bezelLabelCircularRadius;
-(void)setBezelLabelCircularRadius:(double)arg1 ;
-(NTKRichComplicationView *)circularView;
@end

