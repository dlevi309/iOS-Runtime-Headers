/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class SBBiometricMonitorUI, NSString;

@interface SBPrototypeDumpingGround : NSObject <PTSettingsKeyObserver> {

	SBBiometricMonitorUI* _pearlMonitorUI;
	id _appLaunchedNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updatePearlDebugUI;
@end

