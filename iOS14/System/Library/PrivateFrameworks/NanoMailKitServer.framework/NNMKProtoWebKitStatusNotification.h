/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NNMKProtoWebKitStatusNotification : PBCodable <NSCopying> {

	BOOL _supportsWebKit;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasSupportsWebKit; 
@property (assign,nonatomic) BOOL supportsWebKit;                 //@synthesize supportsWebKit=_supportsWebKit - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSupportsWebKit:(BOOL)arg1 ;
-(BOOL)supportsWebKit;
-(void)setHasSupportsWebKit:(BOOL)arg1 ;
-(BOOL)hasSupportsWebKit;
@end

