/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
*/

#import <MMCS/MMCSOperationStateTimeRange.h>
@class NSDate;


@protocol MMCSOperationStateTimeRange <NSObject>
@property (readonly) unsigned long long operationState; 
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (readonly) double absoluteStart; 
@property (readonly) double absoluteStop; 
@required
-(NSDate *)startDate;
-(long long)compareStopTime:(id)arg1;
-(long long)compareStartTime:(id)arg1;
-(double)absoluteStop;
-(double)absoluteStart;
-(double)duration;
-(unsigned long long)operationState;

@end


@class NSDate, NSString;

@interface MMCSOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange> {

	unsigned long long _operationState;
	NSDate* _startDate;
	double _duration;

}

@property (nonatomic,retain) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (readonly) unsigned long long operationState;              //@synthesize operationState=_operationState - In the implementation block
@property (readonly) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (readonly) double queueing; 
@property (readonly) double executing; 
@property (readonly) double absoluteStart; 
@property (readonly) double relativeStart; 
@property (readonly) double absoluteStop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForOperationState:(unsigned long long)arg1 ;
+(id)descriptionWithOperationState:(unsigned long long)arg1 absoluteStart:(double)arg2 duration:(double)arg3 ;
+(id)describedSortedRanges:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(long long)compareStopTime:(id)arg1 ;
-(long long)compareStartTime:(id)arg1 ;
-(id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(double)absoluteStop;
-(NSString *)description;
-(double)relativeStart;
-(double)queueing;
-(double)absoluteStart;
-(double)duration;
-(double)executing;
-(unsigned long long)operationState;
@end

