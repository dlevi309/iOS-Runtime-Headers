/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivity.h>

@class NSArray, _UIActivityUserDefaults, UIViewController;

@interface _UIUserDefaultsActivity : UIActivity {

	NSArray* _availableActivities;
	_UIActivityUserDefaults* _userDefaults;
	UIViewController* _presentableActivityViewController;
	long long _activityCategory;

}

@property (nonatomic,retain) _UIActivityUserDefaults * userDefaults;                            //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) UIViewController * presentableActivityViewController;              //@synthesize presentableActivityViewController=_presentableActivityViewController - In the implementation block
@property (assign,nonatomic) long long activityCategory;                                        //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,copy) NSArray * availableActivities;                                       //@synthesize availableActivities=_availableActivities - In the implementation block
-(void)_cleanup;
-(void)setUserDefaults:(_UIActivityUserDefaults *)arg1 ;
-(id)activityType;
-(UIViewController *)presentableActivityViewController;
-(void)_prepareActivityViewControllerIfNeeded;
-(void)setPresentableActivityViewController:(UIViewController *)arg1 ;
-(NSArray *)availableActivities;
-(void)_settingsViewControllerDidDismiss:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg1 activityCategory:(long long)arg2 ;
-(void)setAvailableActivities:(NSArray *)arg1 ;
-(_UIActivityUserDefaults *)userDefaults;
-(void)setActivityCategory:(long long)arg1 ;
-(long long)activityCategory;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(id)_actionImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)_activityImage;
-(id)activityViewController;
@end

