/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIMutableCarPlayApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIDashboardWidgetSceneSettings.h>
#import <libobjc.A.dylib/CRSUIMutableMapStyleProviding.h>

@class NSString;

@interface CRSUIMutableDashboardWidgetSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings, CRSUIMutableMapStyleProviding>

@property (assign,nonatomic) unsigned long long widgetStyle; 
@property (nonatomic,copy) NSObject*<OS_xpc_object> endpoint; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)mapStyle;
-(void)setMapStyle:(long long)arg1 ;
-(unsigned long long)widgetStyle;
-(void)setWidgetStyle:(unsigned long long)arg1 ;
@end

