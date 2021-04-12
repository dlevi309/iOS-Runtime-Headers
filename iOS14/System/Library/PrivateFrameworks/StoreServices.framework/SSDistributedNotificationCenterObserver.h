/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)block;
-(id)initWithName:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)name;
-(void)dealloc;
@end

