/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/

#import <BaseBoard/BSSimpleAssertion.h>

@class ITIdleTimerConfiguration, NSString;

@interface ITIdleTimerAssertion : BSSimpleAssertion {

	ITIdleTimerConfiguration* _configuration;

}

@property (getter=_uniqueReason,nonatomic,copy,readonly) NSString * uniqueReason; 
@property (nonatomic,copy,readonly) ITIdleTimerConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
-(ITIdleTimerConfiguration *)configuration;
-(id)succinctDescriptionBuilder;
-(id)_uniqueReason;
-(id)_initWithConfiguration:(id)arg1 forReason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
@end

