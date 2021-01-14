/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ShareSheet/UIActivity.h>

@class SKUIClientContext, SKUIShareSheetActivityViewElement;

@interface SKUIShareTemplateActivity : UIActivity {

	SKUIClientContext* _clientContext;
	SKUIShareSheetActivityViewElement* _viewElement;

}
-(id)activityType;
-(void)performActivity;
-(id)_beforeActivity;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(id)initWithActivityViewElement:(id)arg1 clientContext:(id)arg2 ;
@end

