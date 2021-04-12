/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSArray;

@interface AVMomentCaptureMovieRecordingSettings : NSObject <NSCopying> {

	long long _uniqueID;
	unsigned long long _userInitiatedCaptureTime;
	NSString* _videoCodecType;
	NSURL* _movieFileURL;
	NSArray* _movieMetadata;
	BOOL _autoSpatialOverCaptureEnabled;
	NSString* _spatialOverCaptureGroupIdentifier;
	NSURL* _spatialOverCaptureMovieFileURL;
	NSArray* _spatialOverCaptureMovieMetadata;

}

@property (nonatomic,readonly) long long uniqueID;                                                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) unsigned long long userInitiatedCaptureTime;                                            //@synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime - In the implementation block
@property (nonatomic,copy) NSString * videoCodecType; 
@property (nonatomic,copy) NSURL * movieFileURL;                                                                     //@synthesize movieFileURL=_movieFileURL - In the implementation block
@property (nonatomic,copy) NSArray * movieMetadata; 
@property (assign,getter=isAutoSpatialOverCaptureEnabled,nonatomic) BOOL autoSpatialOverCaptureEnabled;              //@synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled - In the implementation block
@property (nonatomic,copy) NSURL * spatialOverCaptureMovieFileURL;                                                   //@synthesize spatialOverCaptureMovieFileURL=_spatialOverCaptureMovieFileURL - In the implementation block
@property (nonatomic,copy) NSArray * spatialOverCaptureMovieMetadata; 
+(id)movieRecordingSettingsFromMomentCaptureSettings:(id)arg1 ;
+(id)movieRecordingSettings;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)uniqueID;
-(NSString *)videoCodecType;
-(BOOL)isAutoSpatialOverCaptureEnabled;
-(id)spatialOverCaptureGroupIdentifier;
-(void)setAutoSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(unsigned long long)userInitiatedCaptureTime;
-(NSURL *)movieFileURL;
-(NSArray *)movieMetadata;
-(NSURL *)spatialOverCaptureMovieFileURL;
-(NSArray *)spatialOverCaptureMovieMetadata;
-(id)_initFromMomentCaptureSettings:(id)arg1 ;
-(void)setVideoCodecType:(NSString *)arg1 ;
-(void)setMovieFileURL:(NSURL *)arg1 ;
-(void)setMovieMetadata:(NSArray *)arg1 ;
-(void)setSpatialOverCaptureMovieFileURL:(NSURL *)arg1 ;
-(void)setSpatialOverCaptureMovieMetadata:(NSArray *)arg1 ;
-(id)_sanitizedMovieMetadataArrayForMovieMetadataArray:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)setUserInitiatedCaptureTime:(unsigned long long)arg1 ;
@end

