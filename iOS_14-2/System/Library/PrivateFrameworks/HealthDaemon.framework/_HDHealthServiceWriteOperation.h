/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDHealthServiceCharacteristic;

@interface _HDHealthServiceWriteOperation : NSObject {

	BOOL _expectResponse;
	HDHealthServiceCharacteristic* _characteristic;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDHealthServiceCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (assign,nonatomic) BOOL expectResponse;                                         //@synthesize expectResponse=_expectResponse - In the implementation block
@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(HDHealthServiceCharacteristic *)characteristic;
-(void)setCharacteristic:(HDHealthServiceCharacteristic *)arg1 ;
-(BOOL)expectResponse;
-(void)setExpectResponse:(BOOL)arg1 ;
@end

