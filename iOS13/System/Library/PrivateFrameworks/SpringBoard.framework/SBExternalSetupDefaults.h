/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

