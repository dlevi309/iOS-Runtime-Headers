/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
*/


#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
@class RadiosPreferences;

@interface MISManager : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	NETRBClientRef _netClient;
	int _state;
	int _reason;
	BOOL _needStateUpdate;
	RadiosPreferences* _radioPrefs;

}
+(id)sharedManager;
-(id)init;
-(void)setState:(int)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)sendStateUpdate;
-(void)stopService;
-(void)authenticate;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
-(BOOL)didUserPreventData;
-(void)attachMIS;
-(void)detachMIS;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
@end

