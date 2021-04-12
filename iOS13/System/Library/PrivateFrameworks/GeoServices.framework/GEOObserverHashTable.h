/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)hasObservers;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 queue:(id)arg2 ;
@end

