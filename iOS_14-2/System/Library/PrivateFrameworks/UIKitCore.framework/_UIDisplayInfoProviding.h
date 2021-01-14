/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class FBSDisplayConfiguration;


@protocol _UIDisplayInfoProviding <NSObject>
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@required
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(FBSDisplayConfiguration *)displayConfiguration;
-(UIEdgeInsets)peripheryInsets;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(double)systemMinimumMargin;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(unsigned long long)artworkSubtype;

@end

