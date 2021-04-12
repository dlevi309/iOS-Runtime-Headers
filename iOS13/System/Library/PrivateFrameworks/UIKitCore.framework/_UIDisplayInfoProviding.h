/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class FBSDisplayConfiguration;


@protocol _UIDisplayInfoProviding <NSObject>
@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (assign,nonatomic) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@required
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setArtworkSubtype:(unsigned long long)arg1;
-(UIEdgeInsets)peripheryInsets;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(double)systemMinimumMargin;
-(void)setDisplayConfiguration:(id)arg1;
-(unsigned long long)artworkSubtype;

@end

