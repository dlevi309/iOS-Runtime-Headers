/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
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
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)label;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(id)sr_dictionaryRepresentation;
-(id)initWithDistanceFromHome:(double)arg1 arrive:(id)arg2 depart:(id)arg3 category:(long long)arg4 uuid:(id)arg5 ;
-(double)distanceFromHome;
-(NSDateInterval *)arrivalDateInterval;
-(NSDateInterval *)departureDateInterval;
-(long long)locationCategory;
@end

