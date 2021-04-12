/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol _INSiriAuthorizationManagerExport <NSObject,JSExport>
@required
+(long long)_siriAuthorizationStatusForAppID:(id)arg1;
+(void)_requestSiriAuthorization:(/*^block*/id)arg1 auditToken:(SCD_Struct_IN2)arg2;
+(BOOL)_isSiriAuthorizationRestricted;
-(id)init;

@end

