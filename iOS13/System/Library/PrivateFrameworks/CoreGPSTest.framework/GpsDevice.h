/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreGPSTest.framework/CoreGPSTest
*/


#import <CoreGPSTest/CoreGPSTest-Structs.h>
@interface GpsDevice : NSObject {

	GpsFactoryTest* _fTestDevice;
	Options _fTestOptions;

}

@property (assign) GpsFactoryTest* fTestDevice;              //@synthesize fTestDevice=_fTestDevice - In the implementation block
@property (assign) Options fTestOptions;                     //@synthesize fTestOptions=_fTestOptions - In the implementation block
-(void)dealloc;
-(id)init:(id*)arg1 ;
-(BOOL)getGpsConfiguration:(SCD_Struct_Gp8*)arg1 error:(id*)arg2 ;
-(BOOL)testTimeMarkGpio:(id*)arg1 ;
-(BOOL)testApSignalGpio:(id*)arg1 ;
-(BOOL)testCommPing:(id)arg1 error:(id*)arg2 ;
-(BOOL)testGpsCw:(id)arg1 error:(id*)arg2 ;
-(BOOL)testGpsModulated:(id)arg1 gpsPrn:(int)arg2 error:(id*)arg3 ;
-(BOOL)testPeriodic:(id)arg1 error:(id*)arg2 ;
-(BOOL)testPowerMode:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)testExternalFreqAssistance:(id*)arg1 ;
-(void)flushLogs;
-(GpsFactoryTest*)fTestDevice;
-(void)setFTestDevice:(GpsFactoryTest*)arg1 ;
-(Options)fTestOptions;
-(void)setFTestOptions:(Options)arg1 ;
@end

