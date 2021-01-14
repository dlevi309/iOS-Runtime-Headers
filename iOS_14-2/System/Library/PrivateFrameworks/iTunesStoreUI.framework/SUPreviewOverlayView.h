/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setStorePageView:(UIView *)arg1 ;
-(UIView *)storePageView;
@end

