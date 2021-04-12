/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class NSUUID, NSDate;


@protocol HMCameraRecordingEvent
@property (copy,readonly) NSUUID * uniqueIdentifier; 
@property (copy,readonly) NSDate * dateOfOccurrence; 
@required
-(NSUUID *)uniqueIdentifier;
-(NSDate *)dateOfOccurrence;

@end

