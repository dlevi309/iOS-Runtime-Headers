/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSError, NSString, GEOPeer, GEOMapServiceTraits, GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSProgress;

@interface GEOXPCRequest : NSObject <NSSecureCoding> {

	unsigned char _flags;
	NSObject*<OS_xpc_object> _object;
	NSError* _error;
	NSString* _service;
	NSString* _method;
	GEOPeer* _peer;
	GEOMapServiceTraits* _traits;
	GEOApplicationAuditToken* _auditToken;
	GEODataRequestThrottlerToken* _throttleToken;
	NSProgress* _progressToMirrorOverXPC;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> object;                             //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSString * service;                                          //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * method;                                           //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) GEOPeer * peer;                                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * preferredAuditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                       //@synthesize progressToMirrorOverXPC=_progressToMirrorOverXPC - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> replyDictionary; 
@property (nonatomic,readonly) unsigned char flags;                                       //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                              //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) GEODataRequestThrottlerToken * throttleToken;              //@synthesize throttleToken=_throttleToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)reportsProgress;
-(id)init;
-(id)description;
-(NSObject*<OS_xpc_object>)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
-(unsigned char)flags;
-(NSString *)method;
-(NSProgress *)progress;
-(void)setMethod:(NSString *)arg1 ;
-(void)setPeer:(GEOPeer *)arg1 ;
-(GEOPeer *)peer;
-(NSString *)service;
-(void)setProgress:(NSProgress *)arg1 ;
-(GEOMapServiceTraits *)traits;
-(void)send:(id)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(GEODataRequestThrottlerToken *)throttleToken;
-(id)_prepareRequest;
-(id)_createConnectionWithQueue:(id)arg1 ;
-(id)initWithMessage:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 ;
-(NSObject*<OS_xpc_object>)replyDictionary;
-(void)send:(id)arg1 withReply:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)sendSync:(id)arg1 error:(id*)arg2 ;
-(GEOApplicationAuditToken *)preferredAuditToken;
-(void)setPreferredAuditToken:(GEOApplicationAuditToken *)arg1 ;
@end

