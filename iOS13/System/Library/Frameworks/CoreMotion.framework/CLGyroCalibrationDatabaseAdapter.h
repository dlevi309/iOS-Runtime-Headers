/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <libobjc.A.dylib/CLGyroCalibrationDatabaseProtocol.h>

@class NSString;

@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)beginService;
-(void)endService;
-(void)dumpDatabase:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(BOOL)syncgetWipeDatabase;
-(int)syncgetNumTemperatures;
-(BOOL)syncgetSupportsMiniCalibration;
-(BOOL)syncgetBiasFit:(SCD_Struct_CM344*)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(CLGyroCalibrationDatabase*)adaptee;
-(BOOL)syncgetGyroStatsWithBias:(SCD_Struct_CM1*)arg1 slope:(SCD_Struct_CM1*)arg2 l2Error:(SCD_Struct_CM1*)arg3 isDynamic:(BOOL)arg4 deltaBias:(SCD_Struct_CM1*)arg5 deltaSlope:(SCD_Struct_CM1*)arg6 deltaError:(SCD_Struct_CM1*)arg7 isDeltaDynamic:(BOOL)arg8 ;
-(int)syncgetMaxDynamicTemperature;
-(void)startFactoryGYTT;
-(int)syncgetNonFactoryRoundCount;
-(double)syncgetLastMiniCalibration;
-(BOOL)syncgetInsertWithBias:(const SCD_Struct_CM1*)arg1 variance:(const SCD_Struct_CM1*)arg2 temperature:(float)arg3 timestamp:(double)arg4 ;
@end

