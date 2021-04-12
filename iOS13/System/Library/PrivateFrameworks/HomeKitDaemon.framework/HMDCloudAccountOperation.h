/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject;

@interface HMDCloudAccountOperation : NSOperation {

	NSUUID* _identifier;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _operationBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) id operationBlock;                                         //@synthesize operationBlock=_operationBlock - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(void)main;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)operationBlock;
-(void)setOperationBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 clientQueue:(id)arg2 ;
@end

