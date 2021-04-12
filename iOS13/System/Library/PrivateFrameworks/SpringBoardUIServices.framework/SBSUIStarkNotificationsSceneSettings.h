/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)suspensionReasons;
-(BOOL)isConnectedWirelessly;
-(BOOL)isGeoSupported;
-(BSServiceConnectionEndpoint *)openServiceEndpoint;

@end


@class BSServiceConnectionEndpoint, NSString;

@interface SBSUIStarkNotificationsSceneSettings : UIApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isConnectedWirelessly,nonatomic,readonly) BOOL connectedWirelessly; 
@property (getter=isGeoSupported,nonatomic,readonly) BOOL geoSupported; 
@property (nonatomic,readonly) unsigned long long suspensionReasons; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * openServiceEndpoint; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(unsigned long long)suspensionReasons;
-(BOOL)isConnectedWirelessly;
-(BOOL)isGeoSupported;
-(BSServiceConnectionEndpoint *)openServiceEndpoint;
@end

