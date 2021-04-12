/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)globalDevicePreferences;
-(void)setGlobalDevicePreferences:(id)arg1 ;
-(void)mousePointerDevicesDidDisconnect:(id)arg1 ;
-(void)mousePointerDevicesDidConnect:(id)arg1 ;
-(id<BSInvalidatable>)observerToken;
-(void)setObserverToken:(id<BSInvalidatable>)arg1 ;
-(NSMutableSet *)pointerDevices;
-(BOOL)hasMouse;
-(BOOL)hasTrackpad;
-(BOOL)hasMagicMouse;
-(void)setTrackingSpeedIndex:(int)arg1 ;
-(int)trackingSpeedIndex;
-(void)setPointerDevices:(NSMutableSet *)arg1 ;
@end

