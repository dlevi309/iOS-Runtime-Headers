/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@interface BKMatchEvent : NSObject {

	BOOL _result;
	unsigned long long _timeStamp;

}

@property (assign,nonatomic) BOOL result;                               //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
+(id)matchEventWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)result;
-(void)setResult:(BOOL)arg1 ;
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
@end

