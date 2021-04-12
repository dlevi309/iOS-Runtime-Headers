/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPExecutor.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSString;

@interface HKSPCoalescingExecutor : NSObject <HKSPExecutor> {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id block;                                     //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)execute;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_source>)source;
@end

