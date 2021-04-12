/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)pending;
-(NSData *)signedData;
-(void)setSignedData:(NSData *)arg1 ;
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

