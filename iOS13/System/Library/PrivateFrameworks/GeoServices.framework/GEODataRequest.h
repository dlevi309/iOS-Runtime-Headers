/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_xpc_object, GEORequestCounterTicket;
#import <GeoServices/GeoServices-Structs.h>
@class NSURL, NSObject, GEOApplicationAuditToken, NSDictionary, NSData, NSString, GEODataRequestThrottlerToken;

@interface GEODataRequest : NSObject {

	NSURL* _URL;
	NSObject*<OS_xpc_object> _xpcRequest;
	GEOApplicationAuditToken* _auditToken;
	NSDictionary* _additionalHTTPHeaders;
	NSData* _bodyData;
	NSData* _cachedData;
	id<GEORequestCounterTicket> _requestCounterTicket;
	NSString* _backgroundSessionIdentifier;
	GEODataRequestThrottlerToken* _throttleToken;
	double _timeoutInterval;
	SCD_Struct_GE94 _kind;
	unsigned long long _multipathServiceType;
	unsigned long long _multipathAlternatePort;
	BOOL _needsProxy;
	BOOL _HTTPShouldHandleCookies;
	unsigned long long _constraints;
	BOOL _allowTLSSessionTicketUse;
	BOOL _allowTFOUse;
	char _HTTPMethod;

}

@property (nonatomic,copy) NSData * cachedData;                                               //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcRequest;                           //@synthesize xpcRequest=_xpcRequest - In the implementation block
@property (nonatomic,copy,readonly) GEOApplicationAuditToken * auditToken;                    //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * bodyData;                                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalHTTPHeaders;                          //@synthesize additionalHTTPHeaders=_additionalHTTPHeaders - In the implementation block
@property (nonatomic,readonly) BOOL needsProxy;                                               //@synthesize needsProxy=_needsProxy - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) char HTTPMethod;                                               //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE94 kind;                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) BOOL HTTPShouldHandleCookies;                                  //@synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies - In the implementation block
@property (nonatomic,readonly) unsigned long long constraints;                                //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,readonly) BOOL allowTLSSessionTicketUse;                                 //@synthesize allowTLSSessionTicketUse=_allowTLSSessionTicketUse - In the implementation block
@property (nonatomic,readonly) BOOL allowTFOUse;                                              //@synthesize allowTFOUse=_allowTFOUse - In the implementation block
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket;              //@synthesize requestCounterTicket=_requestCounterTicket - In the implementation block
@property (nonatomic,readonly) unsigned long long multipathServiceType;                       //@synthesize multipathServiceType=_multipathServiceType - In the implementation block
@property (nonatomic,readonly) unsigned long long multipathAlternatePort;                     //@synthesize multipathAlternatePort=_multipathAlternatePort - In the implementation block
@property (nonatomic,readonly) NSString * backgroundSessionIdentifier;                        //@synthesize backgroundSessionIdentifier=_backgroundSessionIdentifier - In the implementation block
@property (nonatomic,readonly) GEODataRequestThrottlerToken * throttleToken;                  //@synthesize throttleToken=_throttleToken - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)constraints;
-(GEOApplicationAuditToken *)auditToken;
-(NSURL *)URL;
-(SCD_Struct_GE94)kind;
-(NSData *)bodyData;
-(char)HTTPMethod;
-(BOOL)HTTPShouldHandleCookies;
-(double)timeoutInterval;
-(unsigned long long)multipathServiceType;
-(NSData *)cachedData;
-(NSString *)backgroundSessionIdentifier;
-(id)initWithKind:(SCD_Struct_GE94)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(BOOL)arg7 HTTPMethod:(char)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(BOOL)arg10 constraints:(unsigned long long)arg11 allowTLSSessionTicketUse:(BOOL)arg12 allowTFOUse:(BOOL)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16 requestCounterTicket:(id)arg17 multipathServiceType:(unsigned long long)arg18 multipathAlternatePort:(unsigned long long)arg19 backgroundSessionIdentifier:(id)arg20 throttleToken:(id)arg21 ;
-(NSObject*<OS_xpc_object>)xpcRequest;
-(NSDictionary *)additionalHTTPHeaders;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(void)setCachedData:(NSData *)arg1 ;
-(unsigned long long)multipathAlternatePort;
-(id)publicLogDescription;
-(id)initWithKind:(SCD_Struct_GE94)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(BOOL)arg7 HTTPMethod:(char)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(BOOL)arg10 constraints:(unsigned long long)arg11 allowTLSSessionTicketUse:(BOOL)arg12 allowTFOUse:(BOOL)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16 requestCounterTicket:(id)arg17 multipathServiceType:(unsigned long long)arg18 multipathAlternatePort:(unsigned long long)arg19 throttleToken:(id)arg20 ;
-(GEODataRequestThrottlerToken *)throttleToken;
-(BOOL)needsProxy;
-(BOOL)allowTLSSessionTicketUse;
-(BOOL)allowTFOUse;
-(id)newURLRequest;
-(id)updatedRequestWithNewProtobufRequest:(id)arg1 ;
-(id)initWithKind:(SCD_Struct_GE94)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 auditToken:(id)arg6 timeoutInterval:(double)arg7 traits:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(unsigned long long)arg10 multipathAlternatePort:(unsigned long long)arg11 throttleToken:(id)arg12 ;
-(id)updatedRequestWithNewBodyData:(id)arg1 ;
-(id)initHttpOnlyRequestWithKind:(SCD_Struct_GE94)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 allowCellularUse:(BOOL)arg6 compressRequest:(BOOL)arg7 requestCounterTicket:(id)arg8 multipathServiceType:(unsigned long long)arg9 multipathAlternatePort:(unsigned long long)arg10 throttleToken:(id)arg11 ;
-(id)initForAnalyticsUploadRequest:(id)arg1 toURL:(id)arg2 requiresProxy:(BOOL)arg3 backgroundIdentifier:(id)arg4 compressRequest:(BOOL)arg5 allowCellular:(BOOL)arg6 allowBattery:(BOOL)arg7 timeToLive:(double)arg8 requestCounterTicket:(id)arg9 throttleToken:(id)arg10 ;
@end

