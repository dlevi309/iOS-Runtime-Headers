/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)code;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(BOOL)hasSessionIdentifier;
-(BOOL)hasCode;
-(BOOL)userCancelled;
-(void)setUserCancelled:(BOOL)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasUserCancelled:(BOOL)arg1 ;
-(BOOL)hasUserCancelled;
@end

