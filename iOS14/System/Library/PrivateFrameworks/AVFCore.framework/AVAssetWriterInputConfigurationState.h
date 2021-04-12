/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSString, AVOutputSettings, NSDictionary, NSArray, NSURL;

@interface AVAssetWriterInputConfigurationState : NSObject {

	NSString* _mediaType;
	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatHint;
	int _trackID;
	NSDictionary* _sourcePixelBufferAttributes;
	NSArray* _metadataItems;
	CGAffineTransform _transform;
	int _mediaTimeScale;
	BOOL _expectsMediaDataInRealTime;
	CGSize _naturalSize;
	NSString* _languageCode;
	NSString* _extendedLanguageTag;
	BOOL _marksOutputTrackAsEnabled;
	float _preferredVolume;
	long long _layer;
	short _alternateGroupID;
	short _provisionalAlternateGroupID;
	NSDictionary* _trackReferences;
	BOOL _performsMultiPassEncodingIfSupported;
	SCD_Struct_AV6 _chunkDuration;
	long long _chunkAlignment;
	long long _chunkSize;
	NSString* _mediaDataLocation;
	NSURL* _sampleReferenceBaseURL;
	BOOL _maximizePowerEfficiency;

}

@property (nonatomic,copy) NSString * mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) AVOutputSettings * outputSettings;                            //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,retain) opaqueCMFormatDescriptionRef sourceFormatHint;              //@synthesize sourceFormatHint=_sourceFormatHint - In the implementation block
@property (assign,nonatomic) int trackID;                                                //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes;                   //@synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes - In the implementation block
@property (nonatomic,copy) NSArray * metadataItems;                                      //@synthesize metadataItems=_metadataItems - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) int mediaTimeScale;                                         //@synthesize mediaTimeScale=_mediaTimeScale - In the implementation block
@property (assign,nonatomic) BOOL expectsMediaDataInRealTime;                            //@synthesize expectsMediaDataInRealTime=_expectsMediaDataInRealTime - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                                         //@synthesize naturalSize=_naturalSize - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * extendedLanguageTag;                               //@synthesize extendedLanguageTag=_extendedLanguageTag - In the implementation block
@property (assign,nonatomic) BOOL marksOutputTrackAsEnabled;                             //@synthesize marksOutputTrackAsEnabled=_marksOutputTrackAsEnabled - In the implementation block
@property (assign,nonatomic) float preferredVolume;                                      //@synthesize preferredVolume=_preferredVolume - In the implementation block
@property (assign,nonatomic) long long layer;                                            //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) short alternateGroupID;                                     //@synthesize alternateGroupID=_alternateGroupID - In the implementation block
@property (assign,nonatomic) short provisionalAlternateGroupID;                          //@synthesize provisionalAlternateGroupID=_provisionalAlternateGroupID - In the implementation block
@property (nonatomic,copy) NSDictionary * trackReferences;                               //@synthesize trackReferences=_trackReferences - In the implementation block
@property (assign,nonatomic) BOOL performsMultiPassEncodingIfSupported;                  //@synthesize performsMultiPassEncodingIfSupported=_performsMultiPassEncodingIfSupported - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 preferredMediaChunkDuration;                 //@synthesize chunkDuration=_chunkDuration - In the implementation block
@property (assign,nonatomic) long long preferredMediaChunkAlignment;                     //@synthesize chunkAlignment=_chunkAlignment - In the implementation block
@property (assign,nonatomic) long long preferredMediaChunkSize;                          //@synthesize chunkSize=_chunkSize - In the implementation block
@property (nonatomic,copy) NSString * mediaDataLocation;                                 //@synthesize mediaDataLocation=_mediaDataLocation - In the implementation block
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL;                               //@synthesize sampleReferenceBaseURL=_sampleReferenceBaseURL - In the implementation block
@property (assign,nonatomic) BOOL maximizePowerEfficiency;                               //@synthesize maximizePowerEfficiency=_maximizePowerEfficiency - In the implementation block
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(NSDictionary *)trackReferences;
-(void)setLanguageCode:(NSString *)arg1 ;
-(long long)layer;
-(void)setSourceFormatHint:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setMediaDataLocation:(NSString *)arg1 ;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(CGSize)naturalSize;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(NSString *)mediaType;
-(void)setAlternateGroupID:(short)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(float)preferredVolume;
-(void)setOutputSettings:(AVOutputSettings *)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(NSString *)mediaDataLocation;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)setMetadataItems:(NSArray *)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(int)mediaTimeScale;
-(BOOL)marksOutputTrackAsEnabled;
-(void)setSourcePixelBufferAttributes:(NSDictionary *)arg1 ;
-(NSString *)languageCode;
-(int)trackID;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(short)alternateGroupID;
-(SCD_Struct_AV6)preferredMediaChunkDuration;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(CGAffineTransform)transform;
-(BOOL)expectsMediaDataInRealTime;
-(long long)preferredMediaChunkSize;
-(AVOutputSettings *)outputSettings;
-(void)setLayer:(long long)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(NSString *)extendedLanguageTag;
-(NSArray *)metadataItems;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV6)arg1 ;
-(BOOL)maximizePowerEfficiency;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setTrackID:(int)arg1 ;
-(void)setTrackReferences:(NSDictionary *)arg1 ;
-(void)dealloc;
-(short)provisionalAlternateGroupID;
@end

