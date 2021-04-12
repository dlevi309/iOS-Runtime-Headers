/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2 ;
+(BOOL)secTask:(SecTaskRef)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 isFirstOrSecondPartyWithError:(id*)arg2 ;
@end

