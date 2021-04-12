/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NGMPBP256Key *)signingKey;
-(void)setSigningKey:(NGMPBP256Key *)arg1 ;
-(NSMutableArray *)prekeys;
-(void)addPrekeys:(id)arg1 ;
-(unsigned long long)prekeysCount;
-(void)clearPrekeys;
-(id)prekeysAtIndex:(unsigned long long)arg1 ;
-(void)setPrekeys:(NSMutableArray *)arg1 ;
@end

