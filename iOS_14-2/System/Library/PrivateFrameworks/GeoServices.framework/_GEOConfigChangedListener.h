/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue, GEOConfigChangeListenerDelegate;
@class _GEOConfigKeyHelper, NSObject;

@interface _GEOConfigChangedListener : NSObject {

	_GEOConfigKeyHelper* keyHelper;
	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;
	id<GEOConfigChangeListenerDelegate> delegate;

}

@property (assign,nonatomic,__weak) _GEOConfigKeyHelper * keyHelper; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
@property (assign,nonatomic,__weak) id<GEOConfigChangeListenerDelegate> delegate; 
+(id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
+(id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setKeyHelper:(_GEOConfigKeyHelper *)arg1 ;
-(id)block;
-(void)callListener;
-(id<GEOConfigChangeListenerDelegate>)delegate;
-(void)setBlock:(id)arg1 ;
-(_GEOConfigKeyHelper *)keyHelper;
-(void)setDelegate:(id<GEOConfigChangeListenerDelegate>)arg1 ;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

