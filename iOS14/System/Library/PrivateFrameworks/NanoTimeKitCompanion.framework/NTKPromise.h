/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSObject, NSString;

@interface NTKPromise : NSObject {

	unsigned _bgPriority;
	unsigned _fgPriority;
	NSObject*<OS_dispatch_queue> _loaderQueue;
	id _loaderQueue_loadedObject;
	os_unfair_lock_s _lock;
	id _lock_loadedObject;
	unsigned long long _lock_promiseState;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id object; 
+(id)promiseNamed:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)promiseNamed:(id)arg1 withBackgroundPriority:(unsigned)arg2 foregroundPriority:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(id)object;
-(NSString *)name;
-(id)initWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 backgroundPriority:(unsigned)arg2 foregroundPriority:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(void)_beginLoadingBlock:(/*^block*/id)arg1 ;
@end

