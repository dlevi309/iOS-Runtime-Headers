/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                    //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
+(long long)fileLengthLimitForRemakerMode:(int)arg1 ;
+(double)maximumDurationForTrimMode:(int)arg1 ;
+(long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2 ;
+(int)getHDRemakerModeForMode:(int)arg1 ;
+(int)getSDRemakerModeForMode:(int)arg1 ;
-(void)dealloc;
-(NSObject*<PLVideoRemakerDelegate>)delegate;
-(void)setDelegate:(NSObject*<PLVideoRemakerDelegate>)arg1 ;
-(void)setMode:(int)arg1 ;
-(void)cancel;
-(id)_metadata;
-(double)duration;
-(int)mode;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)_updateProgress;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(double)trimStartTime;
-(double)trimEndTime;
-(NSString *)exportPreset;
-(id)progressView;
-(void)setTrimStartTime:(double)arg1 ;
-(void)setTrimEndTime:(double)arg1 ;
-(id)initWithPublishingMedia:(id)arg1 ;
-(id)initWithAVAsset:(id)arg1 ;
-(id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(BOOL)arg2 ;
-(id)messageForRemakingProgress;
-(void)_resetProgressTimer;
-(void)_removeProgressTimer;
-(void)remake;
-(id)_fileFormatForURL:(id)arg1 ;
-(void)_didEndRemakingWithTemporaryPath:(id)arg1 ;
-(void)_exportCompletedWithSuccess:(BOOL)arg1 ;
-(BOOL)shouldExportToPhotoDataDirectory;
-(void)setShouldExportToPhotoDataDirectory:(BOOL)arg1 ;
-(NSString *)exportPresetOverride;
-(void)setExportPresetOverride:(NSString *)arg1 ;
-(NSString *)customAccessibilityLabel;
-(PFVideoAVObjectBuilder *)_videoAVObjectBuilder;
@end

