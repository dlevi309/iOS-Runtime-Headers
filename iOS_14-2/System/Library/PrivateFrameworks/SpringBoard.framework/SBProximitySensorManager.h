/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol SBProximitySensorControlling;
@class NSMutableSet, SBHardwareDefaults, NSHashTable, SpringBoard, NSString;

@interface SBProximitySensorManager : NSObject <SBUIActiveOrientationObserver> {

	NSMutableSet* _clientsWantingDetectionEnabled;
	id<SBProximitySensorControlling> _hidInterface;
	SBHardwareDefaults* _hardwareDefaults;
	BOOL _proximityDetectionEnabled;
	BOOL _proximityDetectionPermitted;
	BOOL _objectInProximity;
	BOOL _objectInCrudeProximity;
	int _backboardNotificationToken;
	NSHashTable* _observers;
	SpringBoard* _interfaceOrientationProvider;

}

@property (assign,setter=_setObjectInProximity:,getter=isObjectInProximity,nonatomic) BOOL objectInProximity;                                                       //@synthesize objectInProximity=_objectInProximity - In the implementation block
@property (assign,setter=_setProximityDetectionEnabled:,getter=isProximityDetectionEnabled,nonatomic) BOOL proximityDetectionEnabled;                               //@synthesize proximityDetectionEnabled=_proximityDetectionEnabled - In the implementation block
@property (assign,setter=_setProximityDetectionPermitted:,getter=isProximityDetectionPermitted,nonatomic) BOOL proximityDetectionPermitted;                         //@synthesize proximityDetectionPermitted=_proximityDetectionPermitted - In the implementation block
@property (setter=_setInterfaceOrientationProvider:,getter=_interfaceOrientationProvider,nonatomic,retain) SpringBoard * interfaceOrientationProvider;              //@synthesize interfaceOrientationProvider=_interfaceOrientationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)processHIDEvent:(IOHIDEventRef)arg1 ;
-(id)initWithHIDInterface:(id)arg1 hardwareDefaults:(id)arg2 interfaceOrientationProvider:(id)arg3 ;
-(BOOL)_clientsWantDetectionEnabled;
-(void)_disableProx;
-(BOOL)isObjectInProximity;
-(NSString *)description;
-(void)resetProximityCalibration;
-(BOOL)isProximityDetectionEnabled;
-(void)removeObserver:(id)arg1 ;
-(void)_reloadDefaults;
-(id)_interfaceOrientationProvider;
-(void)client:(id)arg1 wantsProximityDetectionEnabled:(BOOL)arg2 ;
-(void)_proximityDidChange:(id)arg1 ;
-(BOOL)isProximityDetectionPermitted;
-(void)_setProximityDetectionPermitted:(BOOL)arg1 ;
-(void)_enableProx;
-(void)_setInterfaceOrientationProvider:(id)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)_setProximityDetectionEnabled:(BOOL)arg1 ;
-(void)_setObjectInProximity:(BOOL)arg1 ;
-(void)_destroy;
-(void)_updateProxState;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
@end

