/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface SSDistributedNotificationCenterObserver : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _name;

}

@property (nonatomic,readonly) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id)block;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)initWithName:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

