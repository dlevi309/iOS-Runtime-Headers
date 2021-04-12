/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface MSPUserRoutingPreferences : NSObject <NSSecureCoding> {

	BOOL _avoidTolls;
	BOOL _avoidHighways;
	NSDate* _timestamp;
	long long _defaultDisabledTransitModes;

}

@property (nonatomic,readonly) NSDate * timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL avoidTolls;                                    //@synthesize avoidTolls=_avoidTolls - In the implementation block
@property (nonatomic,readonly) BOOL avoidHighways;                                 //@synthesize avoidHighways=_avoidHighways - In the implementation block
@property (nonatomic,readonly) long long defaultDisabledTransitModes;              //@synthesize defaultDisabledTransitModes=_defaultDisabledTransitModes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)avoidHighways;
-(BOOL)avoidTolls;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(long long)defaultDisabledTransitModes;
-(id)initWithAvoidTolls:(BOOL)arg1 avoidHighways:(BOOL)arg2 defaultDisabledTransitModes:(long long)arg3 ;
-(id)createUserPreferences;
@end

