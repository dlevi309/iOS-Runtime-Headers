/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
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
+(id)movieRecordingSettings;
+(id)movieRecordingSettingsFromMomentCaptureSettings:(id)arg1 ;
-(long long)uniqueID;
-(NSString *)videoCodecType;
-(id)debugDescription;
-(void)setAutoSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(unsigned long long)userInitiatedCaptureTime;
-(id)description;
-(id)spatialOverCaptureGroupIdentifier;
-(NSURL *)movieFileURL;
-(NSArray *)movieMetadata;
-(BOOL)isAutoSpatialOverCaptureEnabled;
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

