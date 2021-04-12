/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) long long lastLockedOrientation; 
@property (getter=isVideoRotationEnabled,nonatomic,readonly) BOOL videoRotationEnabled; 
-(void)setVideoRotationEnabled:(BOOL)arg1 ;
-(BOOL)isVideoRotationEnabled;
-(void)setLastLockedOrientation:(long long)arg1 ;
-(long long)lastLockedOrientation;
-(void)_bindAndRegisterDefaults;
@end

