/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMCameraRecordingEvent.h>

@class NSUUID, NSDate, NSArray, NSSet, NSString, HMCameraClipEncryptionContext, NSData, NSDictionary;

@interface HMCameraClip : NSObject <NSCopying, NSSecureCoding, HMCameraRecordingEvent> {

	BOOL _complete;
	BOOL _donated;
	NSUUID* _uniqueIdentifier;
	NSDate* _startDate;
	double _duration;
	double _targetFragmentDuration;
	NSArray* _posterFrames;
	NSSet* _significantEvents;
	NSString* _streamingAssetVersion;
	HMCameraClipEncryptionContext* _encryptionContext;
	NSArray* _videoSegments;

}

@property (copy,readonly) NSString * streamingAssetVersion;                               //@synthesize streamingAssetVersion=_streamingAssetVersion - In the implementation block
@property (copy,readonly) HMCameraClipEncryptionContext * encryptionContext;              //@synthesize encryptionContext=_encryptionContext - In the implementation block
@property (copy,readonly) NSArray * videoSegments;                                        //@synthesize videoSegments=_videoSegments - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy,readonly) NSDate * startDate;                                             //@synthesize startDate=_startDate - In the implementation block
@property (readonly) double duration;                                                     //@synthesize duration=_duration - In the implementation block
@property (getter=isComplete,readonly) BOOL complete;                                     //@synthesize complete=_complete - In the implementation block
@property (getter=isDonated,readonly) BOOL donated;                                       //@synthesize donated=_donated - In the implementation block
@property (readonly) double targetFragmentDuration;                                       //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (copy,readonly) NSData * encryptionKey; 
@property (copy,readonly) NSArray * posterFrames;                                         //@synthesize posterFrames=_posterFrames - In the implementation block
@property (copy,readonly) NSArray * videoDataSegments; 
@property (copy,readonly) NSSet * significantEvents;                                      //@synthesize significantEvents=_significantEvents - In the implementation block
@property (copy,readonly) NSDictionary * videoAssetRequiredHTTPHeaders; 
@property (readonly) BOOL canAskForUserFeedback; 
@property (copy,readonly) NSDate * dateOfOccurrence; 
+(BOOL)supportsSecureCoding;
+(id)requiredHTTPHeadersForStreamingAssetVersion:(id)arg1 ;
-(BOOL)isComplete;
-(NSData *)encryptionKey;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(id)description;
-(BOOL)isDonated;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)targetFragmentDuration;
-(NSString *)streamingAssetVersion;
-(HMCameraClipEncryptionContext *)encryptionContext;
-(NSArray *)posterFrames;
-(NSArray *)videoSegments;
-(NSSet *)significantEvents;
-(BOOL)canAskForUserFeedback;
-(id)initWithUniqueIdentifier:(id)arg1 startDate:(id)arg2 duration:(double)arg3 targetFragmentDuration:(double)arg4 isComplete:(BOOL)arg5 isDonated:(BOOL)arg6 streamingAssetVersion:(id)arg7 encryptionContext:(id)arg8 posterFrames:(id)arg9 videoSegments:(id)arg10 significantEvents:(id)arg11 ;
-(NSDate *)dateOfOccurrence;
-(NSDictionary *)videoAssetRequiredHTTPHeaders;
-(NSArray *)videoDataSegments;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

