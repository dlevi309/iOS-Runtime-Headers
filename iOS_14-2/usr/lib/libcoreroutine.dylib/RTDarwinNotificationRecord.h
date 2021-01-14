/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSString, NSNumber;

@interface RTDarwinNotificationRecord : NSObject {

	NSString* _notificationName;
	NSNumber* _registrationToken;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * notificationName;               //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,copy) NSNumber * registrationToken;              //@synthesize registrationToken=_registrationToken - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
-(NSNumber *)registrationToken;
-(id)init;
-(void)setHandler:(id)arg1 ;
-(void)setNotificationName:(NSString *)arg1 ;
-(void)setRegistrationToken:(NSNumber *)arg1 ;
-(id)initWithNotificationName:(id)arg1 registrationToken:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)handler;
-(NSString *)notificationName;
@end

