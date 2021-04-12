/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol SKUISwooshViewControllerDelegate;
@class SKUIClientContext, SKUIColorScheme;

@interface SKUISwooshViewController : UIViewController {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	id<SKUISwooshViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIColorScheme * colorScheme;                                       //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISwooshViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SKUISwooshViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUISwooshViewControllerDelegate>)arg1 ;
-(id)indexPathsForVisibleItems;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(void)deselectAllItems;
-(id)popImageViewForItemAtIndex:(long long)arg1 ;
-(void)unhideImages;
@end

