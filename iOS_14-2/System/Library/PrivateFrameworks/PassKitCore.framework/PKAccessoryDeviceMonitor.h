/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/ACCConnectionInfoDelegateProtocol.h>

@protocol PKAccessoryDeviceMonitorDelegate;
@class ACCConnectionInfo, NSMutableDictionary, NSMutableSet, NSString;

@interface PKAccessoryDeviceMonitor : NSObject <ACCConnectionInfoDelegateProtocol> {

	ACCConnectionInfo* _accessoryConnectionInfo;
	NSMutableDictionary* _attachmentDictionary;
	NSMutableSet* _accessoryAttached;
	id<PKAccessoryDeviceMonitorDelegate> _delegate;
	NSString* _accessoryConnectionUUID;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)accessoryConnectionDetached:(id)arg1 ;
-(void)accessoryConnectionAttached:(id)arg1 type:(int)arg2 info:(id)arg3 properties:(id)arg4 ;
-(void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5 ;
-(BOOL)accessoryAttachedForEndpointUUID:(id)arg1 ;
-(void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2 ;
@end

