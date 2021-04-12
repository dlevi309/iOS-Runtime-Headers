/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface WLKCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _stack;
	NSMutableDictionary* _dictionary;
	unsigned long long _countLimit;

}

@property (assign) unsigned long long countLimit; 
-(unsigned long long)countLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_onQueueRemoveObjectForKey:(id)arg1 ;
@end

