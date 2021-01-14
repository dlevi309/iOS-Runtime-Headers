/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSData, NSString;

@interface SYStartSyncSession : PBCodable <NSCopying> {

	double _sessionTimeout;
	SYMessageHeader* _header;
	NSData* _metadata;
	NSString* _reason;
	NSString* _sessionID;
	BOOL _expectsRestartSupport;
	BOOL _expectsRollbackSupport;
	BOOL _isResetSync;

}

@property (nonatomic,retain) SYMessageHeader * header;                 //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) BOOL isResetSync;                         //@synthesize isResetSync=_isResetSync - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL expectsRollbackSupport;              //@synthesize expectsRollbackSupport=_expectsRollbackSupport - In the implementation block
@property (assign,nonatomic) BOOL expectsRestartSupport;               //@synthesize expectsRestartSupport=_expectsRestartSupport - In the implementation block
@property (assign,nonatomic) double sessionTimeout;                    //@synthesize sessionTimeout=_sessionTimeout - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSData * metadata;                        //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasReason; 
@property (nonatomic,retain) NSString * reason;                        //@synthesize reason=_reason - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasReason;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(void)setMetadata:(NSData *)arg1 ;
-(id)description;
-(NSString *)reason;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSData *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isResetSync;
-(double)sessionTimeout;
-(void)setIsResetSync:(BOOL)arg1 ;
-(void)setExpectsRollbackSupport:(BOOL)arg1 ;
-(void)setExpectsRestartSupport:(BOOL)arg1 ;
-(void)setSessionTimeout:(double)arg1 ;
-(BOOL)expectsRollbackSupport;
-(BOOL)expectsRestartSupport;
@end

