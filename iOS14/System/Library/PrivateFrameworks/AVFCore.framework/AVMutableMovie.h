/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMovie.h>

@class AVMutableMovieInternal, AVMediaDataStorage, NSArray;

@interface AVMutableMovie : AVMovie {

	AVMutableMovieInternal* _mutableMovieInternal;

}

@property (assign,getter=isModified,nonatomic) BOOL modified; 
@property (nonatomic,copy) AVMediaDataStorage * defaultMediaDataStorage; 
@property (assign,nonatomic) SCD_Struct_AV6 interleavingPeriod; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) float preferredRate; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) int timescale; 
@property (nonatomic,readonly) NSArray * tracks; 
+(id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)expectsPropertyRevisedNotifications;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)trackReferences;
-(id)init;
-(float)preferredVolume;
-(NSArray *)tracks;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMetadataFormats;
-(CGAffineTransform)preferredTransform;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(float)preferredRate;
-(int)timescale;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(void)setTimescale:(int)arg1 ;
-(void)_signalMetadataUpdated;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)description;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(void)_removeFigAssetNotifications;
-(id)initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)data;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)trackWithTrackID:(int)arg1 ;
-(void)_addFigAssetNotifications;
-(id)_initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4 ;
-(id)_initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(id)_initWithFigError:(int)arg1 userInfo:(id)arg2 ;
-(SCD_Struct_AV6)interleavingPeriod;
-(AVMediaDataStorage *)defaultMediaDataStorage;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 ;
-(id)initWithFileType:(id)arg1 copySettingsFromMovie:(id)arg2 options:(id)arg3 ;
-(void)_signalTracksUpdated;
-(void)setInterleavingPeriod:(SCD_Struct_AV6)arg1 ;
-(void)setDefaultMediaDataStorage:(AVMediaDataStorage *)arg1 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV7)arg1 ofAsset:(id)arg2 atTime:(SCD_Struct_AV6)arg3 copySampleData:(BOOL)arg4 error:(id*)arg5 ;
-(id)_addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3 ;
-(id)addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3 ;
-(id)addMutableTracksCopyingSettingsFromTracks:(id)arg1 options:(id)arg2 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)URL;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)_initializationOptions;
-(BOOL)isModified;
-(Class)_classForTrackInspectors;
-(void)setPreferredRate:(float)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setModified:(BOOL)arg1 ;
-(NSArray *)metadata;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(SCD_Struct_AV6)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)_mutableTracks;
-(void)removeTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)insertEmptyTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_AV7)arg1 toDuration:(SCD_Struct_AV6)arg2 ;
-(void)removeTrack:(id)arg1 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg1 ;
-(id)fileType;
@end

