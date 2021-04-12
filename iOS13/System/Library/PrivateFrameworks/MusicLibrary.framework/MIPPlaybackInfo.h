/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MIPPlaybackInfo : PBCodable <NSCopying> {

	long long _durationInSamples;
	long long _gaplessEncodingDrainCode;
	long long _gaplessFrameResyncCode;
	long long _gaplessHeuristicCode;
	long long _gaplessHeuristicDelayCode;
	long long _startTime;
	long long _stopTime;
	long long _volumeNormalizationEnergy;
	int _beatsPerMinute;
	int _bitRate;
	int _codecSubType;
	int _codecType;
	int _dataKind;
	NSString* _dataUrl;
	NSString* _eqPreset;
	NSString* _playbackFormat;
	int _progressionDirection;
	int _relativeVolume;
	int _sampleRate;
	SCD_Struct_MI7 _has;

}

@property (assign,nonatomic) BOOL hasBitRate; 
@property (assign,nonatomic) int bitRate;                                      //@synthesize bitRate=_bitRate - In the implementation block
@property (assign,nonatomic) BOOL hasCodecType; 
@property (assign,nonatomic) int codecType;                                    //@synthesize codecType=_codecType - In the implementation block
@property (assign,nonatomic) BOOL hasCodecSubType; 
@property (assign,nonatomic) int codecSubType;                                 //@synthesize codecSubType=_codecSubType - In the implementation block
@property (assign,nonatomic) BOOL hasDataKind; 
@property (assign,nonatomic) int dataKind;                                     //@synthesize dataKind=_dataKind - In the implementation block
@property (nonatomic,readonly) BOOL hasDataUrl; 
@property (nonatomic,retain) NSString * dataUrl;                               //@synthesize dataUrl=_dataUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasEqPreset; 
@property (nonatomic,retain) NSString * eqPreset;                              //@synthesize eqPreset=_eqPreset - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackFormat; 
@property (nonatomic,retain) NSString * playbackFormat;                        //@synthesize playbackFormat=_playbackFormat - In the implementation block
@property (assign,nonatomic) BOOL hasGaplessHeuristicCode; 
@property (assign,nonatomic) long long gaplessHeuristicCode;                   //@synthesize gaplessHeuristicCode=_gaplessHeuristicCode - In the implementation block
@property (assign,nonatomic) BOOL hasGaplessHeuristicDelayCode; 
@property (assign,nonatomic) long long gaplessHeuristicDelayCode;              //@synthesize gaplessHeuristicDelayCode=_gaplessHeuristicDelayCode - In the implementation block
@property (assign,nonatomic) BOOL hasGaplessEncodingDrainCode; 
@property (assign,nonatomic) long long gaplessEncodingDrainCode;               //@synthesize gaplessEncodingDrainCode=_gaplessEncodingDrainCode - In the implementation block
@property (assign,nonatomic) BOOL hasGaplessFrameResyncCode; 
@property (assign,nonatomic) long long gaplessFrameResyncCode;                 //@synthesize gaplessFrameResyncCode=_gaplessFrameResyncCode - In the implementation block
@property (assign,nonatomic) BOOL hasRelativeVolume; 
@property (assign,nonatomic) int relativeVolume;                               //@synthesize relativeVolume=_relativeVolume - In the implementation block
@property (assign,nonatomic) BOOL hasSampleRate; 
@property (assign,nonatomic) int sampleRate;                                   //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasStopTime; 
@property (assign,nonatomic) long long stopTime;                               //@synthesize stopTime=_stopTime - In the implementation block
@property (assign,nonatomic) BOOL hasVolumeNormalizationEnergy; 
@property (assign,nonatomic) long long volumeNormalizationEnergy;              //@synthesize volumeNormalizationEnergy=_volumeNormalizationEnergy - In the implementation block
@property (assign,nonatomic) BOOL hasBeatsPerMinute; 
@property (assign,nonatomic) int beatsPerMinute;                               //@synthesize beatsPerMinute=_beatsPerMinute - In the implementation block
@property (assign,nonatomic) BOOL hasProgressionDirection; 
@property (assign,nonatomic) int progressionDirection;                         //@synthesize progressionDirection=_progressionDirection - In the implementation block
@property (assign,nonatomic) BOOL hasDurationInSamples; 
@property (assign,nonatomic) long long durationInSamples;                      //@synthesize durationInSamples=_durationInSamples - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)startTime;
-(void)setStartTime:(long long)arg1 ;
-(void)setSampleRate:(int)arg1 ;
-(int)sampleRate;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(long long)stopTime;
-(NSString *)eqPreset;
-(void)setStopTime:(long long)arg1 ;
-(int)beatsPerMinute;
-(int)bitRate;
-(void)setBitRate:(int)arg1 ;
-(void)setHasSampleRate:(BOOL)arg1 ;
-(BOOL)hasSampleRate;
-(int)codecType;
-(int)codecSubType;
-(int)dataKind;
-(long long)durationInSamples;
-(long long)gaplessHeuristicCode;
-(long long)gaplessHeuristicDelayCode;
-(long long)gaplessEncodingDrainCode;
-(long long)gaplessFrameResyncCode;
-(int)relativeVolume;
-(long long)volumeNormalizationEnergy;
-(int)progressionDirection;
-(BOOL)hasBeatsPerMinute;
-(BOOL)hasBitRate;
-(BOOL)hasCodecType;
-(BOOL)hasCodecSubType;
-(BOOL)hasDataKind;
-(BOOL)hasDataUrl;
-(BOOL)hasDurationInSamples;
-(BOOL)hasEqPreset;
-(BOOL)hasPlaybackFormat;
-(BOOL)hasGaplessHeuristicCode;
-(BOOL)hasGaplessHeuristicDelayCode;
-(BOOL)hasGaplessEncodingDrainCode;
-(BOOL)hasGaplessFrameResyncCode;
-(BOOL)hasRelativeVolume;
-(BOOL)hasStopTime;
-(BOOL)hasVolumeNormalizationEnergy;
-(BOOL)hasProgressionDirection;
-(NSString *)dataUrl;
-(NSString *)playbackFormat;
-(void)setDataUrl:(NSString *)arg1 ;
-(void)setEqPreset:(NSString *)arg1 ;
-(void)setPlaybackFormat:(NSString *)arg1 ;
-(void)setHasBitRate:(BOOL)arg1 ;
-(void)setCodecType:(int)arg1 ;
-(void)setHasCodecType:(BOOL)arg1 ;
-(void)setCodecSubType:(int)arg1 ;
-(void)setHasCodecSubType:(BOOL)arg1 ;
-(void)setDataKind:(int)arg1 ;
-(void)setHasDataKind:(BOOL)arg1 ;
-(void)setGaplessHeuristicCode:(long long)arg1 ;
-(void)setHasGaplessHeuristicCode:(BOOL)arg1 ;
-(void)setGaplessHeuristicDelayCode:(long long)arg1 ;
-(void)setHasGaplessHeuristicDelayCode:(BOOL)arg1 ;
-(void)setGaplessEncodingDrainCode:(long long)arg1 ;
-(void)setHasGaplessEncodingDrainCode:(BOOL)arg1 ;
-(void)setGaplessFrameResyncCode:(long long)arg1 ;
-(void)setHasGaplessFrameResyncCode:(BOOL)arg1 ;
-(void)setRelativeVolume:(int)arg1 ;
-(void)setHasRelativeVolume:(BOOL)arg1 ;
-(void)setHasStopTime:(BOOL)arg1 ;
-(void)setVolumeNormalizationEnergy:(long long)arg1 ;
-(void)setHasVolumeNormalizationEnergy:(BOOL)arg1 ;
-(void)setBeatsPerMinute:(int)arg1 ;
-(void)setHasBeatsPerMinute:(BOOL)arg1 ;
-(void)setProgressionDirection:(int)arg1 ;
-(void)setHasProgressionDirection:(BOOL)arg1 ;
-(void)setDurationInSamples:(long long)arg1 ;
-(void)setHasDurationInSamples:(BOOL)arg1 ;
@end

