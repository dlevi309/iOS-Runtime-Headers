/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSString;

@interface CARPrototypePref : NSObject {

	NSString* _domain;
	NSString* _key;
	NSString* _title;
	id _defaultValue;
	/*^block*/id _valueChangedBlock;

}

@property (nonatomic,copy) NSString * domain;                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id defaultValue;                           //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) id valueChangedBlock;                      //@synthesize valueChangedBlock=_valueChangedBlock - In the implementation block
@property (nonatomic,copy) id value; 
@property (nonatomic,readonly) id valueOrDefault; 
@property (assign,nonatomic) BOOL state; 
@property (nonatomic,copy) id cachedValue; 
@property (nonatomic,readonly) id cachedValueOrDefault; 
@property (assign,nonatomic) BOOL cachedState; 
@property (nonatomic,copy) id internalSettingsValue; 
@property (assign,nonatomic) BOOL internalSettingsState; 
+(id)contentSize;
+(id)showPrototypeApps;
+(void)setConfirmedSafe:(BOOL)arg1 ;
+(id)_qaModeLockout;
+(id)prototypePrefs;
+(id)prefWithDomain:(id)arg1 key:(id)arg2 title:(id)arg3 defaultValue:(id)arg4 valueChangedBlock:(/*^block*/id)arg5 ;
+(id)_confirmedSafe;
+(void)setPrototypePrefCache:(id)arg1 ;
+(id)prototypePrefCache;
+(BOOL)confirmedSafe;
+(BOOL)showTrustedLockout;
+(BOOL)qaModeLockout;
+(void)setQaModeLockout:(BOOL)arg1 ;
+(id)showInternalApps;
+(id)audioSharingEnabled;
+(id)latestInterfaceStyle;
+(id)useSceneInterfaceStyle;
+(id)disableLocationNightMode;
+(id)useNightModeTester;
+(id)nowPlayingAlbumArt;
+(id)showInternalSettings;
+(id)smartWidgetDebugShowScore;
+(id)smartWidgetDebugGestures;
+(id)smartWidgetRelaxHomeInRangeCheck;
+(id)fakeNeatlineDashboardSupport;
+(id)statusBarEdgeOverride;
+(id)statusBarHorizontalThreshold;
+(id)flipDashboardLayout;
+(id)interfaceStyle;
-(void)setDefaultValue:(id)arg1 ;
-(void)setCachedValue:(id)arg1 ;
-(BOOL)cachedState;
-(id)defaultValue;
-(void)setTitle:(NSString *)arg1 ;
-(id)valueChangedBlock;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setInternalSettingsValue:(id)arg1 ;
-(BOOL)internalSettingsState;
-(void)setValue:(id)arg1 ;
-(id)description;
-(void)setInternalSettingsState:(BOOL)arg1 ;
-(NSString *)key;
-(void)setState:(BOOL)arg1 ;
-(BOOL)state;
-(id)cachedValueOrDefault;
-(void)setValueChangedBlock:(id)arg1 ;
-(id)cachedValue;
-(id)valueOrDefault;
-(void)setKey:(NSString *)arg1 ;
-(id)internalSettingsValue;
-(id)value;
-(NSString *)title;
-(void)setCachedState:(BOOL)arg1 ;
@end

