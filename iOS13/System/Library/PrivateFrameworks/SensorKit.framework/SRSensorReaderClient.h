/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSensorKitServiceClientReading.h>

@class SRSensorReader;

@interface SRSensorReaderClient : NSObject <SRSensorKitServiceClientReading> {

	SRSensorReader* _reader;

}

@property (__weak) SRSensorReader * reader;              //@synthesize reader=_reader - In the implementation block
+(id)readerClientWithReader:(id)arg1 ;
-(SRSensorReader *)reader;
-(void)resetDatastoreFiles:(id)arg1 ;
-(id)initWithReader:(id)arg1 ;
-(void)setReader:(SRSensorReader *)arg1 ;
@end

