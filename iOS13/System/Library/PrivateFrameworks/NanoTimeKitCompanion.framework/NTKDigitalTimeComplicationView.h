/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKComplicationDisplay.h>
#import <libobjc.A.dylib/NTKTemplateComplicationDisplay.h>

@protocol NTKComplicationDisplayObserver;
@class CLKDevice, NTKDigitalTimeLabel, CLKComplicationTemplate, NSDate, UIColor, NSString;

@interface NTKDigitalTimeComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay> {

	BOOL canUseCurvedText;
	id<NTKComplicationDisplayObserver> displayObserver;
	CLKDevice* _device;
	NTKDigitalTimeLabel* _timeLabel;
	CLKComplicationTemplate* _template;
	NSDate* _timeTravelDate;

}

@property (nonatomic,retain) CLKDevice * device;                                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NTKDigitalTimeLabel * timeLabel;                                        //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) CLKComplicationTemplate * template;                                     //@synthesize template=_template - In the implementation block
@property (nonatomic,retain) NSDate * timeTravelDate;                                                //@synthesize timeTravelDate=_timeTravelDate - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)init;
-(CLKDevice *)device;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_labelFont;
-(UIColor *)textColor;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)updateDate;
-(void)setTimeLabel:(NTKDigitalTimeLabel *)arg1 ;
-(NTKDigitalTimeLabel *)timeLabel;
-(void)setTemplate:(CLKComplicationTemplate *)arg1 ;
-(CLKComplicationTemplate *)template;
-(void)setOverrideDate:(id)arg1 ;
-(id)complicationTemplate;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(NSDate *)timeTravelDate;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)timeOffsetChanged;
-(void)setTimeTravelDate:(NSDate *)arg1 ;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
-(unsigned long long)timelineAnimationFadeTypeOverride;
@end

