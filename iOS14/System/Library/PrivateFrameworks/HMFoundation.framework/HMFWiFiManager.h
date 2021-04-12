/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFWiFiManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, HMFWiFiManagerDataSource;
@class NSString, HMFMACAddress, NSObject, NSHashTable;

@interface HMFWiFiManager : HMFObject <HMFLogging, HMFWiFiManagerDataSourceDelegate> {

	os_unfair_lock_s _lock;
	BOOL _shouldAssertWoW;
	NSString* _currentNetworkSSID;
	HMFMACAddress* _MACAddress;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMFWiFiManagerDataSource> _dataSource;
	NSHashTable* _activeAssertions;

}

@property (copy,readonly) HMFMACAddress * MACAddress;                 //@synthesize MACAddress=_MACAddress - In the implementation block
@property (copy,readonly) NSString * currentNetworkSSID; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedManager;
-(HMFMACAddress *)MACAddress;
-(id)init;
-(BOOL)isActive;
-(id)beginActiveAssertionWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endActiveAssertion:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2 ;
-(NSString *)currentNetworkSSID;
-(void)currentNetworkDidChangeForDataSource:(id)arg1 ;
-(void)dataSource:(id)arg1 didChangeWoWState:(BOOL)arg2 ;
-(void)dataSource:(id)arg1 didChangeLinkAvailability:(BOOL)arg2 ;
-(void)takeWoWAssertion;
-(void)releaseWoWAssertion;
@end

