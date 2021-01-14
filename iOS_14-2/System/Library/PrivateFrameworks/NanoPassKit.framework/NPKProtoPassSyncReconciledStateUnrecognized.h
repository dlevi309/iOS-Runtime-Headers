/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoPassSyncState, NSData;

@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable <NSCopying> {

	NPKProtoPassSyncState* _libraryPassSyncState;
	NSData* _unrecognizedReconciledStateHash;

}

@property (nonatomic,readonly) BOOL hasUnrecognizedReconciledStateHash; 
@property (nonatomic,retain) NSData * unrecognizedReconciledStateHash;                  //@synthesize unrecognizedReconciledStateHash=_unrecognizedReconciledStateHash - In the implementation block
@property (nonatomic,readonly) BOOL hasLibraryPassSyncState; 
@property (nonatomic,retain) NPKProtoPassSyncState * libraryPassSyncState;              //@synthesize libraryPassSyncState=_libraryPassSyncState - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)unrecognizedReconciledStateHash;
-(NPKProtoPassSyncState *)libraryPassSyncState;
-(void)setUnrecognizedReconciledStateHash:(NSData *)arg1 ;
-(void)setLibraryPassSyncState:(NPKProtoPassSyncState *)arg1 ;
-(BOOL)hasUnrecognizedReconciledStateHash;
-(BOOL)hasLibraryPassSyncState;
@end

