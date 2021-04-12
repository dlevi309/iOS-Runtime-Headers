/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoCatalog, NPKProtoHash, NPKProtoPass, NSData;

@interface NPKProtoUpdatePassRequest : PBRequest <NSCopying> {

	NPKProtoCatalog* _catalog;
	unsigned _lastKnownResyncID;
	NPKProtoHash* _libraryHash;
	NPKProtoPass* _pass;
	NSData* _previousManifestHash;
	unsigned _resyncID;
	unsigned _syncID;
	SCD_Struct_NP3 _has;

}

@property (nonatomic,retain) NPKProtoPass * pass;                         //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) BOOL hasLibraryHash; 
@property (nonatomic,retain) NPKProtoHash * libraryHash;                  //@synthesize libraryHash=_libraryHash - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousManifestHash; 
@property (nonatomic,retain) NSData * previousManifestHash;               //@synthesize previousManifestHash=_previousManifestHash - In the implementation block
@property (assign,nonatomic) BOOL hasResyncID; 
@property (assign,nonatomic) unsigned resyncID;                           //@synthesize resyncID=_resyncID - In the implementation block
@property (nonatomic,readonly) BOOL hasCatalog; 
@property (nonatomic,retain) NPKProtoCatalog * catalog;                   //@synthesize catalog=_catalog - In the implementation block
@property (assign,nonatomic) BOOL hasLastKnownResyncID; 
@property (assign,nonatomic) unsigned lastKnownResyncID;                  //@synthesize lastKnownResyncID=_lastKnownResyncID - In the implementation block
@property (assign,nonatomic) BOOL hasSyncID; 
@property (assign,nonatomic) unsigned syncID;                             //@synthesize syncID=_syncID - In the implementation block
-(NPKProtoCatalog *)catalog;
-(id)dictionaryRepresentation;
-(void)setPass:(NPKProtoPass *)arg1 ;
-(unsigned)syncID;
-(void)mergeFrom:(id)arg1 ;
-(void)setCatalog:(NPKProtoCatalog *)arg1 ;
-(id)description;
-(NPKProtoPass *)pass;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSyncID:(unsigned)arg1 ;
-(void)setResyncID:(unsigned)arg1 ;
-(void)setHasResyncID:(BOOL)arg1 ;
-(BOOL)hasResyncID;
-(unsigned)resyncID;
-(void)setLibraryHash:(NPKProtoHash *)arg1 ;
-(void)setPreviousManifestHash:(NSData *)arg1 ;
-(BOOL)hasLibraryHash;
-(BOOL)hasPreviousManifestHash;
-(BOOL)hasCatalog;
-(void)setLastKnownResyncID:(unsigned)arg1 ;
-(void)setHasLastKnownResyncID:(BOOL)arg1 ;
-(BOOL)hasLastKnownResyncID;
-(void)setHasSyncID:(BOOL)arg1 ;
-(BOOL)hasSyncID;
-(NPKProtoHash *)libraryHash;
-(NSData *)previousManifestHash;
-(unsigned)lastKnownResyncID;
@end

