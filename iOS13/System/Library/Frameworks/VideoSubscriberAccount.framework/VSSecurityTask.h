/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSString;

@interface VSSecurityTask : NSObject {

	unsigned long long _kind;
	SCD_Struct_VS3 _auditToken;
	/*function pointer*/void* _createWithAuditToken;
	/*function pointer*/void* _createFromSelf;
	/*function pointer*/void* _copyValueForEntitlement;
	/*function pointer*/void* _copySigningIdentifier;
	SecTaskRef _taskRef;

}

@property (nonatomic,copy,readonly) NSString * signingIdentifier; 
+(id)currentSecurityTask;
+(id)securityTaskForCurrentConnection;
+(id)securityTaskWithAuditToken:(SCD_Struct_VS3)arg1 ;
+(void)setSecurityTaskForCurrentConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)shouldAllowAccessForBooleanEntitlement:(id)arg1 ;
-(NSString *)signingIdentifier;
-(BOOL)getValue:(id*)arg1 forEntitlement:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldAllowAccessToSubscriberIdentifierHashModifier:(id)arg1 ;
-(id)initWithCreateFromSelfProc:(/*function pointer*/void*)arg1 copyValueForEntitlementProc:(/*function pointer*/void*)arg2 ;
-(id)initWithAuditToken:(SCD_Struct_VS3)arg1 createWithAuditTokenProc:(/*function pointer*/void*)arg2 copyValueForEntitlementProc:(/*function pointer*/void*)arg3 ;
-(SecTaskRef)_taskRef;
-(/*function pointer*/void*)_copySigningIdentifier;
@end

