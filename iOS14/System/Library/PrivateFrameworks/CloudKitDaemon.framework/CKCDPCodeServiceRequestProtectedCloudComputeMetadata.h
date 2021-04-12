/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadata : PBCodable <NSCopying> {

	NSMutableArray* _cryptoSessions;

}

@property (nonatomic,retain) NSMutableArray * cryptoSessions;              //@synthesize cryptoSessions=_cryptoSessions - In the implementation block
+(Class)cryptoSessionsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addCryptoSessions:(id)arg1 ;
-(unsigned long long)cryptoSessionsCount;
-(void)clearCryptoSessions;
-(id)cryptoSessionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cryptoSessions;
-(void)setCryptoSessions:(NSMutableArray *)arg1 ;
@end

