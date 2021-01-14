/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class NSArray, NSString;

@interface SNDirectionOfArrivalResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	float _azimuth;
	NSArray* _spatialSpectrum;
	SCD_Struct_SN4 _timeRange;

}

@property (assign,nonatomic) float azimuth;                          //@synthesize azimuth=_azimuth - In the implementation block
@property (nonatomic,retain) NSArray * spatialSpectrum;              //@synthesize spatialSpectrum=_spatialSpectrum - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;               //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(void)encodeWithCoder:(id)arg1 ;
-(float)azimuth;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAzimuth:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)spatialSpectrum;
-(void)setSpatialSpectrum:(NSArray *)arg1 ;
-(BOOL)isEqualToDirectionOfArrivalResult:(id)arg1 ;
@end

