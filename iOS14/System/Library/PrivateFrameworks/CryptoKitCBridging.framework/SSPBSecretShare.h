/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CryptoKitCBridging.framework/CryptoKitCBridging
*/

#import <CryptoKitCBridging/CryptoKitCBridging-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SSPBSecretShare : PBCodable <NSCopying> {

	NSData* _associatedData;
	NSData* _ciphertext;
	NSData* _iv;
	unsigned _shareX;
	NSData* _shareY;
	NSData* _tag;
	unsigned _threshold;
	unsigned _version;
	SCD_Struct_SS2 _has;

}

@property (assign,nonatomic) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned shareX;                       //@synthesize shareX=_shareX - In the implementation block
@property (nonatomic,retain) NSData * shareY;                       //@synthesize shareY=_shareY - In the implementation block
@property (assign,nonatomic) BOOL hasThreshold; 
@property (assign,nonatomic) unsigned threshold;                    //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,retain) NSData * iv;                           //@synthesize iv=_iv - In the implementation block
@property (nonatomic,retain) NSData * ciphertext;                   //@synthesize ciphertext=_ciphertext - In the implementation block
@property (nonatomic,retain) NSData * tag;                          //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) BOOL hasAssociatedData; 
@property (nonatomic,retain) NSData * associatedData;               //@synthesize associatedData=_associatedData - In the implementation block
-(NSData *)iv;
-(id)dictionaryRepresentation;
-(unsigned)threshold;
-(void)setTag:(NSData *)arg1 ;
-(void)setIv:(NSData *)arg1 ;
-(NSData *)tag;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)shareX;
-(NSData *)shareY;
-(NSData *)ciphertext;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setThreshold:(unsigned)arg1 ;
-(void)setShareY:(NSData *)arg1 ;
-(void)setCiphertext:(NSData *)arg1 ;
-(void)setAssociatedData:(NSData *)arg1 ;
-(void)setHasThreshold:(BOOL)arg1 ;
-(BOOL)hasThreshold;
-(BOOL)hasAssociatedData;
-(void)setShareX:(unsigned)arg1 ;
-(NSData *)associatedData;
@end

