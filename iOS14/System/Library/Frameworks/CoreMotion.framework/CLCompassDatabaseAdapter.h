/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <libobjc.A.dylib/CLCompassDatabaseProtocol.h>

@class NSString;

@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>

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
-(int)syncgetPendingSetBiasCount;
-(id)init;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)dumpDatabase:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)setBias:(SCD_Struct_CM1)arg1 withMagneticField:(SCD_Struct_CM1)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5 ;
-(void)getBiasWithMagneticField:(SCD_Struct_CM1)arg1 acceleration:(SCD_Struct_CM1)arg2 ;
-(void)beginService;
-(BOOL)syncgetLookupBiasWithMagneticField:(SCD_Struct_CM1)arg1 acceleration:(SCD_Struct_CM1)arg2 bias:(SCD_Struct_CM1*)arg3 level:(int*)arg4 noResults:(BOOL*)arg5 ;
-(void)doAsync:(/*^block*/id)arg1 ;
-(CLCompassDatabase*)adaptee;
-(void)endService;
@end

