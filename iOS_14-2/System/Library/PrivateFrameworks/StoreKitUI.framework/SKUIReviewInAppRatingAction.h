/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

