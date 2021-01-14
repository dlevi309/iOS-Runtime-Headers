/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying> {

	NSString* _analyticsBaseUrl;
	NSString* _analyticsId;
	NSString* _eventQueryParameterName;
	NSMutableArray* _proxyHostNames;
	NSMutableArray* _queryParameterConfigs;
	BOOL _usesProxyProfile;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasAnalyticsBaseUrl; 
@property (nonatomic,retain) NSString * analyticsBaseUrl;                         //@synthesize analyticsBaseUrl=_analyticsBaseUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticsId; 
@property (nonatomic,retain) NSString * analyticsId;                              //@synthesize analyticsId=_analyticsId - In the implementation block
@property (nonatomic,readonly) BOOL hasEventQueryParameterName; 
@property (nonatomic,retain) NSString * eventQueryParameterName;                  //@synthesize eventQueryParameterName=_eventQueryParameterName - In the implementation block
@property (nonatomic,retain) NSMutableArray * queryParameterConfigs;              //@synthesize queryParameterConfigs=_queryParameterConfigs - In the implementation block
@property (assign,nonatomic) BOOL hasUsesProxyProfile; 
@property (assign,nonatomic) BOOL usesProxyProfile;                               //@synthesize usesProxyProfile=_usesProxyProfile - In the implementation block
@property (nonatomic,retain) NSMutableArray * proxyHostNames;                     //@synthesize proxyHostNames=_proxyHostNames - In the implementation block
+(id)externalAnalyticsConfigWithDictionary:(id)arg1 ;
+(Class)queryParameterConfigType;
+(Class)proxyHostNamesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addQueryParameterConfig:(id)arg1 ;
-(void)addProxyHostNames:(id)arg1 ;
-(BOOL)hasAnalyticsBaseUrl;
-(BOOL)hasAnalyticsId;
-(BOOL)hasEventQueryParameterName;
-(void)clearQueryParameterConfigs;
-(NSString *)analyticsId;
-(unsigned long long)hash;
-(unsigned long long)queryParameterConfigsCount;
-(id)queryParameterConfigAtIndex:(unsigned long long)arg1 ;
-(void)setHasUsesProxyProfile:(BOOL)arg1 ;
-(BOOL)hasUsesProxyProfile;
-(void)clearProxyHostNames;
-(unsigned long long)proxyHostNamesCount;
-(id)proxyHostNamesAtIndex:(unsigned long long)arg1 ;
-(NSString *)eventQueryParameterName;
-(NSMutableArray *)queryParameterConfigs;
-(BOOL)usesProxyProfile;
-(NSMutableArray *)proxyHostNames;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAnalyticsBaseUrl:(NSString *)arg1 ;
-(void)setAnalyticsId:(NSString *)arg1 ;
-(void)setEventQueryParameterName:(NSString *)arg1 ;
-(void)setQueryParameterConfigs:(NSMutableArray *)arg1 ;
-(void)setUsesProxyProfile:(BOOL)arg1 ;
-(void)setProxyHostNames:(NSMutableArray *)arg1 ;
-(NSString *)analyticsBaseUrl;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

