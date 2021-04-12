/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>

@class NSString;

@interface HMDLogEventContextProvider : HMFObject <HMDLogEventObserver> {

	unsigned long long _activeXPCConnections;

}

@property (getter=isActive,readonly) BOOL active; 
@property (readonly) unsigned long long activeXPCConnections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedEventTypes;
+(BOOL)isSupportedEvent:(id)arg1 ;
-(id)init;
-(BOOL)isActive;
-(void)_processLogEvent:(id)arg1 ;
-(unsigned long long)activeXPCConnections;
-(void)_processActiveXPCConnectionLogEvent:(id)arg1 ;
-(void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2 ;
@end

