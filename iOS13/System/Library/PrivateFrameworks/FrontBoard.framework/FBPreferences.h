/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface FBPreferences : BSAbstractDefaultDomain

@property (nonatomic,readonly) BOOL disableXPCServicesEndpointHack; 
@property (nonatomic,readonly) BOOL defaultShellShouldTerminateClientsOnDisconnect; 
+(id)sharedInstance;
-(void)setDefaultShellShouldTerminateClientsOnDisconnect:(BOOL)arg1 ;
-(BOOL)defaultShellShouldTerminateClientsOnDisconnect;
-(void)setDisableXPCServicesEndpointHack:(BOOL)arg1 ;
-(BOOL)disableXPCServicesEndpointHack;
-(id)_init;
-(void)_bindAndRegisterDefaults;
@end

