/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <libobjc.A.dylib/PRBeaconListenerDelegate.h>

@protocol OS_os_log;
@class NSObject, NSMutableArray, PRBeaconListener, NSString;

@interface PRContactWhitelist : NSObject <PRBeaconListenerDelegate> {

	NSObject*<OS_os_log> _logger;
	NSMutableArray* _whitelist;
	PRBeaconListener* _nearbyDaemonSession;
	BOOL _needToRestart;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)clear:(/*^block*/id)arg1 ;
-(void)addTrustedContact:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeTrustedContact:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beaconListener:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)beaconListener:(id)arg1 didFailWithError:(id)arg2 ;
@end

