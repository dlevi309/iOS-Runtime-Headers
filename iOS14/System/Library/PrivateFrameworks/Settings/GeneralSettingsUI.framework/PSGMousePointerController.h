/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <libobjc.A.dylib/BKSMousePointerDeviceObserver.h>

@protocol BSInvalidatable;
@class NSMutableSet, NSString;

@interface PSGMousePointerController : NSObject <BKSMousePointerDeviceObserver> {

	NSMutableSet* _pointerDevices;
	id<BSInvalidatable> _observerToken;

}

@property (retain) id<BSInvalidatable> observerToken;                    //@synthesize observerToken=_observerToken - In the implementation block
@property (nonatomic,retain) NSMutableSet * pointerDevices;              //@synthesize pointerDevices=_pointerDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)hasMouse;
-(id<BSInvalidatable>)observerToken;
-(BOOL)hasTrackpad;
-(id)init;
-(void)setPointerDevices:(NSMutableSet *)arg1 ;
-(void)setObserverToken:(id<BSInvalidatable>)arg1 ;
-(NSMutableSet *)pointerDevices;
-(BOOL)hasMagicMouse;
-(id)globalDevicePreferences;
-(void)mousePointerDevicesDidDisconnect:(id)arg1 ;
-(int)trackingSpeedIndex;
-(void)setGlobalDevicePreferences:(id)arg1 ;
-(void)mousePointerDevicesDidConnect:(id)arg1 ;
-(void)setTrackingSpeedIndex:(int)arg1 ;
@end

