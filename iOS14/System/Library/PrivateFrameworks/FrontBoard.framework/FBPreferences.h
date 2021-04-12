/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface FBPreferences : BSAbstractDefaultDomain

@property (nonatomic,readonly) BOOL disableXPCServicesEndpointHack; 
+(id)sharedInstance;
-(void)setDisableXPCServicesEndpointHack:(BOOL)arg1 ;
-(BOOL)disableXPCServicesEndpointHack;
-(void)_bindAndRegisterDefaults;
-(id)_init;
@end

