/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBHardwareDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) BOOL hasSeenACaseLatchCoverOnce; 
@property (nonatomic,readonly) BOOL disableHomeButton; 
@property (nonatomic,readonly) BOOL useHardwareSwitchAsOrientationLock; 
@property (nonatomic,readonly) BOOL disableProximitySensor; 
@property (nonatomic,readonly) BOOL disableHomeButtonDoublePress; 
@property (assign,nonatomic) long long homeButtonHapticType; 
-(void)setDisableProximitySensor:(BOOL)arg1 ;
-(BOOL)disableProximitySensor;
-(void)setUseHardwareSwitchAsOrientationLock:(BOOL)arg1 ;
-(BOOL)useHardwareSwitchAsOrientationLock;
-(void)setHasSeenACaseLatchCoverOnce:(BOOL)arg1 ;
-(BOOL)hasSeenACaseLatchCoverOnce;
-(void)setHomeButtonHapticType:(long long)arg1 ;
-(long long)homeButtonHapticType;
-(void)setDisableHomeButtonDoublePress:(BOOL)arg1 ;
-(BOOL)disableHomeButtonDoublePress;
-(void)setDisableHomeButton:(BOOL)arg1 ;
-(BOOL)disableHomeButton;
-(void)_bindAndRegisterDefaults;
@end

