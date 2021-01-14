/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSHashTable, NSString;

@interface AFMemoryPressureObserver : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned long long _memoryPressureFlags;
	NSHashTable* _listeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(void)addListener:(id)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)removeAllListeners;
-(void)getCurrentConditionWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopObservingMemoryPressure;
-(void)_handleMemoryPressureWithFlags:(unsigned long long)arg1 ;
-(void)_removeAllListeners;
-(void)removeListener:(id)arg1 ;
-(void)invalidate;
-(void)_addListener:(id)arg1 ;
-(void)_startObservingMemoryPressureWithOptions:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)_removeListener:(id)arg1 ;
@end

