/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class AVAsset, AVAudioMix, AVVideoComposition, NSArray, NSObject, AVAssetExportSession, NSError, NSURL, NSString, CLLocation, NSDate, PFAssetAdjustments;

@interface PFVideoSharingOperation : NSOperation {

	AVAsset* _videoAsset;
	AVAudioMix* _audioMix;
	AVVideoComposition* _videoComposition;
	NSArray* _videoMetadata;
	NSObject*<OS_dispatch_queue> _externalIsolation;
	AVAssetExportSession* _exportSession;
	BOOL _beganExport;
	BOOL _operationSuccess;
	NSError* _operationError;
	BOOL _shouldStripMetadata;
	BOOL _shouldStripLocation;
	NSURL* _outputDirectoryURL;
	NSString* _outputFilename;
	CLLocation* _customLocation;
	NSDate* _customDate;
	NSString* _customAccessibilityLabel;
	NSString* _exportPreset;
	NSString* _exportFileType;
	NSURL* _videoURL;
	NSURL* _resultingFileURL;
	PFAssetAdjustments* __adjustments;

}

@property (setter=_setVideoURL:,nonatomic,copy) NSURL * videoURL;                                    //@synthesize videoURL=_videoURL - In the implementation block
@property (setter=_setAdjustments:,nonatomic,retain) PFAssetAdjustments * _adjustments;              //@synthesize _adjustments=__adjustments - In the implementation block
@property (assign,setter=_setSuccess:,nonatomic) BOOL success; 
@property (setter=_setOperationError:,nonatomic,retain) NSError * operationError; 
@property (nonatomic,copy) NSURL * outputDirectoryURL;                                               //@synthesize outputDirectoryURL=_outputDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                                //@synthesize outputFilename=_outputFilename - In the implementation block
@property (assign,nonatomic) BOOL shouldStripMetadata;                                               //@synthesize shouldStripMetadata=_shouldStripMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldStripLocation;                                               //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (nonatomic,copy) CLLocation * customLocation;                                              //@synthesize customLocation=_customLocation - In the implementation block
@property (nonatomic,copy) NSDate * customDate;                                                      //@synthesize customDate=_customDate - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                      //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * exportPreset;                                                  //@synthesize exportPreset=_exportPreset - In the implementation block
@property (nonatomic,copy) NSString * exportFileType;                                                //@synthesize exportFileType=_exportFileType - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (nonatomic,copy,readonly) NSURL * resultingFileURL;                                        //@synthesize resultingFileURL=_resultingFileURL - In the implementation block
+(id)operationErrorWithCode:(long long)arg1 underlyingError:(id)arg2 withDescription:(id)arg3 ;
-(void)cancel;
-(void)main;
-(float)progress;
-(BOOL)success;
-(void)_setVideoURL:(id)arg1 ;
-(NSError *)operationError;
-(void)setOutputFilename:(NSString *)arg1 ;
-(NSURL *)videoURL;
-(PFAssetAdjustments *)_adjustments;
-(BOOL)shouldStripLocation;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(void)setOutputDirectoryURL:(NSURL *)arg1 ;
-(void)setCustomLocation:(CLLocation *)arg1 ;
-(void)setCustomDate:(NSDate *)arg1 ;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(void)setExportFileType:(NSString *)arg1 ;
-(void)setExportPreset:(NSString *)arg1 ;
-(NSString *)exportPreset;
-(NSString *)outputFilename;
-(void)_setSuccess:(BOOL)arg1 ;
-(NSString *)customAccessibilityLabel;
-(NSURL *)outputDirectoryURL;
-(CLLocation *)customLocation;
-(NSDate *)customDate;
-(BOOL)shouldStripMetadata;
-(void)setShouldStripMetadata:(BOOL)arg1 ;
-(NSURL *)resultingFileURL;
-(void)_setAdjustments:(id)arg1 ;
-(NSString *)exportFileType;
-(id)initWithVideoURL:(id)arg1 adjustmentData:(id)arg2 ;
-(BOOL)_ensureVideoProperties;
-(void)_validateMetadata;
-(BOOL)_runExport;
-(void)_setOperationError:(id)arg1 ;
@end

