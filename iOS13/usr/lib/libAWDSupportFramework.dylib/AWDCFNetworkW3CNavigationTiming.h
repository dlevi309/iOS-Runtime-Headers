/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW10 _has;

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)url;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)hostname;
-(unsigned long long)requestStart;
-(unsigned long long)responseEnd;
-(void)setProcname:(NSString *)arg1 ;
-(void)setIsCellular:(long long)arg1 ;
-(long long)isCellular;
-(void)setHostname:(NSString *)arg1 ;
-(void)setIsReused:(long long)arg1 ;
-(void)setRedirectCount:(long long)arg1 ;
-(void)setResponseEnd:(unsigned long long)arg1 ;
-(void)setResponseStart:(unsigned long long)arg1 ;
-(void)setRequestStart:(unsigned long long)arg1 ;
-(void)setSecureConnectionStart:(unsigned long long)arg1 ;
-(unsigned long long)connectEnd;
-(void)setConnectEnd:(unsigned long long)arg1 ;
-(unsigned long long)connectStart;
-(void)setConnectStart:(unsigned long long)arg1 ;
-(void)setDomainLookupEnd:(unsigned long long)arg1 ;
-(unsigned long long)domainLookupStart;
-(void)setDomainLookupStart:(unsigned long long)arg1 ;
-(long long)redirectCount;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasUrl;
-(BOOL)hasHostname;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(BOOL)hasRequestStart;
-(void)setHasRedirectCount:(BOOL)arg1 ;
-(BOOL)hasRedirectCount;
-(unsigned long long)fetchStart;
-(void)setFetchStart:(unsigned long long)arg1 ;
-(void)setHasFetchStart:(BOOL)arg1 ;
-(BOOL)hasFetchStart;
-(void)setHasDomainLookupStart:(BOOL)arg1 ;
-(BOOL)hasDomainLookupStart;
-(unsigned long long)domainLookupEnd;
-(void)setHasDomainLookupEnd:(BOOL)arg1 ;
-(BOOL)hasDomainLookupEnd;
-(void)setHasConnectStart:(BOOL)arg1 ;
-(BOOL)hasConnectStart;
-(void)setHasConnectEnd:(BOOL)arg1 ;
-(BOOL)hasConnectEnd;
-(unsigned long long)responseStart;
-(void)setHasResponseStart:(BOOL)arg1 ;
-(BOOL)hasResponseStart;
-(void)setHasResponseEnd:(BOOL)arg1 ;
-(BOOL)hasResponseEnd;
-(void)setRedirectCountW3C:(long long)arg1 ;
-(void)setRedirectStart:(unsigned long long)arg1 ;
-(void)setRedirectEnd:(unsigned long long)arg1 ;
-(long long)redirectCountW3C;
-(unsigned long long)redirectStart;
-(unsigned long long)redirectEnd;
-(BOOL)hasProcname;
-(NSString *)procname;
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
-(void)setHasIsReused:(BOOL)arg1 ;
-(BOOL)hasIsReused;
-(long long)isReused;
@end

