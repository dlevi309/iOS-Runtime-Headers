/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoInitialMessagesSyncBatch : PBCodable <NSCopying> {

	unsigned _fullSyncVersion;
	NSMutableArray* _initialMessagesSyncs;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                           //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * initialMessagesSyncs;              //@synthesize initialMessagesSyncs=_initialMessagesSyncs - In the implementation block
+(Class)initialMessagesSyncType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)addInitialMessagesSync:(id)arg1 ;
-(unsigned long long)initialMessagesSyncsCount;
-(void)clearInitialMessagesSyncs;
-(id)initialMessagesSyncAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)initialMessagesSyncs;
-(void)setInitialMessagesSyncs:(NSMutableArray *)arg1 ;
@end

