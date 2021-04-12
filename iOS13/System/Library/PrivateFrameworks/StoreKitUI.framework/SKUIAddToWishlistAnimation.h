/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class UIImage, UINavigationButton;

@interface SKUIAddToWishlistAnimation : NSObject {

	/*^block*/id _completionBlock;
	UIImage* _image;
	UINavigationButton* _targetButton;

}
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithImage:(id)arg1 buttonItem:(id)arg2 navigationBar:(id)arg3 ;
-(void)animateWithCompletionBlock:(/*^block*/id)arg1 ;
@end

