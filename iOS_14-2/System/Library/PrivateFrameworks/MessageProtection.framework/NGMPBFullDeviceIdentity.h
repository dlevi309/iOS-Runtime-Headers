/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NGMPBP256Key;

@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying> {

	NSMutableArray* _prekeys;
	NGMPBP256Key* _signingKey;

}

@property (nonatomic,retain) NGMPBP256Key * signingKey;              //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * prekeys;               //@synthesize prekeys=_prekeys - In the implementation block
+(Class)prekeysType;
-(id)dictionaryRepresentation;
-(void)setSigningKey:(NGMPBP256Key *)arg1 ;
-(void)addPrekeys:(id)arg1 ;
-(NGMPBP256Key *)signingKey;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)prekeys;
-(void)clearPrekeys;
-(void)setPrekeys:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(id)prekeysAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)prekeysCount;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

