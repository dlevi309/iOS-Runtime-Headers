/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(void)_invalidate;
-(unsigned long long)state;
-(id)initWithName:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 delegate:(id)arg4 ;
-(void)_handleNotificationWithToken:(int)arg1 ;
-(void)_updateStateWithToken:(int)arg1 ;
-(void)getStateWithCompletion:(/*^block*/id)arg1 ;
@end

