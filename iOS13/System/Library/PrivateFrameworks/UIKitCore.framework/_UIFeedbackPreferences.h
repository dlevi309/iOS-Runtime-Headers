/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, NSDictionary, NSUserDefaults;

@interface _UIFeedbackPreferences : NSObject {

	NSMutableDictionary* _enabledFeedbackTypes;
	NSDictionary* _defaultFeedbackTypes;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSDictionary * defaultFeedbackTypes;              //@synthesize defaultFeedbackTypes=_defaultFeedbackTypes - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                      //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)sharedPreferences;
-(id)init;
-(void)_invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSUserDefaults *)userDefaults;
-(unsigned long long)enabledFeedbackTypesForCategory:(id)arg1 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)_startObservingDefaults;
-(id)_categoryForNullableCategory:(id)arg1 ;
-(id)_categoryKeyForCategory:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_defaultKeyForCategoryKey:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_accessibilityForceTouchChanged:(id)arg1 ;
-(unsigned long long)_enabledFeedbackTypesForCategory:(id)arg1 ;
-(void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 postNotification:(BOOL)arg3 ;
-(unsigned long long)_defaultFeedbackTypesForCategory:(id)arg1 ;
-(void)_updateEnabledFeedbackTypes:(unsigned long long*)arg1 forKey:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 ;
-(NSDictionary *)defaultFeedbackTypes;
@end

