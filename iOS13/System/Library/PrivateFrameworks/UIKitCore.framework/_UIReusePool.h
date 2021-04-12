/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)__applicationDidEnterBackground:(id)arg1 ;
+(void)__applicationWillEnterForeground:(id)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)initWithPolicy:(unsigned long long)arg1 ;
-(id)reusableObject;
-(unsigned long long)purgePolicy;
-(void)drainPool;
@end

