/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

