/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> templateEndpoint; 
@property (nonatomic,copy,readonly) NSString * proxiedApplicationBundleIdentifier; 
@property (nonatomic,readonly) unsigned long long widgetStyle; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)templateEndpoint;
-(NSString *)proxiedApplicationBundleIdentifier;
@end

