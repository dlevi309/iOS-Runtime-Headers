/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)protocol;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setProvider:(int)arg1 ;
-(void)setProtocol:(int)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)hostname;
-(int)provider;
-(void)setHostname:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasHostname;
-(BOOL)hasProvider;
-(void)setHasProvider:(BOOL)arg1 ;
-(NSString *)serverInfo;
-(void)setServerInfo:(NSString *)arg1 ;
-(id)providerAsString:(int)arg1 ;
-(int)StringAsProvider:(id)arg1 ;
-(void)setMailError:(AWDMailError *)arg1 ;
-(void)setHasProtocol:(BOOL)arg1 ;
-(BOOL)hasProtocol;
-(id)protocolAsString:(int)arg1 ;
-(int)StringAsProtocol:(id)arg1 ;
-(BOOL)hasMailError;
-(AWDMailError *)mailError;
-(BOOL)hasServerInfo;
@end

