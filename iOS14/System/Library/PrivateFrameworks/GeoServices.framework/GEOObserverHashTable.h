/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class Protocol, NSHashTable, NSObject;

@interface GEOObserverHashTable : NSObject {

	Protocol* _protocol;
	NSHashTable* _observers;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) BOOL hasObservers; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(BOOL)hasObservers;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 queue:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

