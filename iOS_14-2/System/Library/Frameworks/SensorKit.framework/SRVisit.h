/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SRSampling.h>

@class NSDateInterval, NSUUID, NSString;

@interface SRVisit : NSObject <SRSampleExporting, NSSecureCoding, SRSampling> {

	double _distanceFromHome;
	NSDateInterval* _arrivalDateInterval;
	NSDateInterval* _departureDateInterval;
	long long _locationCategory;
	NSUUID* _identifier;

}

@property (copy,readonly) NSString * label; 
@property (readonly) double distanceFromHome;                             //@synthesize distanceFromHome=_distanceFromHome - In the implementation block
@property (readonly) NSDateInterval * arrivalDateInterval;                //@synthesize arrivalDateInterval=_arrivalDateInterval - In the implementation block
@property (readonly) NSDateInterval * departureDateInterval;              //@synthesize departureDateInterval=_departureDateInterval - In the implementation block
@property (readonly) long long locationCategory;                          //@synthesize locationCategory=_locationCategory - In the implementation block
@property (readonly) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(void)dealloc;
-(id)sr_dictionaryRepresentation;
-(double)distanceFromHome;
-(id)initWithDistanceFromHome:(double)arg1 arrive:(id)arg2 depart:(id)arg3 category:(long long)arg4 uuid:(id)arg5 ;
-(NSDateInterval *)arrivalDateInterval;
-(NSDateInterval *)departureDateInterval;
-(long long)locationCategory;
@end

