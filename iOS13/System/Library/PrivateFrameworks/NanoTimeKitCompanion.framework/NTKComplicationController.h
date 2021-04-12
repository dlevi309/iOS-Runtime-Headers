/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKComplicationDisplay;
@class NSMutableArray, NSMapTable, NTKComplication, CLKDevice, NSDate;

@interface NTKComplicationController : NSObject {

	BOOL _hasGoneLive;
	BOOL _active;
	id<NTKComplicationDisplay> _legacyDisplayDEPRECATED;
	NSMutableArray* _displayWrappers;
	NSMapTable* _displayWrappersToDataMode;
	BOOL _showsLockedUI;
	BOOL _faceZooming;
	NTKComplication* _complication;
	long long _complicationFamily;
	CLKDevice* _device;
	/*^block*/id _invalidationHandler;
	NSDate* _pauseDate;
	long long _cachingMode;
	long long _updatingMode;
	long long _animationMode;
	long long _effectiveFaceDataMode;

}

@property (nonatomic,readonly) NTKComplication * complication;                               //@synthesize complication=_complication - In the implementation block
@property (nonatomic,readonly) long long complicationFamily;                                 //@synthesize complicationFamily=_complicationFamily - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                           //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<NTKComplicationDisplay> legacyDisplay; 
@property (nonatomic,retain) NSDate * pauseDate;                                             //@synthesize pauseDate=_pauseDate - In the implementation block
@property (assign,nonatomic) BOOL showsLockedUI;                                             //@synthesize showsLockedUI=_showsLockedUI - In the implementation block
@property (assign,getter=isFaceZooming,nonatomic) BOOL faceZooming;                          //@synthesize faceZooming=_faceZooming - In the implementation block
@property (nonatomic,readonly) long long cachingMode;                                        //@synthesize cachingMode=_cachingMode - In the implementation block
@property (nonatomic,readonly) long long updatingMode;                                       //@synthesize updatingMode=_updatingMode - In the implementation block
@property (nonatomic,readonly) long long animationMode;                                      //@synthesize animationMode=_animationMode - In the implementation block
@property (nonatomic,readonly) long long effectiveFaceDataMode;                              //@synthesize effectiveFaceDataMode=_effectiveFaceDataMode - In the implementation block
+(BOOL)_isLegacy;
+(id)DEPRECATEDControllerForComplication:(id)arg1 withLegacyDisplay:(id)arg2 forDevice:(id)arg3 ;
+(id)controllerForComplication:(id)arg1 withRequestedFamily:(long long)arg2 face:(id)arg3 slot:(id)arg4 ;
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(Class)controllerClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(void)dealloc;
-(void)_activate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(CLKDevice *)device;
-(void)activate;
-(void)deactivate;
-(void)_deactivate;
-(BOOL)hasTapAction;
-(id)complicationApplicationIdentifier;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(void)didTouchDownInView:(id)arg1 ;
-(void)didTouchUpInsideView:(id)arg1 ;
-(NTKComplication *)complication;
-(BOOL)showsLockedUI;
-(void)performTapAction;
-(void)removeDisplayWrapper:(id)arg1 ;
-(void)setShowsLockedUI:(BOOL)arg1 ;
-(void)setPauseDate:(NSDate *)arg1 ;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)setFaceZooming:(BOOL)arg1 ;
-(void)performBackgroundDataRefresh;
-(void)addDisplayWrapper:(id)arg1 ;
-(BOOL)wantsLegacyDisplay;
-(Class)richComplicationDisplayViewClass;
-(NSDate *)pauseDate;
-(void)_openAppWithURL:(id)arg1 ;
-(id<NTKComplicationDisplay>)legacyDisplay;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)enumerateDisplayWrappersWithBlock:(/*^block*/id)arg1 ;
-(long long)effectiveFaceDataMode;
-(void)DEPRECATEDInvalidate;
-(long long)cachingMode;
-(long long)updatingMode;
-(long long)animationMode;
-(void)notifyDelegateOnTimelineChangeWithTritiumUpdatePriority:(long long)arg1 ;
-(void)_applyCachingMode;
-(void)_applyUpdatingMode;
-(void)_applyAnimationMode;
-(void)_updateIsComplicationActive:(BOOL)arg1 ;
-(id)_initWithComplication:(id)arg1 legacyDisplay:(id)arg2 forDevice:(id)arg3 ;
-(void)_updateEffectiveFaceDataMode;
-(void)_updateEffectiveCachingMode;
-(void)_updateEffectiveUpdatingMode;
-(void)_updateEffectiveAnimationMode;
-(void)_updateInternalModes:(BOOL)arg1 ;
-(void)_openApp:(id)arg1 withURL:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)handleFaceDefaultsChanged;
-(long long)complicationFamily;
-(BOOL)isFaceZooming;
@end

