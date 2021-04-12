/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


#import <MediaServices/MediaServices-Structs.h>
@interface MSVEntitlementUtilities : NSObject
+(id)_checkArrayEntitlement:(id)arg1 group:(id)arg2 task:(SecTaskRef)arg3 ;
+(BOOL)_checkEntitlement:(id)arg1 inGroup:(id)arg2 ;
+(id)_checkBooleanEntitlement:(id)arg1 task:(SecTaskRef)arg2 ;
+(void)_processKeyChainResult:(id)arg1 ;
+(BOOL)hasEntitlement:(id)arg1 inGroup:(id)arg2 ;
+(BOOL)hasBoolEntitlement:(id)arg1 ;
@end

