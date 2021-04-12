/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


#import <ShazamKit/ShazamKit-Structs.h>
@interface SHEntitlements : NSObject
+(BOOL)isEntitledForRemoteRecognition;
+(BOOL)boolValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
+(BOOL)entitlementArray:(id)arg1 containsEntitlementValue:(id)arg2 fromSecTask:(SecTaskRef)arg3 ;
+(void*)copyValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
+(BOOL)isEntitledForSignatureGeneration;
+(BOOL)isEntitledForStorefront;
@end

