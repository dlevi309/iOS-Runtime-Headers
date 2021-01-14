/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
*/


@class NSString;

@interface VISAXNotificationHandler : NSObject {

	NSString* _notificationName;
	id _target;
	/*^block*/id _dispatcher;
	unsigned long long _observerIdentifier;
	BOOL _valid;

}

@property (setter=_setNotificationName:,nonatomic,retain) NSString * _notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
@property (setter=_setTarget:,nonatomic,retain) id _target;                                          //@synthesize target=_target - In the implementation block
@property (setter=_setDispatcher:,nonatomic,copy) id _dispatcher; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                            //@synthesize valid=_valid - In the implementation block
+(unsigned long long)_safelyRegisterObserver:(id)arg1 ;
+(void)_safelyRemoveObserverForIdentifier:(unsigned long long)arg1 ;
+(id)_safelyGetObserverForIdentifier:(unsigned long long)arg1 ;
-(id)_target;
-(id)description;
-(void)_stopObserving;
-(BOOL)isValid;
-(id)_dispatcher;
-(void)invalidate;
-(NSString *)_notificationName;
-(void)_startObserving;
-(void)_setTarget:(id)arg1 ;
-(void)dealloc;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3 ;
-(void)processHandler:(SEL)arg1 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 startObserving:(BOOL)arg4 ;
-(void)_setNotificationName:(id)arg1 ;
-(void)_setDispatcher:(/*^block*/id)arg1 ;
-(id)_notificationTypeDescription;
-(void)_handleNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3 ;
@end

