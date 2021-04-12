/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBEndpointConfig : PBCodable <NSCopying> {

	NSString* _analyticsEndpointUrlsJson;
	NSString* _analyticsEnvelopeContentTypePropJson;
	NSString* _clientApiBaseUrl;
	int _environment;
	NSString* _eventRelayBaseUrl;
	NSString* _eventRelayBatchBaseUrl;
	NSString* _newsNotificationsBaseUrl;
	NSString* _remoteDataSourceBaseUrl;
	NSString* _staticAssetBaseUrl;

}

@property (assign,nonatomic) int environment;                                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL hasClientApiBaseUrl; 
@property (nonatomic,retain) NSString * clientApiBaseUrl;                                  //@synthesize clientApiBaseUrl=_clientApiBaseUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasEventRelayBaseUrl; 
@property (nonatomic,retain) NSString * eventRelayBaseUrl;                                 //@synthesize eventRelayBaseUrl=_eventRelayBaseUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasEventRelayBatchBaseUrl; 
@property (nonatomic,retain) NSString * eventRelayBatchBaseUrl;                            //@synthesize eventRelayBatchBaseUrl=_eventRelayBatchBaseUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasNewsNotificationsBaseUrl; 
@property (nonatomic,retain) NSString * newsNotificationsBaseUrl;                          //@synthesize newsNotificationsBaseUrl=_newsNotificationsBaseUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticsEndpointUrlsJson; 
@property (nonatomic,retain) NSString * analyticsEndpointUrlsJson;                         //@synthesize analyticsEndpointUrlsJson=_analyticsEndpointUrlsJson - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticsEnvelopeContentTypePropJson; 
@property (nonatomic,retain) NSString * analyticsEnvelopeContentTypePropJson;              //@synthesize analyticsEnvelopeContentTypePropJson=_analyticsEnvelopeContentTypePropJson - In the implementation block
@property (nonatomic,readonly) BOOL hasStaticAssetBaseUrl; 
@property (nonatomic,retain) NSString * staticAssetBaseUrl;                                //@synthesize staticAssetBaseUrl=_staticAssetBaseUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteDataSourceBaseUrl; 
@property (nonatomic,retain) NSString * remoteDataSourceBaseUrl;                           //@synthesize remoteDataSourceBaseUrl=_remoteDataSourceBaseUrl - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)environment;
-(void)setEnvironment:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClientApiBaseUrl:(NSString *)arg1 ;
-(void)setEventRelayBaseUrl:(NSString *)arg1 ;
-(void)setEventRelayBatchBaseUrl:(NSString *)arg1 ;
-(void)setNewsNotificationsBaseUrl:(NSString *)arg1 ;
-(void)setAnalyticsEndpointUrlsJson:(NSString *)arg1 ;
-(void)setAnalyticsEnvelopeContentTypePropJson:(NSString *)arg1 ;
-(void)setStaticAssetBaseUrl:(NSString *)arg1 ;
-(void)setRemoteDataSourceBaseUrl:(NSString *)arg1 ;
-(BOOL)hasClientApiBaseUrl;
-(BOOL)hasEventRelayBaseUrl;
-(BOOL)hasEventRelayBatchBaseUrl;
-(BOOL)hasNewsNotificationsBaseUrl;
-(BOOL)hasAnalyticsEndpointUrlsJson;
-(BOOL)hasAnalyticsEnvelopeContentTypePropJson;
-(BOOL)hasStaticAssetBaseUrl;
-(BOOL)hasRemoteDataSourceBaseUrl;
-(NSString *)clientApiBaseUrl;
-(NSString *)eventRelayBaseUrl;
-(NSString *)eventRelayBatchBaseUrl;
-(NSString *)newsNotificationsBaseUrl;
-(NSString *)analyticsEndpointUrlsJson;
-(NSString *)analyticsEnvelopeContentTypePropJson;
-(NSString *)staticAssetBaseUrl;
-(NSString *)remoteDataSourceBaseUrl;
@end

