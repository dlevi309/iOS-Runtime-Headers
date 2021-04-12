/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(void)setContentView:(UIScrollView *)arg1 ;
-(UIScrollView *)contentView;
@end

