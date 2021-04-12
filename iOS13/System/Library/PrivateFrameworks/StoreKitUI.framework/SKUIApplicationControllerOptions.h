/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)supportsFullApplicationReload;
-(long long)tabBarControllerStyle;
-(BOOL)pageRenderMetricsEnabled;
-(BOOL)requiresLocalBootstrapScript;
-(BOOL)isBootstrapScriptFallbackEnabled;
-(double)bootstrapScriptFallbackMaximumAge;
-(double)bootstrapScriptTimeoutInterval;
-(BOOL)useTransientStorageForTests;
@end

