/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKTemplateComplicationDisplay.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>

@protocol CLKMonochromeFilterProvider, NTKComplicationDisplayObserver;
@class NSDate, CLKComplicationTemplate, CLKDevice, UIColor, NSString;

@interface NTKRichComplicationView : UIView <NTKTemplateComplicationDisplay, CLKMonochromeComplicationView, CLKMonochromeFilterProvider> {

	long long _family;
	BOOL _editing;
	BOOL _highlighted;
	NSDate* _timeTravelDate;
	BOOL canUseCurvedText;
	BOOL _paused;
	id<CLKMonochromeFilterProvider> _filterProvider;
	id<NTKComplicationDisplayObserver> displayObserver;
	CLKComplicationTemplate* _template;
	CLKDevice* _device;
	UIColor* _foregroundColor;
	UIColor* _templateBackgroundColor;

}

@property (nonatomic,readonly) CLKComplicationTemplate * template;                                   //@synthesize template=_template - In the implementation block
@property (nonatomic,readonly) NSDate * complicationDate; 
@property (nonatomic,readonly) NSDate * timeTravelDate; 
@property (nonatomic,readonly) CLKDevice * device;                                                   //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long family;                                                     //@synthesize family=_family - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                            //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * templateBackgroundColor;                                      //@synthesize templateBackgroundColor=_templateBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;                  //@synthesize filterProvider=_filterProvider - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(long long)family;
-(CLKDevice *)device;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(UIColor *)foregroundColor;
-(CLKComplicationTemplate *)template;
-(id)complicationTemplate;
-(NSDate *)complicationDate;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_editingDidEnd;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
-(id)interpolatedColorForView:(id)arg1 ;
-(BOOL)viewShouldIgnoreTwoPieceImage:(id)arg1 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(NSDate *)timeTravelDate;
-(void)_applyPausedUpdate;
-(id)initWithFamily:(long long)arg1 ;
-(UIColor *)templateBackgroundColor;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)_setWhistlerAnalogEditingAlphaTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 ;
-(void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3 ;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
-(unsigned long long)timelineAnimationFadeTypeOverride;
-(void)setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(void)setTemplateBackgroundColor:(UIColor *)arg1 ;
@end

