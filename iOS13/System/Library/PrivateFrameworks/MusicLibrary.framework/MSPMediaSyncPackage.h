/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MSPMediaSyncError, MSPMediaSyncHeader, MSPMediaSyncOperation;

@interface MSPMediaSyncPackage : PBCodable <NSCopying> {

	MSPMediaSyncError* _error;
	MSPMediaSyncHeader* _header;
	MSPMediaSyncOperation* _syncOperation;
	int _type;
	BOOL _lastPackage;
	SCD_Struct_MI1 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasLastPackage; 
@property (assign,nonatomic) BOOL lastPackage;                                   //@synthesize lastPackage=_lastPackage - In the implementation block
@property (nonatomic,readonly) BOOL hasHeader; 
@property (nonatomic,retain) MSPMediaSyncHeader * header;                        //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncOperation; 
@property (nonatomic,retain) MSPMediaSyncOperation * syncOperation;              //@synthesize syncOperation=_syncOperation - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) MSPMediaSyncError * error;                          //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(MSPMediaSyncError *)error;
-(void)setError:(MSPMediaSyncError *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasError;
-(MSPMediaSyncHeader *)header;
-(void)setHeader:(MSPMediaSyncHeader *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasHeader;
-(BOOL)lastPackage;
-(MSPMediaSyncOperation *)syncOperation;
-(void)setSyncOperation:(MSPMediaSyncOperation *)arg1 ;
-(void)setLastPackage:(BOOL)arg1 ;
-(void)setHasLastPackage:(BOOL)arg1 ;
-(BOOL)hasLastPackage;
-(BOOL)hasSyncOperation;
@end

