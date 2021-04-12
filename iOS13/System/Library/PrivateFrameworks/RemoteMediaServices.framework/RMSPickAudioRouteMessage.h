/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSPickAudioRouteMessage : PBCodable <NSCopying> {

	long long _macAddress;
	int _sessionIdentifier;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) BOOL hasMacAddress; 
@property (assign,nonatomic) long long macAddress;                   //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)macAddress;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setMacAddress:(long long)arg1 ;
-(BOOL)hasMacAddress;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasMacAddress:(BOOL)arg1 ;
@end

