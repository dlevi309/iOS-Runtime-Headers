/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol _INSiriAuthorizationManagerExport <NSObject,JSExport>
@required
+(void)_requestSiriAuthorization:(/*^block*/id)arg1 auditToken:(SCD_Struct_IN2)arg2;
+(long long)_siriAuthorizationStatusForAppID:(id)arg1;
+(BOOL)_isSiriAuthorizationRestricted;
-(id)init;

@end

