/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIInterfaceAction.h>

@interface SKUIReviewInAppRatingAction : UIInterfaceAction {

	/*^block*/id _beforeDismissHandler;
	/*^block*/id _afterDismissHandler;

}

@property (nonatomic,copy) id beforeDismissHandler;              //@synthesize beforeDismissHandler=_beforeDismissHandler - In the implementation block
@property (nonatomic,copy) id afterDismissHandler;               //@synthesize afterDismissHandler=_afterDismissHandler - In the implementation block
+(id)actionWithCustomContentViewController:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)beforeDismissHandler;
-(void)setBeforeDismissHandler:(id)arg1 ;
-(void)setAfterDismissHandler:(id)arg1 ;
-(id)afterDismissHandler;
-(void)setCustomEnabledState:(BOOL)arg1 ;
@end

