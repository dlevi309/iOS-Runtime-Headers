/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


@interface _CLKNotificationCenterRegistration : NSObject {

	unsigned long long _registrationIdentifier;
	id _observer;
	SEL _selector;

}

@property (assign,nonatomic,__weak) id observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;                    //@synthesize selector=_selector - In the implementation block
+(void)recycleRegistration:(id)arg1 ;
+(id)recycledRegistrationWithIdentifier:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SEL)selector;
-(id)observer;
-(void)setSelector:(SEL)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)recycledCopy;
@end

