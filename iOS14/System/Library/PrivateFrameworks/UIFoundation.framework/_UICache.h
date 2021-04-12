/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface _UICache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_source> _memoryWarningsSource;
	BOOL _clearsCacheOnLowMemoryWarnings;
	BOOL _clearsCacheOnApplicationBackground;
	id _noteObserver;

}

@property (assign,nonatomic) BOOL clearsCacheOnLowMemoryWarnings; 
@property (assign,nonatomic) BOOL clearsCacheOnApplicationBackground; 
-(void)setClearsCacheOnLowMemoryWarnings:(BOOL)arg1 ;
-(BOOL)clearsCacheOnApplicationBackground;
-(id)init;
-(id)retainedObjectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(BOOL)clearsCacheOnLowMemoryWarnings;
-(id)cacheKeys;
-(void)setClearsCacheOnApplicationBackground:(BOOL)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

