/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSupportsWebKit:(BOOL)arg1 ;
-(BOOL)supportsWebKit;
-(void)setHasSupportsWebKit:(BOOL)arg1 ;
-(BOOL)hasSupportsWebKit;
@end

