/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBDeviceCollectionDiff : PBCodable <NSCopying> {

	NSMutableArray* _diffs;
	NSMutableArray* _pairingIDs;

}

@property (nonatomic,retain) NSMutableArray * pairingIDs;              //@synthesize pairingIDs=_pairingIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * diffs;                   //@synthesize diffs=_diffs - In the implementation block
+(Class)diffsType;
+(Class)pairingIDsType;
-(id)dictionaryRepresentation;
-(id)pairingIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)diffs;
-(void)addDiffs:(id)arg1 ;
-(unsigned long long)diffsCount;
-(id)diffsAtIndex:(unsigned long long)arg1 ;
-(void)setDiffs:(NSMutableArray *)arg1 ;
-(void)addPairingIDs:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearPairingIDs;
-(void)clearDiffs;
-(NSMutableArray *)pairingIDs;
-(id)description;
-(unsigned long long)pairingIDsCount;
-(void)setPairingIDs:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

