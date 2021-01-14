/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <libobjc.A.dylib/CLGyroCalibrationDatabaseProtocol.h>

@class NSString;

@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>

@property (assign,nonatomic) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(id)getSilo;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)syncgetGyroStatsWithBias:(SCD_Struct_CM1*)arg1 slope:(SCD_Struct_CM1*)arg2 l2Error:(SCD_Struct_CM1*)arg3 isDynamic:(BOOL)arg4 deltaBias:(SCD_Struct_CM1*)arg5 deltaSlope:(SCD_Struct_CM1*)arg6 deltaError:(SCD_Struct_CM1*)arg7 isDeltaDynamic:(BOOL)arg8 ;
-(BOOL)syncgetInsertWithBias:(const SCD_Struct_CM1*)arg1 variance:(const SCD_Struct_CM1*)arg2 temperature:(float)arg3 timestamp:(double)arg4 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)dumpDatabase:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(int)syncgetNonFactoryRoundCount;
-(BOOL)syncgetSupportsMiniCalibration;
-(void)startFactoryGYTT;
-(double)syncgetLastMiniCalibration;
-(int)syncgetNumTemperatures;
-(BOOL)syncgetBiasFit:(SCD_Struct_CM34*)arg1 ;
-(void)beginService;
-(int)syncgetMaxDynamicTemperature;
-(void)doAsync:(/*^block*/id)arg1 ;
-(BOOL)syncgetWipeDatabase;
-(CLGyroCalibrationDatabase*)adaptee;
-(void)endService;
@end

