/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface CMStrideCalibrationHistory : NSObject <SRSampling, NSSecureCoding, NSCopying> {

	NSArray* _calibrationTracks;
	NSArray* _rawSpeedToKValueBins;
	NSArray* _stepCadenceToStrideLengthBins;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * calibrationTracks;                          //@synthesize calibrationTracks=_calibrationTracks - In the implementation block
@property (nonatomic,retain) NSArray * rawSpeedToKValueBins;                       //@synthesize rawSpeedToKValueBins=_rawSpeedToKValueBins - In the implementation block
@property (nonatomic,retain) NSArray * stepCadenceToStrideLengthBins;              //@synthesize stepCadenceToStrideLengthBins=_stepCadenceToStrideLengthBins - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(NSArray *)calibrationTracks;
-(id)initWithCalibrationTracks:(id)arg1 rawSpeedToKValueBins:(id)arg2 stepCadenceToStrideLengthBins:(id)arg3 ;
-(void)setCalibrationTracks:(NSArray *)arg1 ;
-(NSArray *)rawSpeedToKValueBins;
-(void)setRawSpeedToKValueBins:(NSArray *)arg1 ;
-(NSArray *)stepCadenceToStrideLengthBins;
-(void)setStepCadenceToStrideLengthBins:(NSArray *)arg1 ;
-(void)dealloc;
@end

