/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@class UIImageView, NTKColoringLabel, NTKRichComplicationDialView, NSNumber, NSString;

@interface NTKStopwatchRichComplicationCircularView : NTKRichComplicationCircularBaseView <CLKMonochromeComplicationView> {

	UIImageView* _timerImageView;
	NTKColoringLabel* _timeLabel;
	NTKRichComplicationDialView* _frontDial;
	NTKRichComplicationDialView* _backDial;
	NSNumber* _updateToken;
	SCD_Struct_NT7 _layoutConstants;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
-(id)init;
-(void)dealloc;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_editingDidEnd;
-(void)_updateDialProgress;
-(double)_stopwatchCurrentTime;
@end

