/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/NTKComplicationDisplayObserver.h>
#import <libobjc.A.dylib/CLKSensitiveUIStateObserver.h>
#import <libobjc.A.dylib/NTKControl.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@protocol NTKComplicationDisplay, NTKComplicationDisplayWrapperViewAnimationDelegate, CLKMonochromeFilterProvider;
@class UIView, CLKComplicationTemplate, NSDate, NSString;

@interface NTKComplicationDisplayWrapperView : UIControl <NTKComplicationDisplayObserver, CLKSensitiveUIStateObserver, NTKControl, NTKTimeTravel> {

	UIView*<NTKComplicationDisplay> _currentComplicationView;
	UIView*<NTKComplicationDisplay> _nextComplicationView;
	UIView*<NTKComplicationDisplay> _deferredComplicationView;
	UIView* _clipView;
	UIView* _earlierContainerView;
	UIView* _laterContainerView;
	CLKComplicationTemplate* _prevTemplate;
	CLKComplicationTemplate* _template;
	NSDate* _timeTravelDate;
	BOOL _didChangeLayoutOverride;
	BOOL _isAnimating;
	BOOL _isDetachedDisplay;
	BOOL _supportsCurvedText;
	BOOL _paused;
	BOOL _editing;
	BOOL _tapEnabled;
	BOOL _dimmed;
	BOOL _hasLegacyDisplay;
	long long _family;
	NSString* _complicationSlotIdentifier;
	UIView*<NTKComplicationDisplay> _display;
	/*^block*/id _displayConfigurationHandler;
	/*^block*/id _touchDownHandler;
	/*^block*/id _touchUpInsideHandler;
	id<NTKComplicationDisplayWrapperViewAnimationDelegate> _animationDelegate;
	/*^block*/id _needsResizeHandler;
	CLKComplicationTemplate* _complicationTemplate;
	double _alphaForDimmedState;
	long long _layoutOverride;
	id<CLKMonochromeFilterProvider> _filterProvider;
	CGSize _maxSize;

}

@property (nonatomic,readonly) long long family;                                                                           //@synthesize family=_family - In the implementation block
@property (nonatomic,retain) NSString * complicationSlotIdentifier;                                                        //@synthesize complicationSlotIdentifier=_complicationSlotIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsCurvedText;                                                                      //@synthesize supportsCurvedText=_supportsCurvedText - In the implementation block
@property (nonatomic,readonly) UIView*<NTKComplicationDisplay> display;                                                    //@synthesize display=_display - In the implementation block
@property (nonatomic,copy) id displayConfigurationHandler;                                                                 //@synthesize displayConfigurationHandler=_displayConfigurationHandler - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                                                  //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL editing;                                                                                 //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL tapEnabled;                                                                              //@synthesize tapEnabled=_tapEnabled - In the implementation block
@property (nonatomic,copy) id touchDownHandler;                                                                            //@synthesize touchDownHandler=_touchDownHandler - In the implementation block
@property (nonatomic,copy) id touchUpInsideHandler;                                                                        //@synthesize touchUpInsideHandler=_touchUpInsideHandler - In the implementation block
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayWrapperViewAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                                                                               //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,copy) id needsResizeHandler;                                                                          //@synthesize needsResizeHandler=_needsResizeHandler - In the implementation block
@property (nonatomic,readonly) CLKComplicationTemplate * complicationTemplate;                                             //@synthesize complicationTemplate=_complicationTemplate - In the implementation block
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed;                                                                  //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) double alphaForDimmedState;                                                                   //@synthesize alphaForDimmedState=_alphaForDimmedState - In the implementation block
@property (nonatomic,readonly) BOOL hasLegacyDisplay;                                                                      //@synthesize hasLegacyDisplay=_hasLegacyDisplay - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
@property (nonatomic,readonly) long long layoutOverride;                                                                   //@synthesize layoutOverride=_layoutOverride - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;                                        //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(long long)family;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(CGSize)preferredSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(void)setAnimationDelegate:(id<NTKComplicationDisplayWrapperViewAnimationDelegate>)arg1 ;
-(CGSize)maxSize;
-(UIView*<NTKComplicationDisplay>)display;
-(id<NTKComplicationDisplayWrapperViewAnimationDelegate>)animationDelegate;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)isDimmed;
-(void)needsResize;
-(void)sensitiveUIStateChanged;
-(id)touchDownHandler;
-(void)setTouchDownHandler:(id)arg1 ;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)tapEnabled;
-(void)setTapEnabled:(BOOL)arg1 ;
-(CLKComplicationTemplate *)complicationTemplate;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)setNeedsResizeHandler:(id)arg1 ;
-(id)touchUpInsideHandler;
-(id)initWithFamily:(long long)arg1 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(long long)layoutOverride;
-(id)initWithCustomTemplateDisplay:(id)arg1 isDetachedDisplay:(BOOL)arg2 family:(long long)arg3 ;
-(void)setComplicationSlotIdentifier:(NSString *)arg1 ;
-(id)initWithLegacyDisplay:(id)arg1 layoutOverride:(long long)arg2 ;
-(NSString *)complicationSlotIdentifier;
-(id)needsResizeHandler;
-(void)complicationDisplayNeedsResize:(id)arg1 ;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3 ;
-(double)alphaForDimmedState;
-(BOOL)shouldCancelTouchesInScrollview;
-(void)setTouchUpInsideHandler:(id)arg1 ;
-(void)setAlphaForDimmedState:(double)arg1 ;
-(void)setSupportsCurvedText:(BOOL)arg1 ;
-(void)setDisplayConfigurationHandler:(id)arg1 ;
-(void)_invokeTouchUpInsideHandler;
-(void)_invokeTouchDownHandler;
-(id)initWithLegacyDisplay:(id)arg1 ;
-(void)_setDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2 animationType:(unsigned long long)arg3 animationFraction:(float)arg4 ;
-(void)_setComplicationTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3 animationType:(unsigned long long)arg4 animationFraction:(float)arg5 ;
-(void)_replaceDisplayWithDisplayClass:(Class)arg1 template:(id)arg2 reason:(long long)arg3 animation:(unsigned long long)arg4 animationType:(unsigned long long)arg5 animationFraction:(float)arg6 ;
-(void)_updateVisibilityForSensitivity:(long long)arg1 ;
-(BOOL)supportsCurvedText;
-(void)_prepareToSetDisplay:(id)arg1 withComplicationAnimation:(inout unsigned long long*)arg2 ;
-(void)_didSetDisplayFromDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2 ;
-(void)_invokeNeedsResizeHandler;
-(void)_setDisplayEditing:(BOOL)arg1 ;
-(void)_setDisplayMaxSize:(CGSize)arg1 ;
-(void)_tryToSetDisplayHighlighted:(BOOL)arg1 ;
-(BOOL)_displayIsTappable;
-(void)_removeDisplay:(id)arg1 ;
-(void)setComplicationView:(id)arg1 withComplicationAnimation:(unsigned long long)arg2 animationType:(unsigned long long)arg3 animationFraction:(float)arg4 ;
-(void)_timelineAnimationDidFinish;
-(void)_resetComplicationViews;
-(id)displayConfigurationHandler;
-(BOOL)hasLegacyDisplay;
@end

