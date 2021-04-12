/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/SKUIGiftViewControllerDelegate.h>

@class SKUIClientContext, SKUIProductPageItem, NSString;

@interface SKUIGiftActivity : UIActivity <SKUIGiftViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	SKUIProductPageItem* _item;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(id)_beforeActivity;
-(void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
@end

