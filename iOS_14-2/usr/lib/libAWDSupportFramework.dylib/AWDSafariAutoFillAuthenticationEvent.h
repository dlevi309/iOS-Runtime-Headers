/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSafariAutoFillAuthenticationEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _category;
	int _client;
	NSString* _errorCode;
	NSString* _errorDomain;
	int _status;
	BOOL _onPageLoad;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCategory; 
@property (assign,nonatomic) int category;                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasClient; 
@property (assign,nonatomic) int client;                                //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) BOOL hasOnPageLoad; 
@property (assign,nonatomic) BOOL onPageLoad;                           //@synthesize onPageLoad=_onPageLoad - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setCategory:(int)arg1 ;
-(int)client;
-(void)setClient:(int)arg1 ;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(unsigned long long)timestamp;
-(BOOL)hasClient;
-(void)mergeFrom:(id)arg1 ;
-(int)category;
-(NSString *)errorCode;
-(void)setHasCategory:(BOOL)arg1 ;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)onPageLoad;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(void)setHasClient:(BOOL)arg1 ;
-(id)clientAsString:(int)arg1 ;
-(int)StringAsClient:(id)arg1 ;
-(BOOL)hasCategory;
-(void)setOnPageLoad:(BOOL)arg1 ;
-(void)setHasOnPageLoad:(BOOL)arg1 ;
-(BOOL)hasOnPageLoad;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)dealloc;
-(void)setErrorDomain:(NSString *)arg1 ;
@end

