/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UICarPlayApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIDashboardWidgetSceneSettings.h>

@protocol CRSUIDashboardWidgetSceneSettings <CRSUIMapStyleProviding>
@property (nonatomic,readonly) unsigned long long widgetStyle; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
@required
-(NSObject*<OS_xpc_object>)endpoint;
-(unsigned long long)widgetStyle;

@end


@class NSString;

@interface CRSUIDashboardWidgetSceneSettings : UICarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings>

@property (nonatomic,readonly) unsigned long long widgetStyle; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_xpc_object>)endpoint;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)mapStyle;
-(unsigned long long)widgetStyle;
@end

