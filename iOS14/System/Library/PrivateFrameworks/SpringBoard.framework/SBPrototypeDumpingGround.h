/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)dealloc;
-(void)_updatePearlDebugUI;
@end

