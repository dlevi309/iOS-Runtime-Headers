/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/SRSampleExporting.h>

@class NSString;

@interface SRWristDetection : NSObject <SRSampling, SRSampleExporting> {

	unsigned char _wristDetectionRawValue;

}

@property (assign,nonatomic) unsigned char wristDetectionRawValue;              //@synthesize wristDetectionRawValue=_wristDetectionRawValue - In the implementation block
@property (readonly) BOOL onWrist; 
@property (readonly) long long wristLocation; 
@property (readonly) long long crownOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)sr_dictionaryRepresentation;
-(long long)wristLocation;
-(long long)crownOrientation;
-(unsigned char)wristDetectionRawValue;
-(BOOL)onWrist;
-(void)setWristDetectionRawValue:(unsigned char)arg1 ;
@end

