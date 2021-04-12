/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_xpc_object;
@class NSObject, NSString, NSDictionary, GEOPeer, NSProgress, GEOApplicationAuditToken, GEODataRequestThrottlerToken;

@interface GEOMessage : NSObject {

	NSObject*<OS_xpc_object> _xpcMessage;
	NSString* _messageName;
	NSDictionary* _userInfo;
	GEOPeer* _peer;
	NSProgress* _progressToMirrorOverXPC;
	GEOApplicationAuditToken* _preferredAuditToken;
	GEODataRequestThrottlerToken* _throttleToken;

}

@property (nonatomic,readonly) NSProgress * progress; 
@property (nonatomic,readonly) NSString * messageName;                                      //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) GEOPeer * peer;                                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * preferredAuditToken;              //@synthesize preferredAuditToken=_preferredAuditToken - In the implementation block
@property (nonatomic,readonly) GEODataRequestThrottlerToken * throttleToken;                //@synthesize throttleToken=_throttleToken - In the implementation block
-(NSDictionary *)userInfo;
-(NSProgress *)progress;
-(GEOPeer *)peer;
-(void)sendReply:(id)arg1 ;
-(GEODataRequestThrottlerToken *)throttleToken;
-(GEOApplicationAuditToken *)preferredAuditToken;
-(id)initWithXPCMessage:(id)arg1 peer:(id)arg2 ;
-(void)sendReplyWithXPCUserInfo:(id)arg1 ;
-(NSString *)messageName;
@end

