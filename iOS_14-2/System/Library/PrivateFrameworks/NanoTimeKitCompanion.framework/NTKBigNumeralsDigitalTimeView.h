/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@protocol NTKBigNumeralsDigitalTimeViewDelegate;
@class CLKDevice, NTKBigNumeralsTimeComponentLabel, NSDate, CLKClockTimerToken, CAGradientLayer, CALayer, UIView, NSString;

@interface NTKBigNumeralsDigitalTimeView : UIView <NTKTimeView> {

	CLKDevice* _device;
	NTKBigNumeralsTimeComponentLabel* _topLabel;
	NTKBigNumeralsTimeComponentLabel* _bottomLabel;
	double _statusBarTransitionFraction;
	NSDate* _overrideDate;
	CLKClockTimerToken* _timerToken;
	CAGradientLayer* _gradientLayer;
	CALayer* _topLabelColorLayer;
	CALayer* _bottomLabelColorLayer;
	UIView* _timeLabelsContainerView;
	BOOL _frozen;
	BOOL _showingStatus;
	unsigned long long _style;
	unsigned long long _typeface;
	unsigned long long _color;
	id<NTKBigNumeralsDigitalTimeViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL showingStatus;                                                     //@synthesize showingStatus=_showingStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long typeface;                                          //@synthesize typeface=_typeface - In the implementation block
@property (nonatomic,readonly) unsigned long long color;                                             //@synthesize color=_color - In the implementation block
@property (assign,nonatomic,__weak) id<NTKBigNumeralsDigitalTimeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                                            //@synthesize frozen=_frozen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrozen:(BOOL)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id<NTKBigNumeralsDigitalTimeViewDelegate>)delegate;
-(unsigned long long)color;
-(void)setTimeOffset:(double)arg1 ;
-(void)_updateLabels;
-(void)applyStyle:(unsigned long long)arg1 ;
-(void)setDelegate:(id<NTKBigNumeralsDigitalTimeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)style;
-(BOOL)isFrozen;
-(void)dealloc;
-(void)setShowingStatus:(BOOL)arg1 ;
-(unsigned long long)typeface;
-(void)applyTypeface:(unsigned long long)arg1 ;
-(void)applyColor:(unsigned long long)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3 ;
-(void)cleanupTransition;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)showingStatus;
@end

