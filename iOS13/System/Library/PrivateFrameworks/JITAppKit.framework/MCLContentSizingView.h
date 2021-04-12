/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TKKeyPathObserver, UIScrollView;

@interface MCLContentSizingView : UIView {

	TKKeyPathObserver* _observer;
	UIScrollView* _contentView;

}

@property (nonatomic,retain) UIScrollView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(UIScrollView *)contentView;
-(void)setContentView:(UIScrollView *)arg1 ;
-(CGSize)intrinsicContentSize;
@end

