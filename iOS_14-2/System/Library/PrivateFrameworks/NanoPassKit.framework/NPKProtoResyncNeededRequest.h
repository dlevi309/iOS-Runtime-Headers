/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setUniqueIDs:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)uniqueIDs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NPKProtoHash *)expectedHash;
-(void)setExpectedHash:(NPKProtoHash *)arg1 ;
-(void)addUniqueIDs:(id)arg1 ;
-(void)addManifestHashes:(id)arg1 ;
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
-(NSMutableArray *)manifestHashes;
-(void)setManifestHashes:(NSMutableArray *)arg1 ;
-(BOOL)fullResyncNeeded;
-(unsigned)resyncID;
@end

