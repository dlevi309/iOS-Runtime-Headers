/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@interface BKMatchEvent : NSObject {

	BOOL _result;
	unsigned long long _timeStamp;

}

@property (assign,nonatomic) BOOL result;                               //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
+(id)matchEventWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setResult:(BOOL)arg1 ;
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(BOOL)result;
@end

