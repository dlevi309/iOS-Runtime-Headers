/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACVolumeWarningMessage : PBCodable <NSCopying> {

	NSString* _category;
	int _originIdentifier;
	int _volumeWarningState;
	BOOL _volumeWarningEnabled;
	SCD_Struct_NA3 _has;

}

@property (assign,nonatomic) BOOL hasVolumeWarningEnabled; 
@property (assign,nonatomic) BOOL volumeWarningEnabled;                 //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                       //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                      //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVolumeWarningState; 
@property (assign,nonatomic) int volumeWarningState;                    //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(int)originIdentifier;
-(BOOL)volumeWarningEnabled;
-(int)volumeWarningState;
-(void)setOriginIdentifier:(int)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setVolumeWarningEnabled:(BOOL)arg1 ;
-(void)setHasVolumeWarningEnabled:(BOOL)arg1 ;
-(BOOL)hasVolumeWarningEnabled;
-(void)setVolumeWarningState:(int)arg1 ;
-(void)setHasVolumeWarningState:(BOOL)arg1 ;
-(BOOL)hasVolumeWarningState;
@end

