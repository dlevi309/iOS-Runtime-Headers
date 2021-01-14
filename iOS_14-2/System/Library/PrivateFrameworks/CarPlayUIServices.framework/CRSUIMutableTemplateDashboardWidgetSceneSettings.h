/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <CarPlayUIServices/CRSUIMutableDashboardWidgetSceneSettings.h>
#import <libobjc.A.dylib/CRSUITemplateDashboardWidgetSceneSettings.h>

@class NSString;

@interface CRSUIMutableTemplateDashboardWidgetSceneSettings : CRSUIMutableDashboardWidgetSceneSettings <CRSUITemplateDashboardWidgetSceneSettings>

@property (nonatomic,copy) NSObject*<OS_xpc_object> templateEndpoint; 
@property (nonatomic,copy) NSString * proxiedApplicationBundleIdentifier; 
@property (nonatomic,readonly) unsigned long long widgetStyle; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)templateEndpoint;
-(NSString *)proxiedApplicationBundleIdentifier;
-(void)setProxiedApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setTemplateEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
@end

