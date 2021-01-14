/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

