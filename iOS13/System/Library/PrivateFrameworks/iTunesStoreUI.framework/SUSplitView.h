/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SUSplitView : UIView {

	UIView* _firstView;
	long long _layoutType;
	double _minimumPaneSize;
	UIView* _secondView;
	double _splitPosition;
	BOOL _vertical;

}

@property (nonatomic,retain) UIView * firstView;                           //@synthesize firstView=_firstView - In the implementation block
@property (assign,nonatomic) long long layoutType;                         //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) UIView * secondView;                          //@synthesize secondView=_secondView - In the implementation block
@property (assign,nonatomic) double splitPosition;                         //@synthesize splitPosition=_splitPosition - In the implementation block
@property (assign,getter=isVertical,nonatomic) BOOL vertical;              //@synthesize vertical=_vertical - In the implementation block
@property (assign,nonatomic) double minimumPaneSize;                       //@synthesize minimumPaneSize=_minimumPaneSize - In the implementation block
-(void)dealloc;
-(BOOL)isVertical;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setVertical:(BOOL)arg1 ;
-(long long)layoutType;
-(void)setLayoutType:(long long)arg1 ;
-(double)minimumPaneSize;
-(double)splitPosition;
-(void)setSplitPosition:(double)arg1 ;
-(void)setMinimumPaneSize:(double)arg1 ;
-(void)setFirstView:(UIView *)arg1 ;
-(void)setSecondView:(UIView *)arg1 ;
-(double)_minimumPaneSizeForLayout;
-(UIView *)firstView;
-(UIView *)secondView;
@end

