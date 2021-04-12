/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentProvisioningMethodMetadata, NSString;

@interface NPKProtoStandalonePaymentProvisioningMethodMetadataDictionaryEntry : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentProvisioningMethodMetadata* _metadata;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NPKProtoStandalonePaymentProvisioningMethodMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasType;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setMetadata:(NPKProtoStandalonePaymentProvisioningMethodMetadata *)arg1 ;
-(id)description;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NPKProtoStandalonePaymentProvisioningMethodMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

