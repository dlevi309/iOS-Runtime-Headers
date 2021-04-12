/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIDashboardWidgetSceneSettings.h>

@class NSString;

@interface CRSUIMutableDashboardWidgetSceneSettings : UIMutableApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings>

@property (assign,nonatomic) unsigned long long widgetStyle; 
@property (nonatomic,copy) NSObject*<OS_xpc_object> endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(unsigned long long)widgetStyle;
-(void)setWidgetStyle:(unsigned long long)arg1 ;
@end

