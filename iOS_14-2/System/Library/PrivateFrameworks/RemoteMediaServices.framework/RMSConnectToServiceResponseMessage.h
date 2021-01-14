/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RMSControlInterfaceMessage;

@interface RMSConnectToServiceResponseMessage : PBCodable <NSCopying> {

	RMSControlInterfaceMessage* _controlInterface;
	int _responseCode;
	int _responseData;
	int _sessionIdentifier;
	SCD_Struct_RM5 _has;

}

@property (assign,nonatomic) BOOL hasResponseCode; 
@property (assign,nonatomic) int responseCode;                                           //@synthesize responseCode=_responseCode - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasControlInterface; 
@property (nonatomic,retain) RMSControlInterfaceMessage * controlInterface;              //@synthesize controlInterface=_controlInterface - In the implementation block
@property (assign,nonatomic) BOOL hasResponseData; 
@property (assign,nonatomic) int responseData;                                           //@synthesize responseData=_responseData - In the implementation block
-(id)dictionaryRepresentation;
-(void)setResponseCode:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setResponseData:(int)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(int)sessionIdentifier;
-(id)description;
-(int)responseData;
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
-(BOOL)hasResponseData;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(RMSControlInterfaceMessage *)controlInterface;
-(void)setControlInterface:(RMSControlInterfaceMessage *)arg1 ;
-(BOOL)hasControlInterface;
-(void)setHasResponseData:(BOOL)arg1 ;
@end

