/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoProvisioningDataResponse : PBCodable <NSCopying> {

	NSData* _provisioningDataBytes;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                 //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasProvisioningDataBytes; 
@property (nonatomic,retain) NSData * provisioningDataBytes;               //@synthesize provisioningDataBytes=_provisioningDataBytes - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setProvisioningDataBytes:(NSData *)arg1 ;
-(BOOL)hasProvisioningDataBytes;
-(NSData *)provisioningDataBytes;
@end

