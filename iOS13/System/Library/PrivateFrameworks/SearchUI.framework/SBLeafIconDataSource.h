/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol SBLeafIconDataSource <NSObject>
@optional
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2;
-(id)icon:(id)arg1 defaultImageWithInfo:(SBIconImageInfo)arg2;
-(id)icon:(id)arg1 unmaskedImageWithInfo:(SBIconImageInfo)arg2;
-(BOOL)iconCanTruncateLabel:(id)arg1;
-(BOOL)iconCanTightenLabel:(id)arg1;
-(long long)progressStateForIcon:(id)arg1;
-(double)progressPercentForIcon:(id)arg1;
-(BOOL)isProgressPausedForIcon:(id)arg1;
-(id)badgeNumberOrStringForIcon:(id)arg1;
-(id)formattedAccessoryStringForIcon:(id)arg1;
-(long long)accessoryTypeForIcon:(id)arg1;
-(long long)labelAccessoryTypeForIcon:(id)arg1;
-(BOOL)isTimedOutForIcon:(id)arg1;
-(BOOL)iconSupportsUninstall:(id)arg1;
-(BOOL)iconCompleteUninstall:(id)arg1;
-(BOOL)iconAllowsLaunch:(id)arg1;
-(BOOL)iconDisallowsLaunchForObscuredReason:(id)arg1;
-(id)icon:(id)arg1 displayNameForObscuredDisabledLaunchForLocation:(id)arg2;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;

@required
-(unsigned long long)priorityForIcon:(id)arg1;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2;

@end

