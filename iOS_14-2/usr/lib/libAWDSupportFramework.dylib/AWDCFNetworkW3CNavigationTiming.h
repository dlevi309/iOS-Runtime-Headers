/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCFNetworkW3CNavigationTiming : PBCodable <NSCopying> {

	unsigned long long _connectEnd;
	unsigned long long _connectStart;
	unsigned long long _domainLookupEnd;
	unsigned long long _domainLookupStart;
	unsigned long long _fetchStart;
	long long _isCellular;
	long long _isReused;
	long long _redirectCount;
	long long _redirectCountW3C;
	unsigned long long _redirectEnd;
	unsigned long long _redirectStart;
	unsigned long long _requestStart;
	unsigned long long _responseEnd;
	unsigned long long _responseStart;
	unsigned long long _secureConnectionStart;
	unsigned long long _timestamp;
	NSString* _hostname;
	NSString* _procname;
	NSString* _url;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectStart; 
@property (assign,nonatomic) unsigned long long redirectStart;                      //@synthesize redirectStart=_redirectStart - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectEnd; 
@property (assign,nonatomic) unsigned long long redirectEnd;                        //@synthesize redirectEnd=_redirectEnd - In the implementation block
@property (assign,nonatomic) BOOL hasFetchStart; 
@property (assign,nonatomic) unsigned long long fetchStart;                         //@synthesize fetchStart=_fetchStart - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupStart; 
@property (assign,nonatomic) unsigned long long domainLookupStart;                  //@synthesize domainLookupStart=_domainLookupStart - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupEnd; 
@property (assign,nonatomic) unsigned long long domainLookupEnd;                    //@synthesize domainLookupEnd=_domainLookupEnd - In the implementation block
@property (assign,nonatomic) BOOL hasConnectStart; 
@property (assign,nonatomic) unsigned long long connectStart;                       //@synthesize connectStart=_connectStart - In the implementation block
@property (assign,nonatomic) BOOL hasSecureConnectionStart; 
@property (assign,nonatomic) unsigned long long secureConnectionStart;              //@synthesize secureConnectionStart=_secureConnectionStart - In the implementation block
@property (assign,nonatomic) BOOL hasConnectEnd; 
@property (assign,nonatomic) unsigned long long connectEnd;                         //@synthesize connectEnd=_connectEnd - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStart; 
@property (assign,nonatomic) unsigned long long requestStart;                       //@synthesize requestStart=_requestStart - In the implementation block
@property (assign,nonatomic) BOOL hasResponseStart; 
@property (assign,nonatomic) unsigned long long responseStart;                      //@synthesize responseStart=_responseStart - In the implementation block
@property (assign,nonatomic) BOOL hasResponseEnd; 
@property (assign,nonatomic) unsigned long long responseEnd;                        //@synthesize responseEnd=_responseEnd - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectCountW3C; 
@property (assign,nonatomic) long long redirectCountW3C;                            //@synthesize redirectCountW3C=_redirectCountW3C - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectCount; 
@property (assign,nonatomic) long long redirectCount;                               //@synthesize redirectCount=_redirectCount - In the implementation block
@property (assign,nonatomic) BOOL hasIsReused; 
@property (assign,nonatomic) long long isReused;                                    //@synthesize isReused=_isReused - In the implementation block
@property (nonatomic,readonly) BOOL hasHostname; 
@property (nonatomic,retain) NSString * hostname;                                   //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL hasIsCellular; 
@property (assign,nonatomic) long long isCellular;                                  //@synthesize isCellular=_isCellular - In the implementation block
@property (nonatomic,readonly) BOOL hasProcname; 
@property (nonatomic,retain) NSString * procname;                                   //@synthesize procname=_procname - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasConnectStart;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(unsigned long long)connectStart;
-(BOOL)hasRequestStart;
-(BOOL)hasRedirectCount;
-(void)setHasRedirectCount:(BOOL)arg1 ;
-(void)setHasFetchStart:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)fetchStart;
-(BOOL)hasConnectEnd;
-(void)setConnectStart:(unsigned long long)arg1 ;
-(void)setHasConnectEnd:(BOOL)arg1 ;
-(NSString *)procname;
-(void)setRequestStart:(unsigned long long)arg1 ;
-(unsigned long long)requestStart;
-(unsigned long long)responseStart;
-(void)setResponseEnd:(unsigned long long)arg1 ;
-(long long)redirectCountW3C;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)domainLookupEnd;
-(void)setFetchStart:(unsigned long long)arg1 ;
-(BOOL)hasDomainLookupEnd;
-(NSString *)url;
-(void)setRedirectEnd:(unsigned long long)arg1 ;
-(void)setRedirectCount:(long long)arg1 ;
-(void)setResponseStart:(unsigned long long)arg1 ;
-(BOOL)hasResponseStart;
-(unsigned long long)domainLookupStart;
-(void)setDomainLookupEnd:(unsigned long long)arg1 ;
-(BOOL)hasDomainLookupStart;
-(id)description;
-(void)setHostname:(NSString *)arg1 ;
-(void)setRedirectStart:(unsigned long long)arg1 ;
-(long long)redirectCount;
-(NSString *)hostname;
-(BOOL)hasUrl;
-(BOOL)hasHostname;
-(unsigned long long)redirectStart;
-(unsigned long long)redirectEnd;
-(void)setConnectEnd:(unsigned long long)arg1 ;
-(BOOL)hasProcname;
-(void)setProcname:(NSString *)arg1 ;
-(void)setHasDomainLookupEnd:(BOOL)arg1 ;
-(void)setRedirectCountW3C:(long long)arg1 ;
-(long long)isCellular;
-(void)setUrl:(NSString *)arg1 ;
-(void)setHasConnectStart:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasFetchStart;
-(BOOL)hasTimestamp;
-(BOOL)hasResponseEnd;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDomainLookupStart:(unsigned long long)arg1 ;
-(unsigned long long)responseEnd;
-(void)copyTo:(id)arg1 ;
-(void)setHasResponseStart:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)connectEnd;
-(void)setHasResponseEnd:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasDomainLookupStart:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setIsCellular:(long long)arg1 ;
-(void)setSecureConnectionStart:(unsigned long long)arg1 ;
-(unsigned long long)secureConnectionStart;
-(void)setHasSecureConnectionStart:(BOOL)arg1 ;
-(BOOL)hasSecureConnectionStart;
-(void)setHasIsCellular:(BOOL)arg1 ;
-(BOOL)hasIsCellular;
-(void)setHasRedirectStart:(BOOL)arg1 ;
-(BOOL)hasRedirectStart;
-(void)setHasRedirectEnd:(BOOL)arg1 ;
-(BOOL)hasRedirectEnd;
-(void)setHasRedirectCountW3C:(BOOL)arg1 ;
-(BOOL)hasRedirectCountW3C;
-(void)setIsReused:(long long)arg1 ;
-(void)setHasIsReused:(BOOL)arg1 ;
-(BOOL)hasIsReused;
-(long long)isReused;
@end

