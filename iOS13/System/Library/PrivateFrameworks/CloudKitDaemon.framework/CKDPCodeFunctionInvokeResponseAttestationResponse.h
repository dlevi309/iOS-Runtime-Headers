/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addAttestations:(id)arg1 ;
-(unsigned long long)attestationsCount;
-(void)clearAttestations;
-(id)attestationsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)attestations;
-(void)setAttestations:(NSMutableArray *)arg1 ;
@end

