/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <libobjc.A.dylib/ENGroupContextObserverMiddleware.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ENGroupContextNotifyingObserver : NSObject <ENGroupContextObserverMiddleware> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _onGroupCache;
	/*^block*/id _onGroupCreate;
	/*^block*/id _onGroupUpdate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id onGroupCreate;                                  //@synthesize onGroupCreate=_onGroupCreate - In the implementation block
@property (nonatomic,copy) id onGroupCache;                                   //@synthesize onGroupCache=_onGroupCache - In the implementation block
@property (nonatomic,copy) id onGroupUpdate;                                  //@synthesize onGroupUpdate=_onGroupUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOnGroupCreate:(id)arg1 ;
-(void)groupContext:(id)arg1 didCreateGroup:(id)arg2 ;
-(void)groupContext:(id)arg1 didCacheGroup:(id)arg2 ;
-(void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3 ;
-(id)onGroupCreate;
-(id)onGroupCache;
-(id)onGroupUpdate;
-(void)setOnGroupCache:(id)arg1 ;
-(void)setOnGroupUpdate:(id)arg1 ;
@end

