/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(double)confidence;
-(CLSLocationOfInterest *)locationOfInterest;
-(NSDateInterval *)visitInterval;
-(id)initWithIdentifier:(id)arg1 visitInterval:(id)arg2 confidence:(double)arg3 ;
-(void)setLocationOfInterest:(CLSLocationOfInterest *)arg1 ;
@end

