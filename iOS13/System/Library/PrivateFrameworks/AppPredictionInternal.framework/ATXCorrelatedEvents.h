/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class ATXDuetEvent;

@interface ATXCorrelatedEvents : NSObject {

	ATXDuetEvent* _firstEvent;
	ATXDuetEvent* _secondEvent;

}

@property (nonatomic,readonly) ATXDuetEvent * firstEvent;               //@synthesize firstEvent=_firstEvent - In the implementation block
@property (nonatomic,readonly) ATXDuetEvent * secondEvent;              //@synthesize secondEvent=_secondEvent - In the implementation block
-(ATXDuetEvent *)firstEvent;
-(ATXDuetEvent *)secondEvent;
-(id)initWithFirstEvent:(id)arg1 secondEvent:(id)arg2 ;
@end

