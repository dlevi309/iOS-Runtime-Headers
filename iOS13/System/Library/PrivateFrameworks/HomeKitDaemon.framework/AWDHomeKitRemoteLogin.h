/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitRemoteLogin : PBCodable <NSCopying> {

	unsigned long long _delay;
	unsigned long long _timestamp;
	int _loginType;
	int _requester;
	int _resultErrorCode;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLoginType; 
@property (assign,nonatomic) int loginType;                             //@synthesize loginType=_loginType - In the implementation block
@property (assign,nonatomic) BOOL hasResultErrorCode; 
@property (assign,nonatomic) int resultErrorCode;                       //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) unsigned long long delay;                  //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) BOOL hasRequester; 
@property (assign,nonatomic) int requester;                             //@synthesize requester=_requester - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)delay;
-(void)setDelay:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasDelay:(BOOL)arg1 ;
-(BOOL)hasDelay;
-(int)requester;
-(void)setRequester:(int)arg1 ;
-(int)loginType;
-(void)setLoginType:(int)arg1 ;
-(void)setResultErrorCode:(int)arg1 ;
-(void)setHasResultErrorCode:(BOOL)arg1 ;
-(BOOL)hasResultErrorCode;
-(int)resultErrorCode;
-(void)setHasRequester:(BOOL)arg1 ;
-(BOOL)hasRequester;
-(id)requesterAsString:(int)arg1 ;
-(int)StringAsRequester:(id)arg1 ;
-(void)setHasLoginType:(BOOL)arg1 ;
-(BOOL)hasLoginType;
-(id)loginTypeAsString:(int)arg1 ;
-(int)StringAsLoginType:(id)arg1 ;
@end

