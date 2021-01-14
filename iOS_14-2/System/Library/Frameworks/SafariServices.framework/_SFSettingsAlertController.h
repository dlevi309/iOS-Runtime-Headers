/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addItem:(id)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(NSArray *)items;
-(_SFSettingsAlertItem *)focusedItem;
-(void)viewDidLoad;
-(void)_pushSubItemsForGroup:(id)arg1 ;
-(_SFSettingsAlertContentController *)_rootContentController;
-(void)addDivider;
-(void)setFocusedItem:(_SFSettingsAlertItem *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

