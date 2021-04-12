/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDHealthServiceCharacteristic;

@interface _HDHSWriteOperation : NSObject {

	BOOL _expectResponse;
	HDHealthServiceCharacteristic* _characteristic;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDHealthServiceCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (assign,nonatomic) BOOL expectResponse;                                         //@synthesize expectResponse=_expectResponse - In the implementation block
@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setCharacteristic:(HDHealthServiceCharacteristic *)arg1 ;
-(HDHealthServiceCharacteristic *)characteristic;
-(BOOL)expectResponse;
-(void)setExpectResponse:(BOOL)arg1 ;
@end

