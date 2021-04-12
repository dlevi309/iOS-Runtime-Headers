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
@class NTKColoringLabel, CLKDevice, CLKComplicationTemplateSimpleText, NSDate, CLKFont, NSString;

@interface NTKSimpleTextComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay> {

	BOOL canUseCurvedText;
	id<NTKComplicationDisplayObserver> displayObserver;
	NTKColoringLabel* _label;
	CLKDevice* _device;
	CLKComplicationTemplateSimpleText* _template;
	NSDate* _timeTravelDate;

}

@property (nonatomic,retain) NTKColoringLabel * label;                                               //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CLKDevice * device;                                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) CLKComplicationTemplateSimpleText * template;                           //@synthesize template=_template - In the implementation block
@property (nonatomic,retain) NSDate * timeTravelDate;                                                //@synthesize timeTravelDate=_timeTravelDate - In the implementation block
@property (nonatomic,retain) CLKFont * font; 
@property (nonatomic,readonly) BOOL useAlternateFont; 
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
-(id)init;
-(id)_defaultFont;
-(void)setFont:(CLKFont *)arg1 ;
-(CLKComplicationTemplateSimpleText *)template;
-(CLKDevice *)device;
-(void)layoutSubviews;
-(void)setTemplate:(CLKComplicationTemplateSimpleText *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)label;
-(CLKFont *)font;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
-(id)complicationTemplate;
-(NSDate *)timeTravelDate;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(void)setTimeTravelDate:(NSDate *)arg1 ;
-(void)_updateLabelFrame;
-(BOOL)useAlternateFont;
@end

