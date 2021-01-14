/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSString;

@interface SYSyncSessionRestartResponse : PBCodable <NSCopying> {

	SYErrorInfo* _error;
	SYMessageHeader* _header;
	NSString* _sessionID;
	BOOL _accepted;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL accepted;                         //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                   //@synthesize error=_error - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(SYErrorInfo *)arg1 ;
-(SYErrorInfo *)error;
-(id)description;
-(void)setAccepted:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)accepted;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

