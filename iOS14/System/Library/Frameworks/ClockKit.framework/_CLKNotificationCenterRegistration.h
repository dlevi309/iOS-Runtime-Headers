/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
-(SEL)selector;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(void)setSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)recycledCopy;
@end

