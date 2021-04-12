/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/TIUserModeling.h>
#import <libobjc.A.dylib/TIMetricProviding.h>

@protocol TIUserModelDataStoring, TIUserModelConfigurationDelegate;
@class NSArray, NSString, NSMutableDictionary, NSDictionary, NSDate;

@interface TIUserModel : NSObject <TIUserModeling, TIMetricProviding> {

	NSString* _inputMode;
	id<TIUserModelDataStoring> _userModelStore;
	NSMutableDictionary* _durableCounters;
	NSMutableDictionary* _userModelValuesCollection;
	NSDictionary* _settingsDictionary;
	double _timeOfLastPersist;
	BOOL _userModelRateLimitingDisabled;
	id<TIUserModelConfigurationDelegate> _configurationDelegate;
	NSDate* _loadedDate;

}

@property (nonatomic,retain) NSDate * loadedDate;                                                            //@synthesize loadedDate=_loadedDate - In the implementation block
@property (assign) BOOL userModelRateLimitingDisabled;                                                       //@synthesize userModelRateLimitingDisabled=_userModelRateLimitingDisabled - In the implementation block
@property (nonatomic,readonly) NSString * inputMode;                                                         //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic,__weak) id<TIUserModelConfigurationDelegate> configurationDelegate;              //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedSettingsDictionary; 
@property (nonatomic,readonly) NSArray * contexts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfigurationDelegate:(id<TIUserModelConfigurationDelegate>)arg1 ;
-(NSString *)inputMode;
-(void)loadIfNecessary;
-(void)addToDurableCounter:(int)arg1 forKey:(id)arg2 ;
-(int)valueForDurableKey:(id)arg1 ;
-(BOOL)persistForDate:(id)arg1 ;
-(NSDate *)loadedDate;
-(void)setLoadedDate:(NSDate *)arg1 ;
-(void)setUserModelRateLimitingDisabled:(BOOL)arg1 ;
-(id<TIUserModelConfigurationDelegate>)configurationDelegate;
-(void)addDoubleToTransientCounter:(double)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4 ;
-(void)trackPowerLogIfNecessary;
-(BOOL)userModelRateLimitingDisabled;
-(void)addIntegerToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4 ;
-(id)valuesFromContext:(id)arg1 ;
-(void)configureDurableCounters;
-(id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2 ;
-(void)configureDurableCounterForName:(id)arg1 ;
-(id)populateSettingsDictionary;
-(void)doLoad;
-(NSArray *)contexts;
-(NSDictionary *)cachedSettingsDictionary;
-(void)loadSettings;
-(void)dealloc;
@end

