/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)description;
-(void)main;
-(id)operationBlock;
-(void)setOperationBlock:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithBlock:(/*^block*/id)arg1 clientQueue:(id)arg2 ;
@end

