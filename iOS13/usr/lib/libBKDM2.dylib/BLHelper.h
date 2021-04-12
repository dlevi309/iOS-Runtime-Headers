/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libBKDM2.dylib
*/


@interface BLHelper : NSObject
+(id)buildVersion;
+(id)deviceSerialNumber;
+(id)bootArgs;
+(id)encryptData:(id)arg1 ;
+(id)stringFromSequenceType:(unsigned)arg1 ;
+(id)stringFromFrameType:(unsigned)arg1 ;
+(id)numberForBootArg:(id)arg1 ;
+(id)numberFromDouble:(double)arg1 ;
+(id)numberFromFloat:(float)arg1 ;
+(id)deviceBatteryLevel;
+(void)writeTailspinToFile:(id)arg1 ;
+(void)displayUserPrompt:(unsigned long long)arg1 strings:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)objectOrNSNull:(id)arg1 ;
@end

