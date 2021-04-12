/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initAsSystem;
-(void)setPreferredContentSizeCategory:(id)arg1 ;
-(void)_postContentSizeCategoryDidChangeNotification;
-(void)checkForChanges;
-(void)setOverridePreferences:(UIContentSizeCategoryPreference *)arg1 ;
-(void)_updateContentSizeCategory:(id)arg1 carPlay:(id)arg2 postingNotification:(BOOL)arg3 ;
-(id)description;
-(void)_beginObservingPreferredContentSizeChangedNotification;
-(void)_endObservingPreferredContentSizeChangedNotification;
-(UIContentSizeCategoryPreference *)overridePreferences;
-(void)_readAndObservePreferences;
-(void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(BOOL)arg1 ;
-(void)dealloc;
@end

