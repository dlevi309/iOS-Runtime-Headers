/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSArray, NSSet, NSString, HMCameraClipEncryptionContext, NSData, NSDictionary;

@interface HMCameraClip : NSObject <NSCopying, NSSecureCoding> {

	BOOL _complete;
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
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete;                           //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) double targetFragmentDuration;                             //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (copy,readonly) NSData * encryptionKey; 
@property (nonatomic,readonly) NSArray * posterFrames;                                    //@synthesize posterFrames=_posterFrames - In the implementation block
@property (nonatomic,readonly) NSSet * significantEvents;                                 //@synthesize significantEvents=_significantEvents - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoAssetRequiredHTTPHeaders; 
@property (readonly) BOOL canAskForUserFeedback; 
+(BOOL)supportsSecureCoding;
+(id)requiredHTTPHeadersForStreamingAssetVersion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSUUID *)uniqueIdentifier;
-(double)duration;
-(BOOL)isComplete;
-(NSData *)encryptionKey;
-(double)targetFragmentDuration;
-(NSString *)streamingAssetVersion;
-(HMCameraClipEncryptionContext *)encryptionContext;
-(NSArray *)posterFrames;
-(NSArray *)videoSegments;
-(NSSet *)significantEvents;
-(id)initWithUniqueIdentifier:(id)arg1 startDate:(id)arg2 duration:(double)arg3 targetFragmentDuration:(double)arg4 isComplete:(BOOL)arg5 streamingAssetVersion:(id)arg6 encryptionContext:(id)arg7 posterFrames:(id)arg8 videoSegments:(id)arg9 significantEvents:(id)arg10 ;
-(BOOL)canAskForUserFeedback;
-(NSDictionary *)videoAssetRequiredHTTPHeaders;
@end

