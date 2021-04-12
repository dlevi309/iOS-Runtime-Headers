/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@protocol PLVideoRemakerDelegate;
@class NSString, AVAssetExportSession, NSTimer, PLProgressView, NSObject, PFVideoAVObjectBuilder;

@interface PLVideoRemaker : NSObject {

	NSString* _trimmedPath;
	double _duration;
	double _trimStartTime;
	double _trimEndTime;
	int _mode;
	AVAssetExportSession* _exportSession;
	float _percentComplete;
	NSTimer* _progressTimer;
	PLProgressView* _progressView;
	BOOL _shouldExportToPhotoDataDirectory;
	NSObject*<PLVideoRemakerDelegate> _delegate;
	/*^block*/id _progressHandler;
	NSString* _exportPresetOverride;
	NSString* _customAccessibilityLabel;
	PFVideoAVObjectBuilder* __videoAVObjectBuilder;

}

@property (nonatomic,retain,readonly) PFVideoAVObjectBuilder * _videoAVObjectBuilder;              //@synthesize _videoAVObjectBuilder=__videoAVObjectBuilder - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<PLVideoRemakerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldExportToPhotoDataDirectory;                                //@synthesize shouldExportToPhotoDataDirectory=_shouldExportToPhotoDataDirectory - In the implementation block
@property (nonatomic,copy) NSString * exportPresetOverride;                                        //@synthesize exportPresetOverride=_exportPresetOverride - In the implementation block
@property (nonatomic,readonly) NSString * exportPreset; 
@property (assign,nonatomic) double duration;                                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int mode;                                                             //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double trimStartTime;                                                 //@synthesize trimStartTime=_trimStartTime - In the implementation block
@property (assign,nonatomic) double trimEndTime;                                                   //@synthesize trimEndTime=_trimEndTime - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                    //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
+(double)maximumDurationForTrimMode:(int)arg1 ;
+(long long)fileLengthLimitForRemakerMode:(int)arg1 ;
+(long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2 ;
+(int)getHDRemakerModeForMode:(int)arg1 ;
+(int)getSDRemakerModeForMode:(int)arg1 ;
-(void)_updateProgress;
-(int)mode;
-(void)setDuration:(double)arg1 ;
-(void)remake;
-(id)_metadata;
-(NSObject*<PLVideoRemakerDelegate>)delegate;
-(void)setMode:(int)arg1 ;
-(void)setDelegate:(NSObject*<PLVideoRemakerDelegate>)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(void)setTrimEndTime:(double)arg1 ;
-(double)trimEndTime;
-(void)setShouldExportToPhotoDataDirectory:(BOOL)arg1 ;
-(void)setTrimStartTime:(double)arg1 ;
-(id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(BOOL)arg2 ;
-(double)trimStartTime;
-(NSString *)customAccessibilityLabel;
-(NSString *)exportPreset;
-(id)progressView;
-(id)progressHandler;
-(double)duration;
-(void)cancel;
-(void)dealloc;
-(id)initWithAVAsset:(id)arg1 ;
-(id)initWithPublishingMedia:(id)arg1 ;
-(id)messageForRemakingProgress;
-(void)_resetProgressTimer;
-(void)_removeProgressTimer;
-(id)_fileFormatForURL:(id)arg1 ;
-(void)_didEndRemakingWithTemporaryPath:(id)arg1 ;
-(void)_exportCompletedWithSuccess:(BOOL)arg1 ;
-(BOOL)shouldExportToPhotoDataDirectory;
-(NSString *)exportPresetOverride;
-(void)setExportPresetOverride:(NSString *)arg1 ;
-(PFVideoAVObjectBuilder *)_videoAVObjectBuilder;
@end

