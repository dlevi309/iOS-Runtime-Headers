/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBAPSConnectionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMBAPSConnection;
@class NSHashTable, NSString;

@interface HMBCloudPushHandler : HMFObject <HMBAPSConnectionDelegate, HMFLogging> {

	os_unfair_lock_s _lock;
	id<HMBAPSConnection> _apsConnection;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedHandlerForEnvironment:(id)arg1 ;
-(id)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)initWithAPSConnection:(id)arg1 ;
@end

