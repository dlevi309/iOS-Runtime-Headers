/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable <NSCopying> {

	NSMutableArray* _attestations;

}

@property (nonatomic,retain) NSMutableArray * attestations;              //@synthesize attestations=_attestations - In the implementation block
+(Class)attestationsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAttestations:(id)arg1 ;
-(unsigned long long)attestationsCount;
-(void)clearAttestations;
-(id)attestationsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)attestations;
-(void)setAttestations:(NSMutableArray *)arg1 ;
@end

