/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocationOfInterest, NSDate, NSArray, RTReceipt, RTSource;

@interface RTPredictedLocationOfInterest : NSObject <NSSecureCoding> {

	RTLocationOfInterest* _locationOfInterest;
	double _confidence;
	NSDate* _nextEntryTime;
	long long _modeOfTransportation;
	NSArray* _sources;
	RTReceipt* _receipt;

}

@property (assign,nonatomic) long long modeOfTransportation;                           //@synthesize modeOfTransportation=_modeOfTransportation - In the implementation block
@property (nonatomic,retain) RTReceipt * receipt;                                      //@synthesize receipt=_receipt - In the implementation block
@property (nonatomic,readonly) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (nonatomic,readonly) double confidence;                                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDate * nextEntryTime;                                 //@synthesize nextEntryTime=_nextEntryTime - In the implementation block
@property (nonatomic,readonly) RTSource * source; 
@property (nonatomic,readonly) NSArray * sources;                                      //@synthesize sources=_sources - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(RTSource *)source;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(NSArray *)sources;
-(RTLocationOfInterest *)locationOfInterest;
-(id)initWithLocationOfInterest:(id)arg1 confidence:(double)arg2 nextEntryTime:(id)arg3 modeOfTransportation:(long long)arg4 sources:(id)arg5 receipt:(id)arg6 ;
-(NSDate *)nextEntryTime;
-(long long)modeOfTransportation;
-(id)initWithLocationOfInterest:(id)arg1 confidence:(double)arg2 nextEntryTime:(id)arg3 modeOfTransportation:(long long)arg4 sources:(id)arg5 ;
-(void)setModeOfTransportation:(long long)arg1 ;
-(RTReceipt *)receipt;
-(void)setReceipt:(RTReceipt *)arg1 ;
@end

