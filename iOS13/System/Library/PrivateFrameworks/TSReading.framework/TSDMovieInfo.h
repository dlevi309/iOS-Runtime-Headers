/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMediaInfo.h>
#import <TSReading/TSDMixing.h>

@class TSPData, NSURL, TSDMediaStyle;

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing> {

	TSPData* mMovieData;
	NSURL* mMovieRemoteURL;
	TSPData* mImportedAuxiliaryMovieData;
	TSPData* mAudioOnlyImageData;
	double mStartTime;
	double mEndTime;
	double mPosterTime;
	TSPData* mPosterImageData;
	CGSize mNaturalSize;
	unsigned long long mLoopOption;
	float mVolume;
	BOOL mStreaming;
	int mControlStyle;
	BOOL mAllowsAirPlayVideo;
	BOOL mUsesAirPlayVideoWhileAirPlayScreenIsActive;
	NSURL* mURLForMPMPC;
	TSDMediaStyle* mStyle;
	BOOL mAudioOnly;

}

@property (nonatomic,retain) TSPData * movieData; 
@property (nonatomic,retain) NSURL * movieRemoteURL; 
@property (nonatomic,retain) TSPData * importedAuxiliaryMovieData; 
@property (nonatomic,retain) TSPData * audioOnlyImageData; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) double posterTime; 
@property (nonatomic,retain) TSPData * posterImageData; 
@property (assign,nonatomic) unsigned long long loopOption; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isAudioOnly,nonatomic) BOOL audioOnly; 
@property (assign,getter=isStreaming,nonatomic) BOOL streaming; 
@property (assign,nonatomic) BOOL allowsAirPlayVideo; 
@property (assign,nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive; 
@property (nonatomic,retain) NSURL * urlForMPMPC; 
@property (assign,nonatomic) int controlStyle; 
+(id)presetKinds;
+(double)defaultPosterTimeForDuration:(double)arg1 ;
-(void)dealloc;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(BOOL)allowsAirPlayVideo;
-(void)setAllowsAirPlayVideo:(BOOL)arg1 ;
-(BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
-(void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1 ;
-(id)mediaFileType;
-(BOOL)isStreaming;
-(TSPData *)movieData;
-(void)setMovieData:(TSPData *)arg1 ;
-(void)setAudioOnly:(BOOL)arg1 ;
-(int)controlStyle;
-(void)setControlStyle:(int)arg1 ;
-(Class)layoutClass;
-(BOOL)isAudioOnly;
-(void)setStreaming:(BOOL)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(Class)repClass;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(float)floatValueForProperty:(int)arg1 ;
-(BOOL)containsProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(id)presetKind;
-(BOOL)supportsAttachedComments;
-(Class)editorClass;
-(BOOL)supportsHyperlinks;
-(BOOL)canChangeWrapType;
-(id)animationFilters;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 ;
-(Class)styleClass;
-(id)mediaDisplayName;
-(CGSize)rawDataSize;
-(void)p_setPropertiesFromLoadedAsset:(id)arg1 ;
-(id)copyWithContext:(id)arg1 stylesheet:(id)arg2 ;
-(NSURL *)movieRemoteURL;
-(double)posterTime;
-(id)makeAVAssetWithOptions:(id)arg1 ;
-(id)makeAVAsset;
-(id)makePosterImageGeneratorWithAVAsset:(id)arg1 ;
-(id)generateEmptyPosterImageForContext:(id)arg1 ;
-(TSPData *)posterImageData;
-(unsigned long long)loopOption;
-(void)setMovieRemoteURL:(NSURL *)arg1 ;
-(TSPData *)importedAuxiliaryMovieData;
-(void)setImportedAuxiliaryMovieData:(TSPData *)arg1 ;
-(TSPData *)audioOnlyImageData;
-(void)setAudioOnlyImageData:(TSPData *)arg1 ;
-(void)setPosterTime:(double)arg1 ;
-(void)setLoopOption:(unsigned long long)arg1 ;
-(NSURL *)urlForMPMPC;
-(void)setUrlForMPMPC:(NSURL *)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5 ;
-(void)setPosterImageData:(TSPData *)arg1 ;
-(id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1 ;
@end

