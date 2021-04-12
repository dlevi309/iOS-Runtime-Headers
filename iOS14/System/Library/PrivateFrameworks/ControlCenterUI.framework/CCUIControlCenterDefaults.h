/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCUIControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic,readonly) BOOL shouldAlwaysBeEnabled; 
@property (nonatomic,readonly) BOOL shouldExcludeControlCenterFromStatusBarOverrides; 
@property (assign,nonatomic) BOOL hasForceTouchedToExpandModule; 
@property (assign,nonatomic) BOOL hasLongPressedToExpandModule; 
+(id)standardDefaults;
-(void)setShouldAlwaysBeEnabled:(BOOL)arg1 ;
-(BOOL)shouldAlwaysBeEnabled;
-(void)setHasForceTouchedToExpandModule:(BOOL)arg1 ;
-(BOOL)hasForceTouchedToExpandModule;
-(void)setShouldExcludeControlCenterFromStatusBarOverrides:(BOOL)arg1 ;
-(BOOL)shouldExcludeControlCenterFromStatusBarOverrides;
-(void)setHasLongPressedToExpandModule:(BOOL)arg1 ;
-(BOOL)hasLongPressedToExpandModule;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

