/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIApplicationControllerOptions.h>

@interface SKUIMutableApplicationControllerOptions : SKUIApplicationControllerOptions

@property (assign,nonatomic) BOOL supportsFullApplicationReload; 
@property (assign,nonatomic) long long tabBarControllerStyle; 
@property (assign,nonatomic) BOOL pageRenderMetricsEnabled; 
@property (assign,nonatomic) BOOL requiresLocalBootstrapScript; 
@property (assign,getter=isBootstrapScriptFallbackEnabled,nonatomic) BOOL bootstrapScriptFallbackEnabled; 
@property (assign,nonatomic) double bootstrapScriptFallbackMaximumAge; 
@property (assign,nonatomic) double bootstrapScriptTimeoutInterval; 
@property (assign,nonatomic) BOOL useTransientStorageForTests; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSupportsFullApplicationReload:(BOOL)arg1 ;
-(void)setTabBarControllerStyle:(long long)arg1 ;
-(void)setPageRenderMetricsEnabled:(BOOL)arg1 ;
-(void)setRequiresLocalBootstrapScript:(BOOL)arg1 ;
-(void)setBootstrapScriptFallbackEnabled:(BOOL)arg1 ;
-(void)setBootstrapScriptFallbackMaximumAge:(double)arg1 ;
-(void)setBootstrapScriptTimeoutInterval:(double)arg1 ;
-(void)setUseTransientStorageForTests:(BOOL)arg1 ;
@end

