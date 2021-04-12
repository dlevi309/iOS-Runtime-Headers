/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)interfaceStyle;
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
+(id)nowPlayingAlbumArt;
+(id)showInternalSettings;
+(id)smartWidgetDebugShowScore;
+(id)smartWidgetDebugGestures;
+(id)smartWidgetRelaxHomeInRangeCheck;
+(id)fakeNeatlineDashboardSupport;
+(id)flipDashboardLayout;
-(id)description;
-(NSString *)key;
-(NSString *)domain;
-(id)value;
-(void)setValue:(id)arg1 ;
-(BOOL)state;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setState:(BOOL)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(id)valueOrDefault;
-(void)setCachedValue:(id)arg1 ;
-(id)cachedValue;
-(void)setValueChangedBlock:(id)arg1 ;
-(id)valueChangedBlock;
-(BOOL)cachedState;
-(void)setCachedState:(BOOL)arg1 ;
-(id)cachedValueOrDefault;
-(id)internalSettingsValue;
-(void)setInternalSettingsValue:(id)arg1 ;
-(BOOL)internalSettingsState;
-(void)setInternalSettingsState:(BOOL)arg1 ;
@end

