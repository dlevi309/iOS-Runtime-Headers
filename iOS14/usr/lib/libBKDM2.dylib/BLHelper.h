/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/


@interface BLHelper : NSObject
+(id)stringFromFrameType:(unsigned)arg1 ;
+(id)objectOrNSNull:(id)arg1 ;
+(id)numberFromFloat:(float)arg1 ;
+(id)bootArgs;
+(id)deviceBatteryLevel;
+(id)stringFromSequenceType:(unsigned)arg1 ;
+(id)buildVersion;
+(void)writeTailspinToFile:(id)arg1 ;
+(id)deviceSerialNumber;
+(void)displayUserPrompt:(unsigned long long)arg1 strings:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)numberFromDouble:(double)arg1 ;
+(id)numberForBootArg:(id)arg1 ;
+(id)encryptData:(id)arg1 ;
@end

