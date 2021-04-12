/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class CLKDevice, NTKDigitalTimeLabel, NSString;

@interface NTKExtraLargeTimeView : UIView <NTKTimeView> {

	CLKDevice* _device;
	BOOL _statusBarVisible;
	BOOL _frozen;
	NTKDigitalTimeLabel* _timeHourView;
	NTKDigitalTimeLabel* _timeMinuteView;

}

@property (nonatomic,retain) NTKDigitalTimeLabel * timeHourView;                //@synthesize timeHourView=_timeHourView - In the implementation block
@property (nonatomic,retain) NTKDigitalTimeLabel * timeMinuteView;              //@synthesize timeMinuteView=_timeMinuteView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                       //@synthesize frozen=_frozen - In the implementation block
-(BOOL)isFrozen;
-(void)layoutSubviews;
-(void)setTimeOffset:(double)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)setTopColor:(id)arg1 ;
-(void)setBottomColor:(id)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)setStatusBarVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareToZoom;
-(void)cleanupAfterZoom;
-(void)prepareWristRaiseAnimation;
-(void)performWristRaiseAnimation;
-(void)cancelWristRaiseAnimation;
-(NTKDigitalTimeLabel *)timeHourView;
-(void)setTimeHourView:(NTKDigitalTimeLabel *)arg1 ;
-(NTKDigitalTimeLabel *)timeMinuteView;
-(void)setTimeMinuteView:(NTKDigitalTimeLabel *)arg1 ;
@end

