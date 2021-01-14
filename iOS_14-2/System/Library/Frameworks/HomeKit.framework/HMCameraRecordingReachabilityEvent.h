/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMCameraRecordingEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface HMCameraRecordingReachabilityEvent : NSObject <HMCameraRecordingEvent, NSSecureCoding> {

	BOOL _reachable;
	NSUUID* _uniqueIdentifier;
	NSDate* _dateOfOccurrence;

}

@property (copy,readonly) NSUUID * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;              //@synthesize reachable=_reachable - In the implementation block
@property (copy,readonly) NSDate * dateOfOccurrence;                 //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isReachable;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(id)description;
-(id)initWithUniqueIdentifier:(id)arg1 dateOfOccurrence:(id)arg2 reachable:(BOOL)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)dateOfOccurrence;
-(BOOL)isEqual:(id)arg1 ;
@end

