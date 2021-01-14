/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class Protocol, NSDictionary;

@interface RTEntitlementProvider : NSObject {

	Protocol* _protocol;
	NSDictionary* _entitlementsDictionary;

}

@property (nonatomic,retain) NSDictionary * entitlementsDictionary;              //@synthesize entitlementsDictionary=_entitlementsDictionary - In the implementation block
@property (nonatomic,readonly) Protocol * protocol;                              //@synthesize protocol=_protocol - In the implementation block
+(id)internalDaemonProtocolEntitlementProvider;
+(id)selectorsForProtocol:(id)arg1 ;
+(id)daemonProtocolEntitlementProvider;
+(id)helperServiceProtocolEntitlementProvider;
-(id)init;
-(NSDictionary *)entitlementsDictionary;
-(Protocol *)protocol;
-(void)setEntitlementsDictionary:(NSDictionary *)arg1 ;
-(BOOL)clientConnection:(id)arg1 satisfiesEntitlementRequirementsForInvocation:(id)arg2 ;
-(BOOL)clientConnection:(id)arg1 hasEntitlement:(id)arg2 ;
-(id)initWithProtocol:(id)arg1 entitlementsDictionary:(id)arg2 ;
@end

