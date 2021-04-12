/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDMailError;

@interface AWDMailCannotGetMailErrorReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _hostname;
	AWDMailError* _mailError;
	int _protocol;
	int _provider;
	NSString* _serverInfo;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasHostname; 
@property (nonatomic,retain) NSString * hostname;                       //@synthesize hostname=_hostname - In the implementation block
@property (assign,nonatomic) BOOL hasProtocol; 
@property (assign,nonatomic) int protocol;                              //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) BOOL hasProvider; 
@property (assign,nonatomic) int provider;                              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL hasMailError; 
@property (nonatomic,retain) AWDMailError * mailError;                  //@synthesize mailError=_mailError - In the implementation block
@property (nonatomic,readonly) BOOL hasServerInfo; 
@property (nonatomic,retain) NSString * serverInfo;                     //@synthesize serverInfo=_serverInfo - In the implementation block
-(void)setProtocol:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)serverInfo;
-(void)setProvider:(int)arg1 ;
-(int)protocol;
-(int)provider;
-(unsigned long long)timestamp;
-(id)providerAsString:(int)arg1 ;
-(void)setServerInfo:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsProvider:(id)arg1 ;
-(BOOL)hasProvider;
-(id)description;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
-(BOOL)hasHostname;
-(void)setHasProvider:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasServerInfo;
-(void)setHasProtocol:(BOOL)arg1 ;
-(BOOL)hasProtocol;
-(void)setMailError:(AWDMailError *)arg1 ;
-(id)protocolAsString:(int)arg1 ;
-(int)StringAsProtocol:(id)arg1 ;
-(BOOL)hasMailError;
-(AWDMailError *)mailError;
@end

