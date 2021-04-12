/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@class UIImageView, NTKColoringLabel, NTKRichComplicationDialView, NSNumber, NSString;

@interface NTKStopwatchRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView <CLKMonochromeComplicationView> {

	UIImageView* _timerImageView;
	NTKColoringLabel* _timeLabel;
	NTKRichComplicationDialView* _frontDial;
	NTKRichComplicationDialView* _backDial;
	NSNumber* _updateToken;
	SCD_Struct_NT22 _layoutConstants;

}

@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)dealloc;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(void)_updateDialProgress;
-(void)makeBackgroundTransparent;
-(double)_stopwatchCurrentTime;
@end

