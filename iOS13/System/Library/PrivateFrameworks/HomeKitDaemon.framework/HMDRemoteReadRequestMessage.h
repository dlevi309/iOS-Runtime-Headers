/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class HMFMessage, NSUUID, NSObject;

@interface HMDRemoteReadRequestMessage : HMFObject {

	HMFMessage* _readMessage;
	NSUUID* _accessoryUUID;
	NSObject*<OS_dispatch_queue> _responseQueue;

}

@property (nonatomic,readonly) HMFMessage * readMessage;                                //@synthesize readMessage=_readMessage - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryUUID;                                  //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
-(id)description;
-(id)debugDescription;
-(NSUUID *)accessoryUUID;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(HMFMessage *)readMessage;
-(id)initWithReadMessage:(id)arg1 accessoryUUID:(id)arg2 responseQueue:(id)arg3 ;
@end

