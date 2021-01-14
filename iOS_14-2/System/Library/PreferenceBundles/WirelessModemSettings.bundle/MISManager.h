/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)applicationWillResignActive:(id)arg1 ;
-(id)init;
-(void)sendStateUpdate;
-(void)stopService;
-(void)setState:(int)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)authenticate;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
-(BOOL)didUserPreventData;
-(void)attachMIS;
-(void)detachMIS;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
@end

