/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVAssetWriterDelegate;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSURL, AVMediaFileType, NSArray;

@interface AVAssetWriterConfigurationState : NSObject {

	NSURL* _URL;
	id<AVAssetWriterDelegate> _delegate;
	AVMediaFileType* _mediaFileType;
	SCD_Struct_AV7 _movieFragmentInterval;
	SCD_Struct_AV7 _overallDurationHint;
	BOOL _shouldOptimizeForNetworkUse;
	NSURL* _directoryForTemporaryFiles;
	NSArray* _metadataItems;
	int _movieTimeScale;
	CGAffineTransform _preferredTransform;
	float _preferredVolume;
	float _preferredRate;
	long long _singlePassFileSize;
	long long _singlePassMediaDataSize;
	NSArray* _inputs;
	NSArray* _inputGroups;

}

@property (nonatomic,copy) NSURL * URL;                                         //@synthesize URL=_URL - In the implementation block
@property (__weak) id<AVAssetWriterDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) AVMediaFileType * mediaFileType;                     //@synthesize mediaFileType=_mediaFileType - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV7 movieFragmentInterval;              //@synthesize movieFragmentInterval=_movieFragmentInterval - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV7 overallDurationHint;                //@synthesize overallDurationHint=_overallDurationHint - In the implementation block
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse;                  //@synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse - In the implementation block
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles;                  //@synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles - In the implementation block
@property (nonatomic,copy) NSArray * metadataItems;                             //@synthesize metadataItems=_metadataItems - In the implementation block
@property (assign,nonatomic) int movieTimeScale;                                //@synthesize movieTimeScale=_movieTimeScale - In the implementation block
@property (assign,nonatomic) CGAffineTransform preferredTransform;              //@synthesize preferredTransform=_preferredTransform - In the implementation block
@property (assign,nonatomic) float preferredVolume;                             //@synthesize preferredVolume=_preferredVolume - In the implementation block
@property (assign,nonatomic) float preferredRate;                               //@synthesize preferredRate=_preferredRate - In the implementation block
@property (assign,nonatomic) long long singlePassFileSize;                      //@synthesize singlePassFileSize=_singlePassFileSize - In the implementation block
@property (assign,nonatomic) long long singlePassMediaDataSize;                 //@synthesize singlePassMediaDataSize=_singlePassMediaDataSize - In the implementation block
@property (nonatomic,copy) NSArray * inputs;                                    //@synthesize inputs=_inputs - In the implementation block
@property (nonatomic,copy) NSArray * inputGroups;                               //@synthesize inputGroups=_inputGroups - In the implementation block
-(void)dealloc;
-(id<AVAssetWriterDelegate>)delegate;
-(void)setDelegate:(id<AVAssetWriterDelegate>)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSArray *)inputs;
-(void)setInputs:(NSArray *)arg1 ;
-(CGAffineTransform)preferredTransform;
-(SCD_Struct_AV7)overallDurationHint;
-(float)preferredRate;
-(float)preferredVolume;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(void)setMediaFileType:(AVMediaFileType *)arg1 ;
-(SCD_Struct_AV7)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_AV7)arg1 ;
-(void)setOverallDurationHint:(SCD_Struct_AV7)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(NSURL *)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(NSArray *)metadataItems;
-(void)setMetadataItems:(NSArray *)arg1 ;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(long long)singlePassFileSize;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(long long)singlePassMediaDataSize;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(NSArray *)inputGroups;
-(void)setInputGroups:(NSArray *)arg1 ;
@end

