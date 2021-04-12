/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIContentSizeCategoryPreference.h>

@class UIContentSizeCategoryPreference;

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {

	BOOL _observingNotification;
	BOOL _didCheckForPreferredContentSizeCategoryOverride;
	BOOL _applicationOverridesPreferredContentSizeCategory;
	UIContentSizeCategoryPreference* _overridePreferences;

}

@property (nonatomic,retain) UIContentSizeCategoryPreference * overridePreferences;              //@synthesize overridePreferences=_overridePreferences - In the implementation block
-(void)dealloc;
-(id)description;
-(void)checkForChanges;
-(UIContentSizeCategoryPreference *)overridePreferences;
-(void)setOverridePreferences:(UIContentSizeCategoryPreference *)arg1 ;
-(id)initAsSystem;
-(void)_readAndObservePreferences;
-(void)setPreferredContentSizeCategory:(id)arg1 ;
-(void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(BOOL)arg1 ;
-(void)_beginObservingPreferredContentSizeChangedNotification;
-(void)_endObservingPreferredContentSizeChangedNotification;
-(void)_updateContentSizeCategory:(id)arg1 carPlay:(id)arg2 postingNotification:(BOOL)arg3 ;
-(void)_postContentSizeCategoryDidChangeNotification;
@end

