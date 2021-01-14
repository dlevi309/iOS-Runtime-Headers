/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPad;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(UIView *)placeholderView;
-(void)setIsPad:(BOOL)arg1 ;
-(double)offset;
-(void)layoutSubviews;
-(void)setOffset:(double)arg1 ;
@end

