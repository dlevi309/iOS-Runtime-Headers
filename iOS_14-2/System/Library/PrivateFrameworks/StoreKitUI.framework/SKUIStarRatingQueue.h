/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIClientContext, SKUIReviewConfiguration, UIWindow;

@interface SKUIStarRatingQueue : NSObject {

	SKUIClientContext* _clientContext;
	SKUIReviewConfiguration* _reviewConfiguration;
	UIWindow* _window;

}

@property (assign,nonatomic,__weak) UIWindow * window;              //@synthesize window=_window - In the implementation block
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(UIWindow *)window;
-(id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2 ;
-(void)setRating:(long long)arg1 forItemID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_setRating:(long long)arg1 forItemID:(id)arg2 account:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

