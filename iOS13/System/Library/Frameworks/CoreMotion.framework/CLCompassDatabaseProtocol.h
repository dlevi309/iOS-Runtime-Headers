/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol CLCompassDatabaseProtocol <CLNotifierServiceProtocol>
@required
-(void)dumpDatabase:(id)arg1 onCompletion:(/*^block*/id)arg2;
-(void)getBiasWithMagneticField:(SCD_Struct_CM1)arg1 acceleration:(SCD_Struct_CM1)arg2;
-(void)setBias:(SCD_Struct_CM1)arg1 withMagneticField:(SCD_Struct_CM1)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
-(void)doAsync:(/*^block*/id)arg1;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1;
-(int)syncgetPendingSetBiasCount;
-(BOOL)syncgetLookupBiasWithMagneticField:(SCD_Struct_CM1)arg1 acceleration:(SCD_Struct_CM1)arg2 bias:(SCD_Struct_CM1*)arg3 level:(int*)arg4 noResults:(BOOL*)arg5;

@end

