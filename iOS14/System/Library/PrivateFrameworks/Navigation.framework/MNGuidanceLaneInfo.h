/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, NSDictionary;

@interface MNGuidanceLaneInfo : NSObject <NSSecureCoding> {

	BOOL _isForManeuver;
	int _composedGuidanceEventIndex;
	NSUUID* _uniqueID;
	NSArray* _lanes;
	NSDictionary* _variableOverrides;
	long long _distanceDetailLevel;
	NSArray* _titles;
	NSArray* _instructions;

}

@property (nonatomic,readonly) NSUUID * uniqueID;                             //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL isForManeuver;                            //@synthesize isForManeuver=_isForManeuver - In the implementation block
@property (nonatomic,readonly) NSArray * lanes;                               //@synthesize lanes=_lanes - In the implementation block
@property (nonatomic,readonly) NSArray * titles;                              //@synthesize titles=_titles - In the implementation block
@property (nonatomic,readonly) NSArray * instructions;                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSDictionary * variableOverrides;              //@synthesize variableOverrides=_variableOverrides - In the implementation block
@property (nonatomic,readonly) long long distanceDetailLevel;                 //@synthesize distanceDetailLevel=_distanceDetailLevel - In the implementation block
@property (nonatomic,readonly) int composedGuidanceEventIndex;                //@synthesize composedGuidanceEventIndex=_composedGuidanceEventIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)lanes;
-(NSArray *)instructions;
-(NSUUID *)uniqueID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)titles;
-(long long)distanceDetailLevel;
-(NSDictionary *)variableOverrides;
-(int)composedGuidanceEventIndex;
-(id)initWithID:(id)arg1 isForManeuver:(BOOL)arg2 lanes:(id)arg3 titles:(id)arg4 instructions:(id)arg5 variableOverrides:(id)arg6 distanceDetailLevel:(long long)arg7 composedGuidanceEventIndex:(int)arg8 ;
-(BOOL)isForManeuver;
@end

