/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBContainer.h>
#import <libobjc.A.dylib/CBContainerProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>
#import <libobjc.A.dylib/NightShiftSupportProtocol.h>
#import <libobjc.A.dylib/CBStatusInfoProtocol.h>

@protocol CBContainerModuleProtocol, CBContainerModuleProtocolCBHIDServiceProtocol, CBContainerProtocolCBHIDServiceProtocolNightShiftSupportProtocol;
@class NSMutableArray, NSArray, NSUUID, NSString, CADisplay, CBCAManager;

@interface CBDisplayContaineriOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol> {

	NSMutableArray* _relevantServices;
	NSMutableArray* _modules;
	NSArray* _whitelist;
	NSUUID* _displayContainerUUID;
	id<CBContainerModuleProtocol> _displayControlModule;
	id<CBContainerModuleProtocol><CBHIDServiceProtocol> _autoBrightnessModule;
	id<CBContainerProtocol><CBHIDServiceProtocol><NightShiftSupportProtocol> _harmonyContainer;
	id<CBContainerModuleProtocol><CBHIDServiceProtocol> _edrControlModule;
	unsigned _displayService;
	BOOL _running;
	BOOL _builtIn;
	unsigned long long _displayID;
	unsigned long long _registryID;
	NSString* _description;
	CADisplay* _display;
	IONotificationPortRef _displayArrivalNotificationPort;
	unsigned _displayArrivalIterator;
	unsigned _displayRemovalIterator;
	CBCAManager* _displayCAManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyIdentifiers;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(BOOL)findBacklight;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)unregisterNotificationBlock;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
-(BOOL)start;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyStatusInfo;
-(void)stop;
-(NSString *)description;
-(id)initWithCADisplay:(id)arg1 ;
-(id)initWithBacklightService:(unsigned)arg1 ;
-(BOOL)setupInternalModules;
-(void)sendNotificationForKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)handleDisplayArrival:(unsigned)arg1 ;
-(BOOL)matchDisplayWithHidService:(IOHIDServiceClientRef)arg1 ;
-(BOOL)initialiseHIDDisplay;
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 from:(id)arg3 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
-(void)tearDownInternalModules;
@end

