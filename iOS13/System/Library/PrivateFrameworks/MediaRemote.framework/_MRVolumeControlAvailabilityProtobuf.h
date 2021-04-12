/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying> {

	int _volumeCapabilities;
	BOOL _volumeControlAvailable;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasVolumeControlAvailable; 
@property (assign,nonatomic) BOOL volumeControlAvailable;                 //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasVolumeCapabilities; 
@property (assign,nonatomic) int volumeCapabilities;                      //@synthesize volumeCapabilities=_volumeCapabilities - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)volumeCapabilities;
-(void)setVolumeCapabilities:(int)arg1 ;
-(BOOL)hasVolumeCapabilities;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)hasVolumeControlAvailable;
-(BOOL)volumeControlAvailable;
-(void)setHasVolumeControlAvailable:(BOOL)arg1 ;
-(void)setHasVolumeCapabilities:(BOOL)arg1 ;
@end

