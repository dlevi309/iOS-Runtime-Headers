/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDate, NSString;

@interface ATXValueEstimationEvent : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _eventOwner;
	NSString* _eventType;

}

@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSString * eventOwner;              //@synthesize eventOwner=_eventOwner - In the implementation block
@property (nonatomic,readonly) NSString * eventType;               //@synthesize eventType=_eventType - In the implementation block
-(id)init;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)eventType;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventOwner:(id)arg3 eventType:(id)arg4 ;
-(NSString *)eventOwner;
@end

