/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setDelegate:(id<SKUISwooshViewControllerDelegate>)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(id)indexPathsForVisibleItems;
-(void)deselectAllItems;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)popImageViewForItemAtIndex:(long long)arg1 ;
-(void)unhideImages;
@end

