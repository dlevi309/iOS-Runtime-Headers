/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ShareSheet/UIActivity.h>

@class SKUIClientContext, SKUIShareSheetActivityViewElement;

@interface SKUIShareTemplateActivity : UIActivity {

	SKUIClientContext* _clientContext;
	SKUIShareSheetActivityViewElement* _viewElement;

}
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(id)_beforeActivity;
-(id)initWithActivityViewElement:(id)arg1 clientContext:(id)arg2 ;
@end

