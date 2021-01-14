/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface SKUIApplicationControllerOptions : NSObject <NSCopying, NSMutableCopying> {

	BOOL _supportsFullApplicationReload;
	long long _tabBarControllerStyle;
	BOOL _pageRenderMetricsEnabled;
	BOOL _requiresLocalBootstrapScript;
	BOOL _bootstrapScriptFallbackEnabled;
	double _bootstrapScriptFallbackMaximumAge;
	double _bootstrapScriptTimeoutInterval;
	BOOL _useTransientStorageForTests;

}

@property (nonatomic,readonly) BOOL supportsFullApplicationReload; 
@property (nonatomic,readonly) long long tabBarControllerStyle; 
@property (nonatomic,readonly) BOOL pageRenderMetricsEnabled; 
@property (nonatomic,readonly) BOOL requiresLocalBootstrapScript; 
@property (getter=isBootstrapScriptFallbackEnabled,nonatomic,readonly) BOOL bootstrapScriptFallbackEnabled; 
@property (nonatomic,readonly) double bootstrapScriptFallbackMaximumAge; 
@property (nonatomic,readonly) double bootstrapScriptTimeoutInterval; 
@property (nonatomic,readonly) BOOL useTransientStorageForTests; 
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)supportsFullApplicationReload;
-(long long)tabBarControllerStyle;
-(BOOL)pageRenderMetricsEnabled;
-(BOOL)requiresLocalBootstrapScript;
-(BOOL)isBootstrapScriptFallbackEnabled;
-(double)bootstrapScriptFallbackMaximumAge;
-(double)bootstrapScriptTimeoutInterval;
-(BOOL)useTransientStorageForTests;
@end

