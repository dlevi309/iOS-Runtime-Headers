/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSData, NSString;

@interface SYStartSyncSessionResponse : PBCodable <NSCopying> {

	SYErrorInfo* _error;
	SYMessageHeader* _header;
	NSData* _metadata;
	NSString* _sessionID;
	BOOL _accepted;
	BOOL _supportsRestart;
	BOOL _supportsRollback;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL accepted;                         //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                   //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL supportsRollback;                 //@synthesize supportsRollback=_supportsRollback - In the implementation block
@property (assign,nonatomic) BOOL supportsRestart;                  //@synthesize supportsRestart=_supportsRestart - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSData * metadata;                     //@synthesize metadata=_metadata - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SYErrorInfo *)error;
-(void)setError:(SYErrorInfo *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(NSData *)arg1 ;
-(NSData *)metadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(SYMessageHeader *)header;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(BOOL)hasMetadata;
-(BOOL)accepted;
-(void)setAccepted:(BOOL)arg1 ;
-(BOOL)supportsRestart;
-(BOOL)supportsRollback;
-(void)setSupportsRollback:(BOOL)arg1 ;
-(void)setSupportsRestart:(BOOL)arg1 ;
@end

