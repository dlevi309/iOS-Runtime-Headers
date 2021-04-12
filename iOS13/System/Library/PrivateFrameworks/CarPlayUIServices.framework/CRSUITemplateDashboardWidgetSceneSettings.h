/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <CarPlayUIServices/CRSUIDashboardWidgetSceneSettings.h>
#import <libobjc.A.dylib/CRSUITemplateDashboardWidgetSceneSettings.h>
@class NSString;


@protocol CRSUITemplateDashboardWidgetSceneSettings <CRSUIDashboardWidgetSceneSettings>
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> templateEndpoint; 
@property (nonatomic,copy,readonly) NSString * proxiedApplicationBundleIdentifier; 
@required
-(NSObject*<OS_xpc_object>)templateEndpoint;
-(NSString *)proxiedApplicationBundleIdentifier;

@end


@class NSString;

@interface CRSUITemplateDashboardWidgetSceneSettings : CRSUIDashboardWidgetSceneSettings <CRSUITemplateDashboardWidgetSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long widgetStyle; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> templateEndpoint; 
@property (nonatomic,copy,readonly) NSString * proxiedApplicationBundleIdentifier; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)templateEndpoint;
-(NSString *)proxiedApplicationBundleIdentifier;
@end

