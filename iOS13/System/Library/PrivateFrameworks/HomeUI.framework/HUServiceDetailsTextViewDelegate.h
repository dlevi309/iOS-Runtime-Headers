/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@class HUServiceDetailsItemManager, UIViewController, NSString;

@interface HUServiceDetailsTextViewDelegate : NSObject <UITextViewDelegate> {

	HUServiceDetailsItemManager* _itemManager;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) HUServiceDetailsItemManager * itemManager;              //@synthesize itemManager=_itemManager - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(HUServiceDetailsItemManager *)itemManager;
-(void)setItemManager:(HUServiceDetailsItemManager *)arg1 ;
-(void)dismissTextViewController;
-(id)unifiedIdentifiersForSectionIdentifier:(id)arg1 ;
-(void)displayUnifiedPrivacyInformationWithIdentifiers:(id)arg1 ;
-(id)privacyIdentifierForSectionIdentifier:(id)arg1 ;
-(void)displayPrivacyInformationWithIdentifier:(id)arg1 ;
@end

