/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSensorKitServiceClientWriting.h>

@class SRSensorWriter;

@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting> {

	SRSensorWriter* _writer;

}

@property (__weak) SRSensorWriter * writer;              //@synthesize writer=_writer - In the implementation block
+(id)sensorWriterClientWithWriter:(id)arg1 ;
-(SRSensorWriter *)writer;
-(id)initWithWriter:(id)arg1 ;
-(void)resetDatastoreFiles:(id)arg1 ;
-(void)setWriter:(SRSensorWriter *)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
@end

