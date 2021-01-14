/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEORequestCounterTicket;
#import <GeoServices/GeoServices-Structs.h>
@class NSURL, GEOApplicationAuditToken, NSDictionary, NSData, NSString, GEODataRequestThrottlerToken;

@interface GEODataRequest : NSObject {

	NSURL* _URL;
	GEOApplicationAuditToken* _auditToken;
	NSDictionary* _additionalHTTPHeaders;
	NSData* _bodyData;
	NSData* _cachedData;
	id<GEORequestCounterTicket> _requestCounterTicket;
	NSString* _backgroundSessionIdentifier;
	GEODataRequestThrottlerToken* _throttleToken;
	double _timeoutInterval;
	SCD_Struct_GE91 _kind;
	unsigned long long _multipathServiceType;
	unsigned long long _multipathAlternatePort;
	unsigned long long _options;

}

@property (nonatomic,copy) NSData * cachedData;                                               //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) GEOApplicationAuditToken * auditToken;                    //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * bodyData;                                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalHTTPHeaders;                          //@synthesize additionalHTTPHeaders=_additionalHTTPHeaders - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE91 kind;                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket;              //@synthesize requestCounterTicket=_requestCounterTicket - In the implementation block
@property (nonatomic,readonly) unsigned long long multipathServiceType;                       //@synthesize multipathServiceType=_multipathServiceType - In the implementation block
@property (nonatomic,readonly) unsigned long long multipathAlternatePort;                     //@synthesize multipathAlternatePort=_multipathAlternatePort - In the implementation block
@property (nonatomic,readonly) NSString * backgroundSessionIdentifier;                        //@synthesize backgroundSessionIdentifier=_backgroundSessionIdentifier - In the implementation block
@property (nonatomic,readonly) GEODataRequestThrottlerToken * throttleToken;                  //@synthesize throttleToken=_throttleToken - In the implementation block
@property (nonatomic,readonly) BOOL useHTTPPost; 
@property (nonatomic,readonly) BOOL allowTLSSessionTicketUse; 
@property (nonatomic,readonly) BOOL allowTCPFastOpen; 
@property (nonatomic,readonly) BOOL needsProxy; 
@property (nonatomic,readonly) BOOL requireInexpensiveNetwork; 
@property (nonatomic,readonly) BOOL requirePluggedIn; 
@property (nonatomic,readonly) BOOL requireUnconstrainedNetwork; 
-(NSData *)cachedData;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(BOOL)requirePluggedIn;
-(id)init;
-(id)initWithKind:(SCD_Struct_GE91)arg1 URL:(id)arg2 auditToken:(id)arg3 timeoutInterval:(double)arg4 additionalHTTPHeaders:(id)arg5 bodyData:(id)arg6 userAgent:(id)arg7 entityTag:(id)arg8 cachedData:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(unsigned long long)arg11 multipathAlternatePort:(unsigned long long)arg12 backgroundSessionIdentifier:(id)arg13 throttleToken:(id)arg14 options:(unsigned long long)arg15 ;
-(NSString *)backgroundSessionIdentifier;
-(GEODataRequestThrottlerToken *)throttleToken;
-(id)initForAnalyticsUploadRequest:(id)arg1 toURL:(id)arg2 requiresProxy:(BOOL)arg3 backgroundIdentifier:(id)arg4 compressRequest:(BOOL)arg5 allowCellular:(BOOL)arg6 allowBattery:(BOOL)arg7 timeToLive:(double)arg8 requestCounterTicket:(id)arg9 throttleToken:(id)arg10 ;
-(id)initWithKind:(SCD_Struct_GE91)arg1 URL:(id)arg2 auditToken:(id)arg3 timeoutInterval:(double)arg4 additionalHTTPHeaders:(id)arg5 bodyData:(id)arg6 userAgent:(id)arg7 entityTag:(id)arg8 cachedData:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(unsigned long long)arg11 multipathAlternatePort:(unsigned long long)arg12 throttleToken:(id)arg13 options:(unsigned long long)arg14 ;
-(GEOApplicationAuditToken *)auditToken;
-(BOOL)needsProxy;
-(id)publicLogDescription;
-(NSDictionary *)additionalHTTPHeaders;
-(SCD_Struct_GE91)kind;
-(BOOL)requireInexpensiveNetwork;
-(double)timeoutInterval;
-(id)description;
-(BOOL)requireUnconstrainedNetwork;
-(id)initHttpOnlyRequestWithKind:(SCD_Struct_GE91)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 allowCellularUse:(BOOL)arg6 compressRequest:(BOOL)arg7 requestCounterTicket:(id)arg8 multipathServiceType:(unsigned long long)arg9 multipathAlternatePort:(unsigned long long)arg10 throttleToken:(id)arg11 ;
-(void)setCachedData:(NSData *)arg1 ;
-(BOOL)useHTTPPost;
-(NSURL *)URL;
-(unsigned long long)multipathServiceType;
-(unsigned long long)multipathAlternatePort;
-(NSData *)bodyData;
-(BOOL)allowTLSSessionTicketUse;
-(BOOL)allowTCPFastOpen;
-(id)initWithKind:(SCD_Struct_GE91)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 auditToken:(id)arg6 timeoutInterval:(double)arg7 traits:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(unsigned long long)arg10 multipathAlternatePort:(unsigned long long)arg11 throttleToken:(id)arg12 ;
-(id)updatedRequestWithNewBodyData:(id)arg1 ;
-(id)newURLRequest;
-(id)updatedRequestWithNewProtobufRequest:(id)arg1 ;
@end

