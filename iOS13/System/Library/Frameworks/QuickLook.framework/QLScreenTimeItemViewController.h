/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemViewController.h>

@class NSString, STLockoutViewController;

@interface QLScreenTimeItemViewController : QLItemViewController {

	NSString* _bundleIdentifier;
	NSString* _categoryIdentifier;
	STLockoutViewController* _lockoutViewController;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * categoryIdentifier;                                //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,retain) STLockoutViewController * lockoutViewController;              //@synthesize lockoutViewController=_lockoutViewController - In the implementation block
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(NSString *)categoryIdentifier;
-(STLockoutViewController *)lockoutViewController;
-(void)setLockoutViewController:(STLockoutViewController *)arg1 ;
-(BOOL)canSwipeToDismiss;
-(id)initWithCategoryIdentifier:(id)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
@end

