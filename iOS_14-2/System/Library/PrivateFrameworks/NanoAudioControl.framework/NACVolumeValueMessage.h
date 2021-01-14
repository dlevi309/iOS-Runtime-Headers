/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACVolumeValueMessage : PBCodable <NSCopying> {

	NSString* _category;
	int _originIdentifier;
	float _volumeValue;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) BOOL hasVolumeValue; 
@property (assign,nonatomic) float volumeValue;                     //@synthesize volumeValue=_volumeValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                   //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                  //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCategory:(NSString *)arg1 ;
-(int)originIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(id)description;
-(BOOL)hasCategory;
-(void)setVolumeValue:(float)arg1 ;
-(float)volumeValue;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setHasVolumeValue:(BOOL)arg1 ;
-(BOOL)hasVolumeValue;
@end

