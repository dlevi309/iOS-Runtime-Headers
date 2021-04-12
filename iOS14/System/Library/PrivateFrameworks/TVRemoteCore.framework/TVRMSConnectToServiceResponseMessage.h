/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TVRMSControlInterfaceMessage;

@interface TVRMSConnectToServiceResponseMessage : PBCodable <NSCopying> {

	TVRMSControlInterfaceMessage* _controlInterface;
	int _responseCode;
	int _sessionIdentifier;
	SCD_Struct_TV2 _has;

}

@property (assign,nonatomic) BOOL hasResponseCode; 
@property (assign,nonatomic) int responseCode;                                             //@synthesize responseCode=_responseCode - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasControlInterface; 
@property (nonatomic,retain) TVRMSControlInterfaceMessage * controlInterface;              //@synthesize controlInterface=_controlInterface - In the implementation block
-(id)dictionaryRepresentation;
-(void)setResponseCode:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(int)sessionIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)responseCode;
-(void)setHasResponseCode:(BOOL)arg1 ;
-(BOOL)hasResponseCode;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(TVRMSControlInterfaceMessage *)controlInterface;
-(void)setControlInterface:(TVRMSControlInterfaceMessage *)arg1 ;
-(BOOL)hasControlInterface;
@end

