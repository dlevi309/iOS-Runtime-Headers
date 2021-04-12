/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/MMCSOperationStateTimeRange.h>

@class NSDate, NSString;

@interface CKOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange> {

	unsigned long long _operationState;
	NSDate* _startDate;
	double _duration;

}

@property (retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
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
-(NSString *)description;
-(NSDate *)startDate;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)CKPropertiesDescription;
-(double)queueing;
-(double)executing;
-(unsigned long long)operationState;
-(id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(double)absoluteStart;
-(double)absoluteStop;
-(long long)compareStartTime:(id)arg1 ;
-(long long)compareStopTime:(id)arg1 ;
-(double)relativeStart;
@end

