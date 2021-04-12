/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOXPCSerializable.h>

@protocol OS_xpc_object;
@class NSObject, NSError, NSString, GEOPeer, GEOMapServiceTraits, GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSProgress;

@interface GEOXPCRequest : NSObject <GEOXPCSerializable> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)reportsProgress;
-(GEOMapServiceTraits *)traits;
-(void)setPreferredAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(NSProgress *)progress;
-(id)init;
-(NSString *)method;
-(GEODataRequestThrottlerToken *)throttleToken;
-(unsigned char)flags;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(NSObject*<OS_xpc_object>)object;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)description;
-(GEOApplicationAuditToken *)preferredAuditToken;
-(void)setPeer:(GEOPeer *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(id)_createConnectionWithQueue:(id)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)send:(id)arg1 ;
-(NSObject*<OS_xpc_object>)replyDictionary;
-(id)initWithMessage:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 ;
-(void)send:(id)arg1 withReply:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)sendSync:(id)arg1 error:(id*)arg2 ;
-(NSString *)service;
-(id)_prepareRequest;
-(GEOPeer *)peer;
@end

