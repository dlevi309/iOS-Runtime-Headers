/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@interface PMLTrainingLogEntry : NSObject {

	double _timestamp;
	unsigned long long _serverIteration;

}

@property (readonly) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long serverIteration;              //@synthesize serverIteration=_serverIteration - In the implementation block
-(double)timestamp;
-(id)initWithTimestamp:(double)arg1 serverIteration:(unsigned long long)arg2 ;
-(unsigned long long)serverIteration;
@end

