/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface RMSBeginDiscoveryMessage : PBCodable <NSCopying> {

	int _discoveryTypes;
	NSMutableArray* _pairedNetworkNames;
	BOOL _hasPairedNetworkNames;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) BOOL hasDiscoveryTypes; 
@property (assign,nonatomic) int discoveryTypes;                               //@synthesize discoveryTypes=_discoveryTypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * pairedNetworkNames;              //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
@property (assign,nonatomic) BOOL hasHasPairedNetworkNames; 
@property (assign,nonatomic) BOOL hasPairedNetworkNames;                       //@synthesize hasPairedNetworkNames=_hasPairedNetworkNames - In the implementation block
+(Class)pairedNetworkNamesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)discoveryTypes;
-(void)setDiscoveryTypes:(int)arg1 ;
-(NSMutableArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSMutableArray *)arg1 ;
-(void)setHasPairedNetworkNames:(BOOL)arg1 ;
-(void)addPairedNetworkNames:(id)arg1 ;
-(unsigned long long)pairedNetworkNamesCount;
-(void)clearPairedNetworkNames;
-(id)pairedNetworkNamesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPairedNetworkNames;
-(void)setHasDiscoveryTypes:(BOOL)arg1 ;
-(BOOL)hasDiscoveryTypes;
-(void)setHasHasPairedNetworkNames:(BOOL)arg1 ;
-(BOOL)hasHasPairedNetworkNames;
@end

