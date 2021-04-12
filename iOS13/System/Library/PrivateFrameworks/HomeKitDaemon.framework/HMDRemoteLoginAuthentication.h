/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSString, HMDDevice, NSObject, HMDRemoteLoginMessageSender;

@interface HMDRemoteLoginAuthentication : HMFObject <HMFLogging> {

	NSString* _sessionID;
	HMDDevice* _remoteDevice;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDRemoteLoginMessageSender* _remoteMessageSender;

}

@property (nonatomic,readonly) NSString * sessionID;                                           //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) HMDDevice * remoteDevice;                                       //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                         //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDRemoteLoginMessageSender * remoteMessageSender;              //@synthesize remoteMessageSender=_remoteMessageSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)sessionID;
-(id)logIdentifier;
-(HMDDevice *)remoteDevice;
-(HMDRemoteLoginMessageSender *)remoteMessageSender;
-(void)authenticate;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 ;
@end

