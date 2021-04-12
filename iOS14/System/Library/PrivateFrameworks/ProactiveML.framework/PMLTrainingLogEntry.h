/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@interface PMLTrainingLogEntry : NSObject {

	double _timestamp;
	unsigned long long _serverIteration;

}

@property (nonatomic,readonly) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long serverIteration;              //@synthesize serverIteration=_serverIteration - In the implementation block
-(double)timestamp;
-(id)initWithTimestamp:(double)arg1 serverIteration:(unsigned long long)arg2 ;
-(unsigned long long)serverIteration;
@end

