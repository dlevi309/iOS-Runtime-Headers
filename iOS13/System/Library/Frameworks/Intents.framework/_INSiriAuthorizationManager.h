/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)_siriEnabled;
+(long long)_siriAuthorizationStatusForAppID:(id)arg1 ;
+(void)_requestSiriAuthorization:(/*^block*/id)arg1 auditToken:(SCD_Struct_IN2)arg2 ;
+(BOOL)_isSiriAuthorizationRestricted;
+(long long)_rawSiriAuthorizationStatusForAppID:(id)arg1 ;
+(id)_tccAccessInfoForBundle:(id)arg1 ;
@end

