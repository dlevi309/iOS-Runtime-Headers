/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDisplayInfoProviding.h>

@class FBSDisplayConfiguration, NSString;

@interface _UIDisplayInfoProvider : NSObject <_UIDisplayInfoProviding> {

	FBSDisplayConfiguration* displayConfiguration;
	unsigned long long artworkSubtype;
	double homeAffordanceOverlayAllowance;
	double systemMinimumMargin;
	UIEdgeInsets peripheryInsets;
	UIEdgeInsets safeAreaInsetsPortrait;
	UIEdgeInsets safeAreaInsetsLandscapeLeft;
	UIEdgeInsets safeAreaInsetsLandscapeRight;
	UIEdgeInsets safeAreaInsetsPortraitUpsideDown;

}

@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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

