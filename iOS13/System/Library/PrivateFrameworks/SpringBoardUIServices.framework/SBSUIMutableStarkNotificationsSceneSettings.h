/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/SBSUIStarkNotificationsSceneSettings.h>

@class BSServiceConnectionEndpoint, NSString;

@interface SBSUIMutableStarkNotificationsSceneSettings : UIMutableApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>

@property (assign,getter=isConnectedWirelessly,nonatomic) BOOL connectedWirelessly; 
@property (assign,getter=isGeoSupported,nonatomic) BOOL geoSupported; 
@property (assign,nonatomic) unsigned long long suspensionReasons; 
@property (nonatomic,retain) BSServiceConnectionEndpoint * openServiceEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(unsigned long long)suspensionReasons;
-(BOOL)isConnectedWirelessly;
-(BOOL)isGeoSupported;
-(BSServiceConnectionEndpoint *)openServiceEndpoint;
-(void)setConnectedWirelessly:(BOOL)arg1 ;
-(void)setGeoSupported:(BOOL)arg1 ;
-(void)setSuspensionReasons:(unsigned long long)arg1 ;
-(void)setOpenServiceEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
@end

