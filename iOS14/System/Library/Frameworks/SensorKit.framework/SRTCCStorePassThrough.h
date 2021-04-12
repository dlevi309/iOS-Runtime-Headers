/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRTCCStore.h>

@class NSString;

@interface SRTCCStorePassThrough : NSObject <SRTCCStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bundleIdentifiersForService:(id)arg1 ;
-(id)bundleIdentifiersDisabledForService:(id)arg1 ;
-(BOOL)isOverriddenForService:(id)arg1 ;
-(id)informationForBundleId:(id)arg1 ;
-(BOOL)setOverride:(BOOL)arg1 forService:(id)arg2 ;
-(BOOL)resetService:(id)arg1 ;
-(BOOL)resetService:(id)arg1 forBundleId:(id)arg2 ;
-(BOOL)setValue:(BOOL)arg1 forService:(id)arg2 bundleId:(id)arg3 ;
@end

