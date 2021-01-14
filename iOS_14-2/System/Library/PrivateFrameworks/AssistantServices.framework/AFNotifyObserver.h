/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFNotifyObserverDelegate;
@class NSObject, NSString;

@interface AFNotifyObserver : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _options;
	id<AFNotifyObserverDelegate> _delegate;
	int _registrationToken;
	struct {
		unsigned delegateRespondsToDidReceiveNotificationWithToken : 1;
		unsigned delegateRespondsToDidChangeStateFromTo : 1;
	}  _flags;
	unsigned long long _state;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidate;
-(id)initWithName:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 delegate:(id)arg4 ;
-(NSString *)name;
-(NSString *)description;
-(void)_handleNotificationWithToken:(int)arg1 ;
-(void)_updateStateWithToken:(int)arg1 ;
-(void)getStateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)state;
-(void)invalidate;
-(void)dealloc;
@end

