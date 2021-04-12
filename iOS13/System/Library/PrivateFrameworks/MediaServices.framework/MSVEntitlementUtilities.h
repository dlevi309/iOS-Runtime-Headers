/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


#import <MediaServices/MediaServices-Structs.h>
@interface MSVEntitlementUtilities : NSObject
+(BOOL)_checkEntitlement:(id)arg1 inGroup:(id)arg2 ;
+(id)_checkArrayEntitlement:(id)arg1 group:(id)arg2 task:(SecTaskRef)arg3 ;
+(id)_checkBooleanEntitlement:(id)arg1 task:(SecTaskRef)arg2 ;
+(void)_processKeyChainResult:(id)arg1 ;
+(BOOL)hasEntitlement:(id)arg1 inGroup:(id)arg2 ;
+(BOOL)hasBoolEntitlement:(id)arg1 ;
@end

