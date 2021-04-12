/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UINavigationController, _SFSettingsAlertContentController, NSArray, _SFSettingsAlertItem;

@interface _SFSettingsAlertController : UIViewController {

	UINavigationController* _navigationController;

}

@property (nonatomic,readonly) _SFSettingsAlertContentController * _rootContentController; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,retain) _SFSettingsAlertItem * focusedItem; 
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(_SFSettingsAlertItem *)focusedItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)_pushSubItemsForGroup:(id)arg1 ;
-(_SFSettingsAlertContentController *)_rootContentController;
-(void)addDivider;
-(void)setFocusedItem:(_SFSettingsAlertItem *)arg1 ;
@end

