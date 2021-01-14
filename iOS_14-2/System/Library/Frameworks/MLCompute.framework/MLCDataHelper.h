/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@interface MLCDataHelper : NSObject
+(id)createDataWithFloatValue:(float)arg1 count:(unsigned long long)arg2 ;
+(void)fillData:(id)arg1 withFloatValue:(float)arg2 ;
+(BOOL)convertFp32toFp16:(unsigned long long)arg1 fp32Values:(float*)arg2 fp16Values:( *)arg3 ;
+(BOOL)convertFp16toFp32:(unsigned long long)arg1 fp16Values:( *)arg2 fp32Values:(float*)arg3 ;
@end

