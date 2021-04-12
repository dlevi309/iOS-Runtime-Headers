/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)removeAllListeners;
-(void)_startObservingMemoryPressureWithOptions:(unsigned long long)arg1 ;
-(void)_stopObservingMemoryPressure;
-(void)_addListener:(id)arg1 ;
-(void)_removeListener:(id)arg1 ;
-(void)_removeAllListeners;
-(void)_handleMemoryPressureWithFlags:(unsigned long long)arg1 ;
-(void)getCurrentConditionWithCompletion:(/*^block*/id)arg1 ;
@end

