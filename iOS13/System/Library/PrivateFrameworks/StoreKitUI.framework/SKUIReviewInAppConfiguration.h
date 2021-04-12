/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString, UIViewController, SKUIClientContext, UIImage;

@interface SKUIReviewInAppConfiguration : NSObject {

	BOOL _sandboxed;
	NSString* _itemID;
	NSString* _title;
	UIViewController* _viewController;
	SKUIClientContext* _clientContext;
	NSString* _customDescription;
	UIImage* _icon;

}

@property (nonatomic,copy) NSString * itemID;                                //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) NSString * customDescription;                     //@synthesize customDescription=_customDescription - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;              //@synthesize sandboxed=_sandboxed - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)itemID;
-(void)setItemID:(NSString *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIImage *)icon;
-(UIViewController *)viewController;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)customDescription;
-(void)setCustomDescription:(NSString *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(BOOL)isSandboxed;
-(void)setSandboxed:(BOOL)arg1 ;
@end

