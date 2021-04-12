/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocationOfInterest, NSDate, NSArray, RTSource;

@interface RTPredictedLocationOfInterest : NSObject <NSSecureCoding> {

	RTLocationOfInterest* _locationOfInterest;
	double _confidence;
	NSDate* _nextEntryTime;
	long long _modeOfTransportation;
	NSArray* _sources;

}

@property (assign,nonatomic) long long modeOfTransportation;                           //@synthesize modeOfTransportation=_modeOfTransportation - In the implementation block
@property (nonatomic,readonly) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (nonatomic,readonly) double confidence;                                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDate * nextEntryTime;                                 //@synthesize nextEntryTime=_nextEntryTime - In the implementation block
@property (nonatomic,readonly) RTSource * source; 
@property (nonatomic,readonly) NSArray * sources;                                      //@synthesize sources=_sources - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)sources;
-(RTLocationOfInterest *)locationOfInterest;
-(NSDate *)nextEntryTime;
-(long long)modeOfTransportation;
-(void)setModeOfTransportation:(long long)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 confidence:(double)arg2 nextEntryTime:(id)arg3 modeOfTransportation:(long long)arg4 sources:(id)arg5 ;
-(id)description;
-(void)setConfidence:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(RTSource *)source;
@end

