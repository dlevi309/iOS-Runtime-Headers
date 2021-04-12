/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <CarPlayUIServices/CRSUIMutableDashboardWidgetSceneSettings.h>
#import <libobjc.A.dylib/CRSUITemplateDashboardWidgetSceneSettings.h>

@class NSString;

@interface CRSUIMutableTemplateDashboardWidgetSceneSettings : CRSUIMutableDashboardWidgetSceneSettings <CRSUITemplateDashboardWidgetSceneSettings>

@property (nonatomic,copy) NSObject*<OS_xpc_object> templateEndpoint; 
@property (nonatomic,copy) NSString * proxiedApplicationBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long widgetStyle; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)templateEndpoint;
-(NSString *)proxiedApplicationBundleIdentifier;
-(void)setProxiedApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setTemplateEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
@end

