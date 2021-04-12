/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobMomentsSettings : PBCodable <NSCopying> {

	unsigned _capabilities;
	unsigned _multiwayCapabilities;
	unsigned _supportedImageTypes;
	unsigned _supportedVideoCodecs;
	SCD_Struct_VC64 _has;

}

@property (assign,nonatomic) unsigned capabilities;                      //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedVideoCodecs; 
@property (assign,nonatomic) unsigned supportedVideoCodecs;              //@synthesize supportedVideoCodecs=_supportedVideoCodecs - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedImageTypes; 
@property (assign,nonatomic) unsigned supportedImageTypes;               //@synthesize supportedImageTypes=_supportedImageTypes - In the implementation block
@property (assign,nonatomic) BOOL hasMultiwayCapabilities; 
@property (assign,nonatomic) unsigned multiwayCapabilities;              //@synthesize multiwayCapabilities=_multiwayCapabilities - In the implementation block
+(unsigned)avcMomentsCapabilitiesForMultiwayMomentsCapabilities:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)capabilities;
-(void)setCapabilities:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)supportedImageTypes;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSupportedVideoCodecs:(unsigned)arg1 ;
-(void)setHasSupportedVideoCodecs:(BOOL)arg1 ;
-(BOOL)hasSupportedVideoCodecs;
-(void)setSupportedImageTypes:(unsigned)arg1 ;
-(void)setHasSupportedImageTypes:(BOOL)arg1 ;
-(BOOL)hasSupportedImageTypes;
-(void)setMultiwayCapabilities:(unsigned)arg1 ;
-(void)setHasMultiwayCapabilities:(BOOL)arg1 ;
-(BOOL)hasMultiwayCapabilities;
-(unsigned)supportedVideoCodecs;
-(unsigned)multiwayCapabilities;
-(id)newVideoCodecSet;
-(id)initWithVideoCodecs:(id)arg1 imageTypes:(id)arg2 ;
-(id)newImageTypeSet;
@end

