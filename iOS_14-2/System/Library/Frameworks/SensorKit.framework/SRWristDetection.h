/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
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
-(BOOL)onWrist;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)sr_dictionaryRepresentation;
-(unsigned char)wristDetectionRawValue;
-(long long)wristLocation;
-(long long)crownOrientation;
-(void)setWristDetectionRawValue:(unsigned char)arg1 ;
@end

