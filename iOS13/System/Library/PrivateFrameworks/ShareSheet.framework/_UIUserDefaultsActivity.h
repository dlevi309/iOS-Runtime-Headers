/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)activityType;
-(_UIActivityUserDefaults *)userDefaults;
-(void)_cleanup;
-(void)setUserDefaults:(_UIActivityUserDefaults *)arg1 ;
-(void)setActivityCategory:(long long)arg1 ;
-(long long)activityCategory;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)_activityImage;
-(id)activityViewController;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(id)_actionImage;
-(void)_prepareActivityViewControllerIfNeeded;
-(UIViewController *)presentableActivityViewController;
-(void)setPresentableActivityViewController:(UIViewController *)arg1 ;
-(NSArray *)availableActivities;
-(void)_settingsViewControllerDidDismiss:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg1 activityCategory:(long long)arg2 ;
-(void)setAvailableActivities:(NSArray *)arg1 ;
@end

