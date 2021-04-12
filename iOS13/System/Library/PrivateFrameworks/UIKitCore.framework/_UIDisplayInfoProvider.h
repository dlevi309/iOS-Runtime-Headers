/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (assign,nonatomic) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setArtworkSubtype:(unsigned long long)arg1 ;
-(UIEdgeInsets)peripheryInsets;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(double)systemMinimumMargin;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(unsigned long long)artworkSubtype;
@end

