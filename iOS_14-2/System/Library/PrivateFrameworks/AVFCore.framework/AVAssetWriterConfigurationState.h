/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVAssetWriterDelegate;
#import <AVFCore/AVFCore-Structs.h>
@class NSURL, AVMediaFileType, NSArray, NSString;

@interface AVAssetWriterConfigurationState : NSObject {

	NSURL* _URL;
	id<AVAssetWriterDelegate> _delegate;
	AVMediaFileType* _mediaFileType;
	SCD_Struct_AV6 _movieFragmentInterval;
	SCD_Struct_AV6 _overallDurationHint;
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
	SCD_Struct_AV6 _preferredOutputSegmentInterval;
	SCD_Struct_AV6 _initialSegmentStartTime;
	NSString* _outputFileTypeProfile;
	long long _initialMovieFragmentSequenceNumber;
	BOOL _producesCombinableFragments;

}

@property (nonatomic,copy) NSURL * URL;                                                  //@synthesize URL=_URL - In the implementation block
@property (__weak) id<AVAssetWriterDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) AVMediaFileType * mediaFileType;                              //@synthesize mediaFileType=_mediaFileType - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 movieFragmentInterval;                       //@synthesize movieFragmentInterval=_movieFragmentInterval - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 overallDurationHint;                         //@synthesize overallDurationHint=_overallDurationHint - In the implementation block
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse;                           //@synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse - In the implementation block
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles;                           //@synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles - In the implementation block
@property (nonatomic,copy) NSArray * metadataItems;                                      //@synthesize metadataItems=_metadataItems - In the implementation block
@property (assign,nonatomic) int movieTimeScale;                                         //@synthesize movieTimeScale=_movieTimeScale - In the implementation block
@property (assign,nonatomic) CGAffineTransform preferredTransform;                       //@synthesize preferredTransform=_preferredTransform - In the implementation block
@property (assign,nonatomic) float preferredVolume;                                      //@synthesize preferredVolume=_preferredVolume - In the implementation block
@property (assign,nonatomic) float preferredRate;                                        //@synthesize preferredRate=_preferredRate - In the implementation block
@property (assign,nonatomic) long long singlePassFileSize;                               //@synthesize singlePassFileSize=_singlePassFileSize - In the implementation block
@property (assign,nonatomic) long long singlePassMediaDataSize;                          //@synthesize singlePassMediaDataSize=_singlePassMediaDataSize - In the implementation block
@property (nonatomic,copy) NSArray * inputs;                                             //@synthesize inputs=_inputs - In the implementation block
@property (nonatomic,copy) NSArray * inputGroups;                                        //@synthesize inputGroups=_inputGroups - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 preferredOutputSegmentInterval;              //@synthesize preferredOutputSegmentInterval=_preferredOutputSegmentInterval - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 initialSegmentStartTime;                     //@synthesize initialSegmentStartTime=_initialSegmentStartTime - In the implementation block
@property (nonatomic,copy) NSString * outputFileTypeProfile;                             //@synthesize outputFileTypeProfile=_outputFileTypeProfile - In the implementation block
@property (assign,nonatomic) long long initialMovieFragmentSequenceNumber;               //@synthesize initialMovieFragmentSequenceNumber=_initialMovieFragmentSequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL producesCombinableFragments;                           //@synthesize producesCombinableFragments=_producesCombinableFragments - In the implementation block
-(SCD_Struct_AV6)overallDurationHint;
-(void)setInputs:(NSArray *)arg1 ;
-(long long)singlePassMediaDataSize;
-(float)preferredVolume;
-(id<AVAssetWriterDelegate>)delegate;
-(BOOL)shouldOptimizeForNetworkUse;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(int)movieTimeScale;
-(SCD_Struct_AV6)preferredOutputSegmentInterval;
-(void)setURL:(NSURL *)arg1 ;
-(void)setMetadataItems:(NSArray *)arg1 ;
-(CGAffineTransform)preferredTransform;
-(float)preferredRate;
-(void)setOutputFileTypeProfile:(NSString *)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(void)setProducesCombinableFragments:(BOOL)arg1 ;
-(void)setDelegate:(id<AVAssetWriterDelegate>)arg1 ;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(BOOL)producesCombinableFragments;
-(void)setMovieTimeScale:(int)arg1 ;
-(NSArray *)metadataItems;
-(SCD_Struct_AV6)initialSegmentStartTime;
-(void)setOverallDurationHint:(SCD_Struct_AV6)arg1 ;
-(void)setInitialMovieFragmentSequenceNumber:(long long)arg1 ;
-(void)setInitialSegmentStartTime:(SCD_Struct_AV6)arg1 ;
-(NSArray *)inputGroups;
-(NSURL *)URL;
-(void)setMediaFileType:(AVMediaFileType *)arg1 ;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(long long)singlePassFileSize;
-(void)setMovieFragmentInterval:(SCD_Struct_AV6)arg1 ;
-(NSString *)outputFileTypeProfile;
-(NSURL *)directoryForTemporaryFiles;
-(void)setInputGroups:(NSArray *)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(void)setPreferredOutputSegmentInterval:(SCD_Struct_AV6)arg1 ;
-(NSArray *)inputs;
-(SCD_Struct_AV6)movieFragmentInterval;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(long long)initialMovieFragmentSequenceNumber;
-(void)dealloc;
@end

