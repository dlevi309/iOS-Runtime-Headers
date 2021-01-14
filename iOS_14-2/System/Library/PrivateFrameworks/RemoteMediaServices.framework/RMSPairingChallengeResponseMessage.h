/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSPairingChallengeResponseMessage : PBCodable <NSCopying> {

	NSString* _code;
	int _sessionIdentifier;
	BOOL _userCancelled;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCode; 
@property (nonatomic,retain) NSString * code;                        //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) BOOL hasUserCancelled; 
@property (assign,nonatomic) BOOL userCancelled;                     //@synthesize userCancelled=_userCancelled - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(int)sessionIdentifier;
-(id)description;
-(BOOL)hasCode;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(NSString *)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)userCancelled;
-(void)setUserCancelled:(BOOL)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasUserCancelled:(BOOL)arg1 ;
-(BOOL)hasUserCancelled;
@end

