/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIMRemoteURLLoadCompleted : PBCodable <NSCopying> {

	unsigned long long _connectEndToRequestStartMillis;
	unsigned long long _connectStartToConnectEndMillis;
	unsigned long long _connectStartToSecureConnectionStartMillis;
	unsigned long long _domainLookupEndToConnectStartMillis;
	unsigned long long _domainLookupStartToDomainLookupEndMillis;
	unsigned long long _fetchStartToDomainLookupStartMillis;
	unsigned long long _navigationStartToRedirectStartMillis;
	unsigned long long _redirectEndToFetchStartMillis;
	unsigned long long _redirectStartToRedirectEndMillis;
	unsigned long long _requestStartToResponseStartMillis;
	unsigned long long _responseStartToResponseEndMillis;
	unsigned long long _secureConnectionStartToConnectEndMillis;
	unsigned long long _timestamp;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationStartToRedirectStartMillis; 
@property (assign,nonatomic) unsigned long long navigationStartToRedirectStartMillis;                   //@synthesize navigationStartToRedirectStartMillis=_navigationStartToRedirectStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectStartToRedirectEndMillis; 
@property (assign,nonatomic) unsigned long long redirectStartToRedirectEndMillis;                       //@synthesize redirectStartToRedirectEndMillis=_redirectStartToRedirectEndMillis - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectEndToFetchStartMillis; 
@property (assign,nonatomic) unsigned long long redirectEndToFetchStartMillis;                          //@synthesize redirectEndToFetchStartMillis=_redirectEndToFetchStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasFetchStartToDomainLookupStartMillis; 
@property (assign,nonatomic) unsigned long long fetchStartToDomainLookupStartMillis;                    //@synthesize fetchStartToDomainLookupStartMillis=_fetchStartToDomainLookupStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupStartToDomainLookupEndMillis; 
@property (assign,nonatomic) unsigned long long domainLookupStartToDomainLookupEndMillis;               //@synthesize domainLookupStartToDomainLookupEndMillis=_domainLookupStartToDomainLookupEndMillis - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupEndToConnectStartMillis; 
@property (assign,nonatomic) unsigned long long domainLookupEndToConnectStartMillis;                    //@synthesize domainLookupEndToConnectStartMillis=_domainLookupEndToConnectStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasConnectStartToSecureConnectionStartMillis; 
@property (assign,nonatomic) unsigned long long connectStartToSecureConnectionStartMillis;              //@synthesize connectStartToSecureConnectionStartMillis=_connectStartToSecureConnectionStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasConnectStartToConnectEndMillis; 
@property (assign,nonatomic) unsigned long long connectStartToConnectEndMillis;                         //@synthesize connectStartToConnectEndMillis=_connectStartToConnectEndMillis - In the implementation block
@property (assign,nonatomic) BOOL hasSecureConnectionStartToConnectEndMillis; 
@property (assign,nonatomic) unsigned long long secureConnectionStartToConnectEndMillis;                //@synthesize secureConnectionStartToConnectEndMillis=_secureConnectionStartToConnectEndMillis - In the implementation block
@property (assign,nonatomic) BOOL hasConnectEndToRequestStartMillis; 
@property (assign,nonatomic) unsigned long long connectEndToRequestStartMillis;                         //@synthesize connectEndToRequestStartMillis=_connectEndToRequestStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStartToResponseStartMillis; 
@property (assign,nonatomic) unsigned long long requestStartToResponseStartMillis;                      //@synthesize requestStartToResponseStartMillis=_requestStartToResponseStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasResponseStartToResponseEndMillis; 
@property (assign,nonatomic) unsigned long long responseStartToResponseEndMillis;                       //@synthesize responseStartToResponseEndMillis=_responseStartToResponseEndMillis - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)requestStartToResponseStartMillis;
-(void)setHasDomainLookupStartToDomainLookupEndMillis:(BOOL)arg1 ;
-(unsigned long long)navigationStartToRedirectStartMillis;
-(void)setDomainLookupEndToConnectStartMillis:(unsigned long long)arg1 ;
-(BOOL)hasDomainLookupEndToConnectStartMillis;
-(void)setHasConnectStartToSecureConnectionStartMillis:(BOOL)arg1 ;
-(unsigned long long)responseStartToResponseEndMillis;
-(void)setConnectEndToRequestStartMillis:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasRedirectStartToRedirectEndMillis;
-(void)setNavigationStartToRedirectStartMillis:(unsigned long long)arg1 ;
-(BOOL)hasResponseStartToResponseEndMillis;
-(BOOL)hasSecureConnectionStartToConnectEndMillis;
-(BOOL)hasNavigationStartToRedirectStartMillis;
-(void)mergeFrom:(id)arg1 ;
-(void)setConnectStartToSecureConnectionStartMillis:(unsigned long long)arg1 ;
-(void)setSecureConnectionStartToConnectEndMillis:(unsigned long long)arg1 ;
-(unsigned long long)connectStartToSecureConnectionStartMillis;
-(unsigned long long)redirectEndToFetchStartMillis;
-(id)description;
-(void)setHasResponseStartToResponseEndMillis:(BOOL)arg1 ;
-(void)setHasRedirectStartToRedirectEndMillis:(BOOL)arg1 ;
-(BOOL)hasConnectStartToConnectEndMillis;
-(BOOL)hasRequestStartToResponseStartMillis;
-(BOOL)hasRedirectEndToFetchStartMillis;
-(unsigned long long)connectStartToConnectEndMillis;
-(void)setFetchStartToDomainLookupStartMillis:(unsigned long long)arg1 ;
-(unsigned long long)redirectStartToRedirectEndMillis;
-(unsigned long long)fetchStartToDomainLookupStartMillis;
-(void)setHasRedirectEndToFetchStartMillis:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setDomainLookupStartToDomainLookupEndMillis:(unsigned long long)arg1 ;
-(void)setHasDomainLookupEndToConnectStartMillis:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasNavigationStartToRedirectStartMillis:(BOOL)arg1 ;
-(void)setHasRequestStartToResponseStartMillis:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setRequestStartToResponseStartMillis:(unsigned long long)arg1 ;
-(BOOL)hasConnectStartToSecureConnectionStartMillis;
-(void)setHasConnectStartToConnectEndMillis:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasSecureConnectionStartToConnectEndMillis:(BOOL)arg1 ;
-(BOOL)hasFetchStartToDomainLookupStartMillis;
-(void)setRedirectStartToRedirectEndMillis:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDomainLookupStartToDomainLookupEndMillis;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)secureConnectionStartToConnectEndMillis;
-(void)setResponseStartToResponseEndMillis:(unsigned long long)arg1 ;
-(void)setRedirectEndToFetchStartMillis:(unsigned long long)arg1 ;
-(BOOL)hasConnectEndToRequestStartMillis;
-(unsigned long long)domainLookupEndToConnectStartMillis;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)domainLookupStartToDomainLookupEndMillis;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasFetchStartToDomainLookupStartMillis:(BOOL)arg1 ;
-(void)setHasConnectEndToRequestStartMillis:(BOOL)arg1 ;
-(void)setConnectStartToConnectEndMillis:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)connectEndToRequestStartMillis;
@end

