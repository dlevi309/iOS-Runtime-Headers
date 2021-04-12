/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoSignDataResponse : PBCodable <NSCopying> {

	NSData* _certsBytes;
	NSData* _signatureInfoBytes;
	NSData* _signedData;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                              //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasSignedData; 
@property (nonatomic,retain) NSData * signedData;                       //@synthesize signedData=_signedData - In the implementation block
@property (nonatomic,readonly) BOOL hasCertsBytes; 
@property (nonatomic,retain) NSData * certsBytes;                       //@synthesize certsBytes=_certsBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasSignatureInfoBytes; 
@property (nonatomic,retain) NSData * signatureInfoBytes;               //@synthesize signatureInfoBytes=_signatureInfoBytes - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)pending;
-(void)setSignedData:(NSData *)arg1 ;
-(unsigned long long)hash;
-(NSData *)signedData;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setCertsBytes:(NSData *)arg1 ;
-(void)setSignatureInfoBytes:(NSData *)arg1 ;
-(BOOL)hasSignedData;
-(BOOL)hasCertsBytes;
-(BOOL)hasSignatureInfoBytes;
-(NSData *)certsBytes;
-(NSData *)signatureInfoBytes;
@end

