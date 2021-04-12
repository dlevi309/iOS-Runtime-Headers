/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)size;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)signature;
-(BOOL)hasSize;
-(void)setSignature:(NSData *)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)lastSection;
-(BOOL)hasSignature;
-(void)setLastSection:(BOOL)arg1 ;
-(void)setHasLastSection:(BOOL)arg1 ;
-(BOOL)hasLastSection;
@end

