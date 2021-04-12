/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_AW5 _has;

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
-(id)dictionaryRepresentation;
-(int)requester;
-(unsigned long long)timestamp;
-(void)setDelay:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequester:(int)arg1 ;
-(id)description;
-(BOOL)hasDelay;
-(unsigned long long)delay;
-(void)setHasDelay:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)loginType;
-(void)setLoginType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
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

