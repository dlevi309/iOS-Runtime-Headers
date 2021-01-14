/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
*/

@class NSString;


@protocol SBLeafIconDataSource <NSObject>
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * configurationStorageIdentifier; 
@optional
-(unsigned long long)supportedGridSizeClassesForIcon:(id)arg1;
-(BOOL)iconAllowsLaunch:(id)arg1;
-(id)icon:(id)arg1 unmaskedImageWithInfo:(SBIconImageInfo)arg2;
-(long long)accessoryTypeForIcon:(id)arg1;
-(BOOL)iconCanTightenLabel:(id)arg1;
-(BOOL)isTimedOutForIcon:(id)arg1;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
-(id)icon:(id)arg1 displayNameForObscuredDisabledLaunchForLocation:(id)arg2;
-(NSString *)uniqueIdentifier;
-(BOOL)iconCanTruncateLabel:(id)arg1;
-(id)badgeNumberOrStringForIcon:(id)arg1;
-(id)formattedAccessoryStringForIcon:(id)arg1;
-(BOOL)iconDisallowsLaunchForObscuredReason:(id)arg1;
-(id)icon:(id)arg1 defaultImageWithInfo:(SBIconImageInfo)arg2;
-(long long)progressStateForIcon:(id)arg1;
-(double)progressPercentForIcon:(id)arg1;
-(BOOL)isProgressPausedForIcon:(id)arg1;
-(BOOL)iconSupportsConfiguration:(id)arg1;
-(BOOL)iconSupportsRasterization:(id)arg1;
-(BOOL)iconShouldIgnoreOtherDataSources:(id)arg1;
-(NSString *)configurationStorageIdentifier;
-(BOOL)iconSupportsUninstall:(id)arg1;
-(BOOL)iconCompleteUninstall:(id)arg1;
-(long long)labelAccessoryTypeForIcon:(id)arg1;

@required
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2;
-(unsigned long long)priorityForIcon:(id)arg1;

@end

