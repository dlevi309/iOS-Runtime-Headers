/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIItem, NSString, NSURL, UIViewController;

@interface SKUIProductPageAction : NSObject {

	long long _actionType;
	SKUIItem* _item;
	NSString* _urlTitle;
	/*^block*/id _viewControllerBlock;
	NSURL* _url;

}

@property (assign,nonatomic) long long actionType;                             //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) SKUIItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) id viewControllerBlock;                             //@synthesize viewControllerBlock=_viewControllerBlock - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController; 
+(id)actionWithType:(long long)arg1 ;
-(SKUIItem *)item;
-(void)setItem:(SKUIItem *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(UIViewController *)viewController;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
-(id)viewControllerBlock;
-(void)setViewControllerBlock:(id)arg1 ;
@end

