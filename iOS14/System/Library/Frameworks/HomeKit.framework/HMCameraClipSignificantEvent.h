/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCameraSignificantEvent.h>

@class NSUUID;

@interface HMCameraClipSignificantEvent : HMCameraSignificantEvent {

	double _timeOffsetWithinClip;
	NSUUID* _clipUUID;

}

@property (readonly) double timeOffsetWithinClip;              //@synthesize timeOffsetWithinClip=_timeOffsetWithinClip - In the implementation block
@property (copy,readonly) NSUUID * clipUUID;                   //@synthesize clipUUID=_clipUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)clipUUID;
-(id)attributeDescriptions;
-(double)timeOffsetWithinClip;
-(id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 faceClassification:(id)arg5 timeOffsetWithinClip:(double)arg6 clipUUID:(id)arg7 ;
-(id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 cameraProfileUUID:(id)arg5 faceClassification:(id)arg6 timeOffsetWithinClip:(double)arg7 clipUUID:(id)arg8 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

