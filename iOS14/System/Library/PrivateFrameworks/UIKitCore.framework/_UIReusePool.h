/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface _UIReusePool : NSObject {

	NSMutableSet* _reuseSet;
	unsigned long long _purgePolicy;
	NSObject*<OS_dispatch_queue> _reuseSetAccessQueue;

}

@property (nonatomic,readonly) unsigned long long purgePolicy; 
+(void)initialize;
+(void)__applicationWillEnterForeground:(id)arg1 ;
+(void)__applicationDidEnterBackground:(id)arg1 ;
-(id)init;
-(void)drainPool;
-(id)initWithPolicy:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)reusableObject;
-(unsigned long long)purgePolicy;
@end

