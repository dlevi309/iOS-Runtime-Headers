/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACVolumeControlAvailabilityMessage : PBCodable <NSCopying> {

	NSString* _category;
	int _originIdentifier;
	BOOL _volumeControlAvailable;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) BOOL hasVolumeControlAvailable; 
@property (assign,nonatomic) BOOL volumeControlAvailable;                 //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                         //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                        //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCategory:(NSString *)arg1 ;
-(int)originIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(id)description;
-(BOOL)hasCategory;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(void)setHasVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)hasVolumeControlAvailable;
-(BOOL)volumeControlAvailable;
@end

