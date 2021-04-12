/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(NPKProtoStandalonePaymentProvisioningMethodMetadata *)arg1 ;
-(NPKProtoStandalonePaymentProvisioningMethodMetadata *)metadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMetadata;
-(BOOL)hasType;
@end

