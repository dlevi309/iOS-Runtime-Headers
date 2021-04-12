/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject, CTDataStatus, NSString;

@interface _NSCFNetworkMonitor : NSObject <CoreTelephonyClientDataDelegate> {

	CoreTelephonyClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	CTDataStatus* _status;
	os_unfair_lock_s _statusLock;
	BOOL _queryFailed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)internetDataStatus:(id)arg1 ;
-(void)dealloc;
@end

