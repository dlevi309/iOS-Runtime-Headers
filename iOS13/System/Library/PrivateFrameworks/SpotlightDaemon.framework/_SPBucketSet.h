/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@protocol OS_dispatch_queue;
#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
@class NSObject;

@interface _SPBucketSet : NSObject {

	CFDictionaryRef _members;
	NSObject*<OS_dispatch_queue> _queue;
	long long _count;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) long long count;                                           //@synthesize count=_count - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)count;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setCount:(long long)arg1 ;
-(long long)valueForKey:(id)arg1 ;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)removeValueForKey:(id)arg1 ;
-(void)decay:(long long)arg1 ;
@end

