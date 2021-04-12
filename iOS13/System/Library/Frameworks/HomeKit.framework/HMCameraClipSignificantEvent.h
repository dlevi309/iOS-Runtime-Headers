/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface HMCameraClipSignificantEvent : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uniqueIdentifier;
	unsigned long long _reason;
	NSDate* _dateOfOccurrence;
	double _timeOffsetWithinClip;
	unsigned long long _confidenceLevel;

}

@property (copy,readonly) NSUUID * uniqueIdentifier;                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long reason;                       //@synthesize reason=_reason - In the implementation block
@property (copy,readonly) NSDate * dateOfOccurrence;                  //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
@property (readonly) double timeOffsetWithinClip;                     //@synthesize timeOffsetWithinClip=_timeOffsetWithinClip - In the implementation block
@property (readonly) unsigned long long confidenceLevel;              //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
@property (readonly) BOOL canAskForUserFeedback; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(NSUUID *)uniqueIdentifier;
-(unsigned long long)confidenceLevel;
-(BOOL)canAskForUserFeedback;
-(id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 timeOffsetWithinClip:(double)arg3 dateOfOccurrence:(id)arg4 confidenceLevel:(unsigned long long)arg5 ;
-(double)timeOffsetWithinClip;
-(NSDate *)dateOfOccurrence;
-(id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 ;
@end

