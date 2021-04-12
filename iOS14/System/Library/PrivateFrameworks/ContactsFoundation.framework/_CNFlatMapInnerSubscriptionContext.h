/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNCancelable;
@class CNSuspendableSchedulerDecorator;

@interface _CNFlatMapInnerSubscriptionContext : NSObject {

	CNSuspendableSchedulerDecorator* _decorator;
	id<CNCancelable> _token;

}

@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * decorator;              //@synthesize decorator=_decorator - In the implementation block
@property (nonatomic,readonly) id<CNCancelable> token;                                   //@synthesize token=_token - In the implementation block
-(CNSuspendableSchedulerDecorator *)decorator;
-(id)initWithDecorator:(id)arg1 token:(id)arg2 ;
-(id<CNCancelable>)token;
@end

