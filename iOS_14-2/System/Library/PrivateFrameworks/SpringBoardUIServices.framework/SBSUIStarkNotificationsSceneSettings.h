/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIApplicationSceneSettings.h>
#import <libobjc.A.dylib/SBSUIStarkNotificationsSceneSettings.h>
@class BSServiceConnectionEndpoint;


@protocol SBSUIStarkNotificationsSceneSettings <NSObject>
@property (getter=isConnectedWirelessly,nonatomic,readonly) BOOL connectedWirelessly; 
@property (getter=isGeoSupported,nonatomic,readonly) BOOL geoSupported; 
@property (nonatomic,readonly) unsigned long long suspensionReasons; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * openServiceEndpoint; 
@required
-(BOOL)isConnectedWirelessly;
-(BSServiceConnectionEndpoint *)openServiceEndpoint;
-(BOOL)isGeoSupported;
-(unsigned long long)suspensionReasons;

@end


@class BSServiceConnectionEndpoint, NSString;

@interface SBSUIStarkNotificationsSceneSettings : UIApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>

@property (getter=isConnectedWirelessly,nonatomic,readonly) BOOL connectedWirelessly; 
@property (getter=isGeoSupported,nonatomic,readonly) BOOL geoSupported; 
@property (nonatomic,readonly) unsigned long long suspensionReasons; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * openServiceEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(BOOL)isConnectedWirelessly;
-(BSServiceConnectionEndpoint *)openServiceEndpoint;
-(BOOL)isGeoSupported;
-(unsigned long long)suspensionReasons;
@end

