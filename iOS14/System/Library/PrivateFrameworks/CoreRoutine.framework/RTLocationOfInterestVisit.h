/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocation, NSUUID, NSDate;

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding> {

	RTLocation* _location;
	NSUUID* _identifier;
	NSDate* _entryDate;
	NSDate* _exitDate;
	double _locationOfInterestConfidence;
	unsigned long long _locationOfInterestSource;

}

@property (nonatomic,readonly) unsigned long long locationOfInterestSource;              //@synthesize locationOfInterestSource=_locationOfInterestSource - In the implementation block
@property (nonatomic,readonly) RTLocation * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * entryDate;                                       //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,readonly) NSDate * exitDate;                                        //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) double locationOfInterestConfidence;                      //@synthesize locationOfInterestConfidence=_locationOfInterestConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)exit;
-(id)init;
-(RTLocation *)location;
-(double)locationOfInterestConfidence;
-(NSDate *)exitDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)entry;
-(id)initWithIdentifier:(id)arg1 entry:(id)arg2 exit:(id)arg3 location:(id)arg4 locationOfInterestConfidence:(double)arg5 locationOfInterestSource:(unsigned long long)arg6 ;
-(unsigned long long)locationOfInterestSource;
-(id)description;
-(id)exitTime;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)entryTime;
-(NSUUID *)identifier;
-(NSDate *)entryDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

