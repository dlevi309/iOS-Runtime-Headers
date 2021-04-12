/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _TVRelatedWrappingView;

@interface _TVRelatedContentShelfView : UIView {

	UIView* _lastFocusedView;
	_TVRelatedWrappingView* _relatedWrappingView;
	UIView* _shelfView;
	UIView* _relatedView;
	double _relatedHeight;

}

@property (assign,nonatomic,__weak) UIView * shelfView;              //@synthesize shelfView=_shelfView - In the implementation block
@property (nonatomic,retain) UIView * relatedView;                   //@synthesize relatedView=_relatedView - In the implementation block
@property (assign,nonatomic) double relatedHeight;                   //@synthesize relatedHeight=_relatedHeight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setShelfView:(UIView *)arg1 ;
-(UIView *)shelfView;
-(void)setRelatedHeight:(double)arg1 ;
-(void)setRelatedView:(UIView *)arg1 ;
-(UIView *)relatedView;
-(void)_layoutRelatedView;
-(double)relatedHeight;
@end

