/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(BOOL)isValid;
-(id)_target;
-(NSString *)_notificationName;
-(void)_setTarget:(id)arg1 ;
-(void)_stopObserving;
-(void)_startObserving;
-(id)_dispatcher;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3 ;
-(void)processHandler:(SEL)arg1 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 startObserving:(BOOL)arg4 ;
-(void)_setNotificationName:(id)arg1 ;
-(void)_setDispatcher:(/*^block*/id)arg1 ;
-(id)_notificationTypeDescription;
-(void)_handleNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3 ;
@end

