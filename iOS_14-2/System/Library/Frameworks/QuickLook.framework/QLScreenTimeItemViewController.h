/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemViewController.h>

@class NSString, STBlockingViewController;

@interface QLScreenTimeItemViewController : QLItemViewController {

	long long _policy;
	NSString* _bundleIdentifier;
	NSString* _categoryIdentifier;
	STBlockingViewController* _blockingViewController;

}

@property (assign,nonatomic) long long policy;                                               //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * categoryIdentifier;                                  //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,retain) STBlockingViewController * blockingViewController;              //@synthesize blockingViewController=_blockingViewController - In the implementation block
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)categoryIdentifier;
-(void)hideBlockingViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPolicy:(long long)arg1 ;
-(long long)policy;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)showBlockingViewControllerWithPolicy:(long long)arg1 ;
-(STBlockingViewController *)blockingViewController;
-(void)setBlockingViewController:(STBlockingViewController *)arg1 ;
-(void)_updateBlockingViewControllerWithCurrentPolicy;
-(id)initWithCategoryIdentifier:(id)arg1 ;
-(BOOL)canSwipeToDismiss;
@end

