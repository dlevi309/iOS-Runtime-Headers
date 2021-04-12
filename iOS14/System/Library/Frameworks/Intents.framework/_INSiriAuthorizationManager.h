/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/_INSiriAuthorizationManagerExport.h>

@class NSString;

@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_tccAccessInfoForBundle:(id)arg1 ;
+(void)_requestSiriAuthorization:(/*^block*/id)arg1 auditToken:(SCD_Struct_IN2)arg2 ;
+(long long)_siriAuthorizationStatusForAppID:(id)arg1 ;
+(long long)_rawSiriAuthorizationStatusForAppID:(id)arg1 ;
+(BOOL)_isSiriAuthorizationRestricted;
+(BOOL)_siriEnabled;
@end

