/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(unsigned long long)timestamp;
-(int)client;
-(void)setClient:(int)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(NSString *)errorCode;
-(NSString *)errorDomain;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)setHasCategory:(BOOL)arg1 ;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(BOOL)hasErrorDomain;
-(BOOL)hasErrorCode;
-(void)setOnPageLoad:(BOOL)arg1 ;
-(BOOL)hasClient;
-(void)setHasClient:(BOOL)arg1 ;
-(id)clientAsString:(int)arg1 ;
-(int)StringAsClient:(id)arg1 ;
-(void)setHasOnPageLoad:(BOOL)arg1 ;
-(BOOL)hasOnPageLoad;
-(BOOL)onPageLoad;
@end

