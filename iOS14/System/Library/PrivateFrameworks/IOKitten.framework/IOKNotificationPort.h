/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/


@protocol OS_dispatch_queue;
#import <IOKitten/IOKitten-Structs.h>
@class NSObject;

@interface IOKNotificationPort : NSObject {

	IONotificationPortRef _port;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) IONotificationPortRef port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned machPort; 
-(IONotificationPortRef)port;
-(unsigned)machPort;
-(id)init;
-(id)initOnDispatchQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithMasterPort:(unsigned)arg1 onDispatchQueue:(id)arg2 ;
-(void)dealloc;
@end

