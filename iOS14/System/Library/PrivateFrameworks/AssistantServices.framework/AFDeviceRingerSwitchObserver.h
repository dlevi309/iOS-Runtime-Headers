/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AFNotifyObserver, NSHashTable, NSString;

@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	AFNotifyObserver* _notifyObserver;
	NSHashTable* _listeners;
	BOOL _isActive;

}

@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(void)addListener:(id)arg1 ;
-(id)init;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)removeListener:(id)arg1 ;
-(long long)state;
-(void)_updateStateWithNotifyState:(unsigned long long)arg1 ;
@end

