/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMovieTrack.h>

@class AVMutableMovieTrackInternal, NSArray, AVMediaDataStorage, NSURL;

@interface AVMutableMovieTrack : AVMovieTrack {

	AVMutableMovieTrackInternal* _mutableMovieTrackInternal;

}

@property (nonatomic,readonly) NSArray * formatDescriptions; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) AVMediaDataStorage * mediaDataStorage; 
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long alternateGroupID; 
@property (assign,getter=isModified,nonatomic) BOOL modified; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (assign,nonatomic) int timescale; 
+(id)trackWithTrackID:(int)arg1 forMovie:(id)arg2 ;
+(BOOL)expectsPropertyRevisedNotifications;
-(BOOL)hasProtectedContent;
-(void)setLanguageCode:(id)arg1 ;
-(long long)layer;
-(void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
-(void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
-(id)locale;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(CGSize)naturalSize;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(void)setAlternateGroupID:(long long)arg1 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(float)preferredVolume;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(CGSize)dimensions;
-(id)metadataForFormat:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)availableMetadataFormats;
-(CGAffineTransform)preferredTransform;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)languageCode;
-(int)timescale;
-(AVMediaDataStorage *)mediaDataStorage;
-(id)initWithTrackID:(int)arg1 forMovie:(id)arg2 ;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(void)_addFigAssetTrackNotifications;
-(void)_removeFigAssetTrackNotifications;
-(id)_stringForProperty:(CFStringRef)arg1 ;
-(void)setTimescale:(int)arg1 ;
-(CGSize)_sizeForProperty:(CFStringRef)arg1 ;
-(void)_setString:(id)arg1 forProperty:(CFStringRef)arg2 ;
-(void)_setSize:(CGSize)arg1 forProperty:(CFStringRef)arg2 ;
-(void)_signalMetadataUpdated;
-(CGSize)cleanApertureDimensions;
-(CGSize)productionApertureDimensions;
-(CGSize)encodedPixelsDimensions;
-(void)setMediaDataStorage:(AVMediaDataStorage *)arg1 ;
-(void)setCleanApertureDimensions:(CGSize)arg1 ;
-(void)setProductionApertureDimensions:(CGSize)arg1 ;
-(void)setEncodedPixelsDimensions:(CGSize)arg1 ;
-(BOOL)isCompatibleWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV7)arg1 ofTrack:(id)arg2 atTime:(SCD_Struct_AV6)arg3 copySampleData:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)appendMediaData:(id)arg1 dataOffset:(long long*)arg2 ;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 decodeTime:(SCD_Struct_AV6*)arg2 presentationTime:(SCD_Struct_AV6*)arg3 error:(id*)arg4 ;
-(BOOL)insertMediaTimeRange:(SCD_Struct_AV7)arg1 intoTimeRange:(SCD_Struct_AV7)arg2 ;
-(int)trackID;
-(long long)alternateGroupID;
-(SCD_Struct_AV6)preferredMediaChunkDuration;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(long long)preferredMediaChunkSize;
-(void)setLayer:(long long)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)description;
-(id)extendedLanguageTag;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV6)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
-(BOOL)isModified;
-(BOOL)isEnabled;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setModified:(BOOL)arg1 ;
-(NSArray *)metadata;
-(NSArray *)formatDescriptions;
-(void)dealloc;
-(void)removeTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)insertEmptyTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_AV7)arg1 toDuration:(SCD_Struct_AV6)arg2 ;
-(void)replaceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 withFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
@end

