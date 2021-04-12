/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SUPreviewOverlayView : UIView {

	UIView* _borderView;
	UIView* _storePageView;

}

@property (nonatomic,retain) UIView * storePageView;              //@synthesize storePageView=_storePageView - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStorePageView:(UIView *)arg1 ;
-(UIView *)storePageView;
@end

