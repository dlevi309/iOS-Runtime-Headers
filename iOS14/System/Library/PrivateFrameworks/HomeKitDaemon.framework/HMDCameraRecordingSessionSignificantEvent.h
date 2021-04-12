/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSDate, NSSet, NSData;

@interface HMDCameraRecordingSessionSignificantEvent : HMFObject <NSCopying, NSMutableCopying> {

	NSUUID* _UUID;
	unsigned long long _reason;
	NSDate* _dateOfOccurrence;
	unsigned long long _confidenceLevel;
	NSUUID* _sessionEntityUUID;
	NSSet* _faceClassifications;
	NSData* _heroFrameData;
	NSData* _faceCropData;
	double _timeOffsetWithinClip;

}

@property (assign) unsigned long long reason;                       //@synthesize reason=_reason - In the implementation block
@property (copy) NSDate * dateOfOccurrence;                         //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
@property (assign) unsigned long long confidenceLevel;              //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
@property (copy) NSUUID * sessionEntityUUID;                        //@synthesize sessionEntityUUID=_sessionEntityUUID - In the implementation block
@property (copy) NSSet * faceClassifications;                       //@synthesize faceClassifications=_faceClassifications - In the implementation block
@property (retain) NSData * heroFrameData;                          //@synthesize heroFrameData=_heroFrameData - In the implementation block
@property (retain) NSData * faceCropData;                           //@synthesize faceCropData=_faceCropData - In the implementation block
@property (assign) double timeOffsetWithinClip;                     //@synthesize timeOffsetWithinClip=_timeOffsetWithinClip - In the implementation block
@property (copy,readonly) NSUUID * UUID;                            //@synthesize UUID=_UUID - In the implementation block
-(NSUUID *)UUID;
-(NSData *)faceCropData;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)reason;
-(double)timeOffsetWithinClip;
-(unsigned long long)hash;
-(NSDate *)dateOfOccurrence;
-(unsigned long long)confidenceLevel;
-(void)setReason:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(void)setConfidenceLevel:(unsigned long long)arg1 ;
-(NSUUID *)sessionEntityUUID;
-(NSSet *)faceClassifications;
-(NSData *)heroFrameData;
-(void)setDateOfOccurrence:(NSDate *)arg1 ;
-(void)setSessionEntityUUID:(NSUUID *)arg1 ;
-(void)setFaceClassifications:(NSSet *)arg1 ;
-(void)setHeroFrameData:(NSData *)arg1 ;
-(void)setFaceCropData:(NSData *)arg1 ;
-(void)setTimeOffsetWithinClip:(double)arg1 ;
@end

