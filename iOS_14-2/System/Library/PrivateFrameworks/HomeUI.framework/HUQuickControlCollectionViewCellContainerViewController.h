/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class HUQuickControlViewController, HUQuickControlCollectionViewCellContainerView;

@interface HUQuickControlCollectionViewCellContainerViewController : UIViewController {

	unsigned long long _titlePosition;
	HUQuickControlViewController* _contentViewController;
	UIEdgeInsets _preferredContentLayoutFrameInset;

}

@property (nonatomic,retain) HUQuickControlCollectionViewCellContainerView * view; 
@property (nonatomic,readonly) HUQuickControlCollectionViewCellContainerView * viewIfLoaded; 
@property (assign,nonatomic) unsigned long long titlePosition;                                            //@synthesize titlePosition=_titlePosition - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentLayoutFrameInset;                               //@synthesize preferredContentLayoutFrameInset=_preferredContentLayoutFrameInset - In the implementation block
@property (nonatomic,readonly) HUQuickControlViewController * contentViewController;                      //@synthesize contentViewController=_contentViewController - In the implementation block
+(id)intrinsicSizeDescriptorControlSizeDescriptor:(id)arg1 titlePosition:(unsigned long long)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(HUQuickControlViewController *)contentViewController;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)setTitlePosition:(unsigned long long)arg1 ;
-(unsigned long long)titlePosition;
-(UIEdgeInsets)preferredContentLayoutFrameInset;
-(void)setPreferredContentLayoutFrameInset:(UIEdgeInsets)arg1 ;
@end

