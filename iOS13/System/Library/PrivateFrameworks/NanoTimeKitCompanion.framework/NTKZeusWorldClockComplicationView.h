/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKZeusFramedComplicationView.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>
#import <libobjc.A.dylib/NTKWorldClockComplicationDisplay.h>

@class UILabel, CLKTimeFormatter, NSString;

@interface NTKZeusWorldClockComplicationView : NTKZeusFramedComplicationView <CLKTimeFormatterObserver, NTKWorldClockComplicationDisplay> {

	UILabel* _timeLabel;
	UILabel* _cityLabel;
	CLKTimeFormatter* _formatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)init;
-(void)dealloc;
-(void)setTimeZone:(id)arg1 ;
-(CGRect)contentFrame;
-(void)layoutSubviews;
-(void)_updateLabels;
-(void)setOverrideDate:(id)arg1 ;
-(void)timeFormatterTextDidChange:(id)arg1 ;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(void)setShortCity:(id)arg1 ;
@end

