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
@class CLKFont, NTKColoringLabel, CLKDevice, CLKComplicationTemplate, NSString;

@interface NTKSimpleTextComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay> {

	BOOL canUseCurvedText;
	id<NTKComplicationDisplayObserver> displayObserver;
	CLKFont* _font;
	NTKColoringLabel* _label;
	CLKDevice* _device;
	CLKComplicationTemplate* _template;

}

@property (nonatomic,retain) NTKColoringLabel * label;                                               //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CLKDevice * device;                                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) CLKComplicationTemplate * template;                                     //@synthesize template=_template - In the implementation block
@property (nonatomic,retain) CLKFont * font;                                                         //@synthesize font=_font - In the implementation block
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
-(void)setLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)label;
-(void)setFont:(CLKFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CLKFont *)font;
-(void)sizeToFit;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setTemplate:(CLKComplicationTemplate *)arg1 ;
-(CLKComplicationTemplate *)template;
-(id)complicationTemplate;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
@end

