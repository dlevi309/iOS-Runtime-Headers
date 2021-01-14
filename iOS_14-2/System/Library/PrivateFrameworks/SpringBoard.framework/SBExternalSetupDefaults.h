/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface SBExternalSetupDefaults : BSAbstractDefaultDomain

@property (assign,getter=isDeviceSetup,nonatomic) BOOL deviceSetup; 
@property (nonatomic,readonly) NSString * setupState; 
-(void)setSetupState:(NSString *)arg1 ;
-(NSString *)setupState;
-(void)setDeviceSetup:(BOOL)arg1 ;
-(BOOL)isDeviceSetup;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

