/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKComplicationDisplay.h>
#import <libobjc.A.dylib/NTKTemplateComplicationDisplay.h>

@protocol NTKComplicationDisplayObserver;
@class CLKDevice, NTKDigitalTimeLabel, CLKComplicationTemplate, NSDate, UIFont, UIColor, NSString;

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
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)setTimeLabel:(NTKDigitalTimeLabel *)arg1 ;
-(NTKDigitalTimeLabel *)timeLabel;
-(UIColor *)textColor;
-(id)init;
-(void)setFont:(UIFont *)arg1 ;
-(CLKComplicationTemplate *)template;
-(CLKDevice *)device;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)updateDate;
-(void)layoutSubviews;
-(void)setTemplate:(CLKComplicationTemplate *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setOverrideDate:(id)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(id)_labelFont;
-(UIFont *)font;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(id)complicationTemplate;
-(NSDate *)timeTravelDate;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)timeOffsetChanged;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(void)setTimeTravelDate:(NSDate *)arg1 ;
-(unsigned long long)timelineAnimationFadeTypeOverride;
@end

