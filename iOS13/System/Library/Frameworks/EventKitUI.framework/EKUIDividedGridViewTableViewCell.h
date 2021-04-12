/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class EKUIDividedGridViewController, UIView;

@interface EKUIDividedGridViewTableViewCell : UITableViewCell {

	EKUIDividedGridViewController* _gridViewController;
	UIView* _topDivider;
	UIView* _bottomDivider;

}

@property (retain) EKUIDividedGridViewController * gridViewController;              //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,retain) UIView * topDivider;                                   //@synthesize topDivider=_topDivider - In the implementation block
@property (nonatomic,retain) UIView * bottomDivider;                                //@synthesize bottomDivider=_bottomDivider - In the implementation block
@property (assign,nonatomic) BOOL drawsTopDivider; 
-(void)layoutSubviews;
-(CGRect)_separatorFrame;
-(void)setDrawsTopDivider:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 gridViewType:(long long)arg3 buttonTitles:(id)arg4 cellBackgroundColor:(id)arg5 ;
-(EKUIDividedGridViewController *)gridViewController;
-(BOOL)wantsDrawBackground;
-(void)setTopDivider:(UIView *)arg1 ;
-(void)setBottomDivider:(UIView *)arg1 ;
-(BOOL)_isWiderThanMaximum;
-(void)setDrawBottomDivider:(BOOL)arg1 ;
-(UIView *)bottomDivider;
-(UIView *)topDivider;
-(BOOL)drawBottomDivider;
-(BOOL)drawsTopDivider;
-(void)setGridViewController:(EKUIDividedGridViewController *)arg1 ;
@end

