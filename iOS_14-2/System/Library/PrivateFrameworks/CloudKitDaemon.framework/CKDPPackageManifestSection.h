/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPPackageManifestSection : PBCodable <NSCopying> {

	long long _size;
	NSData* _signature;
	BOOL _lastSection;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;               //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) long long size;                   //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasLastSection; 
@property (assign,nonatomic) BOOL lastSection;                 //@synthesize lastSection=_lastSection - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)signature;
-(BOOL)hasSignature;
-(long long)size;
-(BOOL)lastSection;
-(void)mergeFrom:(id)arg1 ;
-(void)setSize:(long long)arg1 ;
-(BOOL)hasSize;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(void)setLastSection:(BOOL)arg1 ;
-(void)setHasLastSection:(BOOL)arg1 ;
-(BOOL)hasLastSection;
@end

