/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDateInterval, CLSLocationOfInterest;

@interface CLSLocationOfInterestVisit : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSDateInterval* _visitInterval;
	double _confidence;
	CLSLocationOfInterest* _locationOfInterest;

}

@property (nonatomic,readonly) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDateInterval * visitInterval;                               //@synthesize visitInterval=_visitInterval - In the implementation block
@property (nonatomic,readonly) double confidence;                                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic,__weak) CLSLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(id)initWithIdentifier:(id)arg1 visitInterval:(id)arg2 confidence:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CLSLocationOfInterest *)locationOfInterest;
-(id)description;
-(NSDateInterval *)visitInterval;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocationOfInterest:(CLSLocationOfInterest *)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

