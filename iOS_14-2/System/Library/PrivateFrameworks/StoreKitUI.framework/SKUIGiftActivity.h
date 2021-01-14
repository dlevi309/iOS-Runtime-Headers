/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_beforeActivity;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(id)activityViewController;
-(void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
@end

