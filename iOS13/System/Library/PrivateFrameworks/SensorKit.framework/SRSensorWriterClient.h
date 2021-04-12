/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSensorKitServiceClientWriting.h>

@class SRSensorWriter;

@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting> {

	SRSensorWriter* _writer;

}

@property (__weak) SRSensorWriter * writer;              //@synthesize writer=_writer - In the implementation block
+(id)sensorWriterClientWithWriter:(id)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)setWriter:(SRSensorWriter *)arg1 ;
-(SRSensorWriter *)writer;
-(void)resetDatastoreFiles:(id)arg1 ;
-(id)initWithWriter:(id)arg1 ;
@end

