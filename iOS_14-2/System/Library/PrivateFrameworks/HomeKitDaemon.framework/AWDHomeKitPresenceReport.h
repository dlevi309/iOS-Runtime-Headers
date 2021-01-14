/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitPresenceReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _authStatus;
	int _computeStatus;
	int _direction;
	int _reason;
	int _resultErrorCode;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAuthStatus; 
@property (assign,nonatomic) int authStatus;                            //@synthesize authStatus=_authStatus - In the implementation block
@property (assign,nonatomic) BOOL hasComputeStatus; 
@property (assign,nonatomic) int computeStatus;                         //@synthesize computeStatus=_computeStatus - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasDirection; 
@property (assign,nonatomic) int direction;                             //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL hasResultErrorCode; 
@property (assign,nonatomic) int resultErrorCode;                       //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
-(int)direction;
-(id)dictionaryRepresentation;
-(BOOL)hasReason;
-(void)setDirection:(int)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(id)description;
-(int)reason;
-(BOOL)hasDirection;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)authStatus;
-(void)setAuthStatus:(int)arg1 ;
-(void)setHasAuthStatus:(BOOL)arg1 ;
-(BOOL)hasAuthStatus;
-(id)authStatusAsString:(int)arg1 ;
-(int)StringAsAuthStatus:(id)arg1 ;
-(void)setResultErrorCode:(int)arg1 ;
-(void)setHasResultErrorCode:(BOOL)arg1 ;
-(BOOL)hasResultErrorCode;
-(int)resultErrorCode;
-(int)computeStatus;
-(void)setComputeStatus:(int)arg1 ;
-(void)setHasComputeStatus:(BOOL)arg1 ;
-(BOOL)hasComputeStatus;
-(id)computeStatusAsString:(int)arg1 ;
-(int)StringAsComputeStatus:(id)arg1 ;
-(void)setHasDirection:(BOOL)arg1 ;
-(id)directionAsString:(int)arg1 ;
-(int)StringAsDirection:(id)arg1 ;
@end

