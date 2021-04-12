/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(SKUIItem *)item;
-(void)setURL:(NSURL *)arg1 ;
-(void)setItem:(SKUIItem *)arg1 ;
-(UIViewController *)viewController;
-(NSURL *)URL;
-(id)viewControllerBlock;
-(void)setViewControllerBlock:(id)arg1 ;
@end

