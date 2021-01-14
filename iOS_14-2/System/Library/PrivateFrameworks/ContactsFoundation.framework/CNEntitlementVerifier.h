/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNEntitlementVerification.h>

@class NSString;

@interface CNEntitlementVerifier : NSObject <CNEntitlementVerification>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)secTask:(SecTaskRef)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 isFirstOrSecondPartyWithError:(id*)arg2 ;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
+(BOOL)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2 ;
@end

