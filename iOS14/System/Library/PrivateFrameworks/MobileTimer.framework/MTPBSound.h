/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MTPBSound : PBCodable <NSCopying> {

	double _mediaID;
	unsigned _soundType;
	float _soundVolume;
	NSString* _toneID;
	NSString* _vibeID;
	SCD_Struct_MT2 _has;

}

@property (assign,nonatomic) unsigned soundType;               //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,readonly) BOOL hasToneID; 
@property (nonatomic,retain) NSString * toneID;                //@synthesize toneID=_toneID - In the implementation block
@property (assign,nonatomic) BOOL hasMediaID; 
@property (assign,nonatomic) double mediaID;                   //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,readonly) BOOL hasVibeID; 
@property (nonatomic,retain) NSString * vibeID;                //@synthesize vibeID=_vibeID - In the implementation block
@property (assign,nonatomic) BOOL hasSoundVolume; 
@property (assign,nonatomic) float soundVolume;                //@synthesize soundVolume=_soundVolume - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)toneID;
-(float)soundVolume;
-(BOOL)hasToneID;
-(void)setToneID:(NSString *)arg1 ;
-(void)setVibeID:(NSString *)arg1 ;
-(void)setMediaID:(double)arg1 ;
-(void)setHasMediaID:(BOOL)arg1 ;
-(BOOL)hasMediaID;
-(BOOL)hasVibeID;
-(void)setHasSoundVolume:(BOOL)arg1 ;
-(BOOL)hasSoundVolume;
-(NSString *)vibeID;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)soundType;
-(void)setSoundType:(unsigned)arg1 ;
-(id)description;
-(double)mediaID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSoundVolume:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

