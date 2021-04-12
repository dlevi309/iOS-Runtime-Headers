/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)_separatorFrame;
-(void)setTopDivider:(UIView *)arg1 ;
-(void)setBottomDivider:(UIView *)arg1 ;
-(BOOL)_isWiderThanMaximum;
-(void)setDrawBottomDivider:(BOOL)arg1 ;
-(UIView *)bottomDivider;
-(UIView *)topDivider;
-(BOOL)drawBottomDivider;
-(BOOL)drawsTopDivider;
-(void)setGridViewController:(EKUIDividedGridViewController *)arg1 ;
-(void)layoutSubviews;
-(void)setDrawsTopDivider:(BOOL)arg1 ;
-(EKUIDividedGridViewController *)gridViewController;
-(BOOL)wantsDrawBackground;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 gridViewType:(long long)arg3 buttonTitles:(id)arg4 cellBackgroundColor:(id)arg5 ;
@end

