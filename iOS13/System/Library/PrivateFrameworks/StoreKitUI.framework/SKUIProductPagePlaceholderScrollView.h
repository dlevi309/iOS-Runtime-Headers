/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIScrollView.h>

@class UIView;

@interface SKUIProductPagePlaceholderScrollView : UIScrollView {

	UIView* _placeholderView;
	double _offset;
	BOOL _isPad;

}

@property (assign,nonatomic) BOOL isPad;                            //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) double offset;                         //@synthesize offset=_offset - In the implementation block
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(void)layoutSubviews;
-(BOOL)isPad;
-(void)setIsPad:(BOOL)arg1 ;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(UIView *)placeholderView;
@end

