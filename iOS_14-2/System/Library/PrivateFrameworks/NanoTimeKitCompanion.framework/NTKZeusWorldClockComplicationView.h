/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKZeusComplicationView.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>
#import <libobjc.A.dylib/NTKWorldClockComplicationDisplay.h>

@class UILabel, CLKTimeFormatter, NSString;

@interface NTKZeusWorldClockComplicationView : NTKZeusComplicationView <CLKTimeFormatterObserver, NTKWorldClockComplicationDisplay> {

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
-(CGRect)contentFrame;
-(void)setTimeZone:(id)arg1 ;
-(void)_updateLabels;
-(void)layoutSubviews;
-(void)setOverrideDate:(id)arg1 ;
-(void)dealloc;
-(id)initWithBackgroundView:(id)arg1 ;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(void)timeFormatterTextDidChange:(id)arg1 ;
-(CGRect)padContentFrame:(CGRect)arg1 ;
-(void)setShortCity:(id)arg1 ;
@end

