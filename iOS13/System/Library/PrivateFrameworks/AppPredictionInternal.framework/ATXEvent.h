/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol NSSecureCoding;
@class NSObject, NSDate;

@interface ATXEvent : NSObject {

	NSObject*<NSSecureCoding> _event;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSObject*<NSSecureCoding> event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
+(void)joinLaunchEvents:(id)arg1 withVisits:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSObject*<NSSecureCoding>)event;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(id)initWithEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
@end

