/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
-(NSNumber *)registrationToken;
-(void)setRegistrationToken:(NSNumber *)arg1 ;
-(id)initWithNotificationName:(id)arg1 registrationToken:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

