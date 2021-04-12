/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamConfigure : PBCodable <NSCopying> {

	int _audioCodec;
	int _cryptoSuite;
	unsigned _framerate;
	int _resolution;
	int _sampleRate;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasResolution; 
@property (assign,nonatomic) int resolution;                   //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) BOOL hasFramerate; 
@property (assign,nonatomic) unsigned framerate;               //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) BOOL hasAudioCodec; 
@property (assign,nonatomic) int audioCodec;                   //@synthesize audioCodec=_audioCodec - In the implementation block
@property (assign,nonatomic) BOOL hasSampleRate; 
@property (assign,nonatomic) int sampleRate;                   //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) BOOL hasCryptoSuite; 
@property (assign,nonatomic) int cryptoSuite;                  //@synthesize cryptoSuite=_cryptoSuite - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSampleRate:(int)arg1 ;
-(int)sampleRate;
-(int)resolution;
-(void)setResolution:(int)arg1 ;
-(void)setHasSampleRate:(BOOL)arg1 ;
-(BOOL)hasSampleRate;
-(int)audioCodec;
-(unsigned)framerate;
-(void)setFramerate:(unsigned)arg1 ;
-(void)setHasResolution:(BOOL)arg1 ;
-(BOOL)hasResolution;
-(id)resolutionAsString:(int)arg1 ;
-(int)StringAsResolution:(id)arg1 ;
-(void)setHasFramerate:(BOOL)arg1 ;
-(BOOL)hasFramerate;
-(void)setAudioCodec:(int)arg1 ;
-(void)setHasAudioCodec:(BOOL)arg1 ;
-(BOOL)hasAudioCodec;
-(id)audioCodecAsString:(int)arg1 ;
-(int)StringAsAudioCodec:(id)arg1 ;
-(id)sampleRateAsString:(int)arg1 ;
-(int)StringAsSampleRate:(id)arg1 ;
-(int)cryptoSuite;
-(void)setCryptoSuite:(int)arg1 ;
-(void)setHasCryptoSuite:(BOOL)arg1 ;
-(BOOL)hasCryptoSuite;
-(id)cryptoSuiteAsString:(int)arg1 ;
-(int)StringAsCryptoSuite:(id)arg1 ;
@end

