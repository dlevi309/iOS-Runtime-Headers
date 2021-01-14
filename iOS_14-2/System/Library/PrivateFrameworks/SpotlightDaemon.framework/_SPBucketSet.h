/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(long long)arg1 ;
-(void)decay:(long long)arg1 ;
-(id)init;
-(void)removeValueForKey:(id)arg1 ;
-(long long)valueForKey:(id)arg1 ;
-(long long)count;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

