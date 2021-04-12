/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoHash, NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying> {

	NPKProtoHash* _expectedHash;
	NSMutableArray* _manifestHashes;
	unsigned _resyncID;
	NSMutableArray* _uniqueIDs;
	BOOL _fullResyncNeeded;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,readonly) BOOL hasExpectedHash; 
@property (nonatomic,retain) NPKProtoHash * expectedHash;                  //@synthesize expectedHash=_expectedHash - In the implementation block
@property (nonatomic,retain) NSMutableArray * uniqueIDs;                   //@synthesize uniqueIDs=_uniqueIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * manifestHashes;              //@synthesize manifestHashes=_manifestHashes - In the implementation block
@property (assign,nonatomic) BOOL hasFullResyncNeeded; 
@property (assign,nonatomic) BOOL fullResyncNeeded;                        //@synthesize fullResyncNeeded=_fullResyncNeeded - In the implementation block
@property (assign,nonatomic) BOOL hasResyncID; 
@property (assign,nonatomic) unsigned resyncID;                            //@synthesize resyncID=_resyncID - In the implementation block
+(Class)uniqueIDsType;
+(Class)manifestHashesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)uniqueIDs;
-(void)setUniqueIDs:(NSMutableArray *)arg1 ;
-(void)addUniqueIDs:(id)arg1 ;
-(void)addManifestHashes:(id)arg1 ;
-(void)setExpectedHash:(NPKProtoHash *)arg1 ;
-(unsigned long long)uniqueIDsCount;
-(void)clearUniqueIDs;
-(id)uniqueIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)manifestHashesCount;
-(void)clearManifestHashes;
-(id)manifestHashesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExpectedHash;
-(void)setFullResyncNeeded:(BOOL)arg1 ;
-(void)setHasFullResyncNeeded:(BOOL)arg1 ;
-(BOOL)hasFullResyncNeeded;
-(void)setResyncID:(unsigned)arg1 ;
-(void)setHasResyncID:(BOOL)arg1 ;
-(BOOL)hasResyncID;
-(NPKProtoHash *)expectedHash;
-(NSMutableArray *)manifestHashes;
-(void)setManifestHashes:(NSMutableArray *)arg1 ;
-(BOOL)fullResyncNeeded;
-(unsigned)resyncID;
@end

