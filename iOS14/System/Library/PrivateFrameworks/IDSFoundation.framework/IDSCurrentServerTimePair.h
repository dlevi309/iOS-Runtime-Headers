/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@interface IDSCurrentServerTimePair : NSObject {

	unsigned long long _initialProcessMachTime;
	unsigned long long _initialServerTimeInNanoSeconds;

}

@property (nonatomic,readonly) unsigned long long initialProcessMachTime;                      //@synthesize initialProcessMachTime=_initialProcessMachTime - In the implementation block
@property (nonatomic,readonly) unsigned long long initialServerTimeInNanoSeconds;              //@synthesize initialServerTimeInNanoSeconds=_initialServerTimeInNanoSeconds - In the implementation block
-(unsigned long long)initialProcessMachTime;
-(unsigned long long)initialServerTimeInNanoSeconds;
-(id)initWithInitialProcessMachTime:(unsigned long long)arg1 initialServerTimeInNanoSeconds:(unsigned long long)arg2 ;
@end

