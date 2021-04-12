/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _NMRCloudAvailabilityProtobuf : PBCodable <NSCopying> {

	BOOL _canShowCloudMusic;
	BOOL _hasProperNetworkConditionsToPlayMedia;
	SCD_Struct_NM1 _has;

}

@property (assign,nonatomic) BOOL hasHasProperNetworkConditionsToPlayMedia; 
@property (assign,nonatomic) BOOL hasProperNetworkConditionsToPlayMedia;                 //@synthesize hasProperNetworkConditionsToPlayMedia=_hasProperNetworkConditionsToPlayMedia - In the implementation block
@property (assign,nonatomic) BOOL hasCanShowCloudMusic; 
@property (assign,nonatomic) BOOL canShowCloudMusic;                                     //@synthesize canShowCloudMusic=_canShowCloudMusic - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)canShowCloudMusic;
-(void)setCanShowCloudMusic:(BOOL)arg1 ;
-(void)setHasProperNetworkConditionsToPlayMedia:(BOOL)arg1 ;
-(void)setHasHasProperNetworkConditionsToPlayMedia:(BOOL)arg1 ;
-(BOOL)hasHasProperNetworkConditionsToPlayMedia;
-(void)setHasCanShowCloudMusic:(BOOL)arg1 ;
-(BOOL)hasCanShowCloudMusic;
@end

