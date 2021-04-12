/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRVolumeControlAvailabilityProtobuf;

@interface _MRGetVolumeControlCapabilitiesResultMessageProtobuf : PBCodable <NSCopying> {

	_MRVolumeControlAvailabilityProtobuf* _capabilities;

}

@property (nonatomic,readonly) BOOL hasCapabilities; 
@property (nonatomic,retain) _MRVolumeControlAvailabilityProtobuf * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(_MRVolumeControlAvailabilityProtobuf *)capabilities;
-(void)setCapabilities:(_MRVolumeControlAvailabilityProtobuf *)arg1 ;
-(BOOL)hasCapabilities;
@end

