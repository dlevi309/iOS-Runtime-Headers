/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _templateWantsPlatter;
	id<CLKMonochromeFilterProvider> _filterProvider;
	id<NTKComplicationDisplayObserver> displayObserver;
	CLKComplicationTemplate* _template;
	CLKDevice* _device;
	UIColor* _foregroundColor;

}

@property (nonatomic,readonly) CLKComplicationTemplate * template;                                   //@synthesize template=_template - In the implementation block
@property (nonatomic,readonly) NSDate * complicationDate; 
@property (nonatomic,readonly) NSDate * timeTravelDate; 
@property (nonatomic,readonly) CLKDevice * device;                                                   //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long family;                                                     //@synthesize family=_family - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                            //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) BOOL templateWantsPlatter;                                              //@synthesize templateWantsPlatter=_templateWantsPlatter - In the implementation block
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;                  //@synthesize filterProvider=_filterProvider - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(CLKComplicationTemplate *)template;
-(void)setPaused:(BOOL)arg1 ;
-(CLKDevice *)device;
-(long long)family;
-(BOOL)paused;
-(void)setEditing:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSDate *)complicationDate;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
-(id)interpolatedColorForView:(id)arg1 ;
-(BOOL)viewShouldIgnoreTwoPieceImage:(id)arg1 ;
-(id)complicationTemplate;
-(id)initWithFamily:(long long)arg1 ;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(NSDate *)timeTravelDate;
-(void)_editingDidEnd;
-(void)_applyPausedUpdate;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(long long)tritiumUpdateMode;
-(void)_setWhistlerAnalogEditingAlphaTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 ;
-(void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3 ;
-(unsigned long long)timelineAnimationFadeTypeOverride;
-(void)setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(BOOL)templateWantsPlatter;
-(void)setTemplateWantsPlatter:(BOOL)arg1 ;
@end

