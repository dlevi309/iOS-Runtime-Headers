/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSArray, IDSService, NSString;

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _pairedWithWatch;
	NSArray* _connectedWatches;
	IDSService* _service;

}

@property (nonatomic,readonly) IDSService * service;                             //@synthesize service=_service - In the implementation block
@property (copy,readonly) NSArray * watches; 
@property (copy,readonly) NSArray * connectedWatches;                            //@synthesize connectedWatches=_connectedWatches - In the implementation block
@property (getter=isPairedWithWatch,readonly) BOOL pairedWithWatch;              //@synthesize pairedWithWatch=_pairedWithWatch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedManager;
+(id)shortDescription;
+(BOOL)isCompatibleWatchDevice:(id)arg1 ;
-(id)init;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(id)attributeDescriptions;
-(NSArray *)watches;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(IDSService *)service;
-(BOOL)isPairedWithWatch;
-(NSArray *)connectedWatches;
-(void)__initializeConnectedDevices;
-(id)connectedWatchFromDeviceID:(id)arg1 ;
@end

