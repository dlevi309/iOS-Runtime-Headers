/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIView;

@interface HUAddPeopleTableHeaderFooterView : UITableViewHeaderFooterView {

	BOOL _needsTopBorder;
	BOOL _needsBottomBorder;
	UIView* _topBorder;
	UIView* _bottomBorder;

}

@property (nonatomic,retain) UIView * topBorder;                  //@synthesize topBorder=_topBorder - In the implementation block
@property (nonatomic,retain) UIView * bottomBorder;               //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (assign,nonatomic) BOOL needsTopBorder;                 //@synthesize needsTopBorder=_needsTopBorder - In the implementation block
@property (assign,nonatomic) BOOL needsBottomBorder;              //@synthesize needsBottomBorder=_needsBottomBorder - In the implementation block
+(id)identifier;
+(double)preferredHeight;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UIView *)topBorder;
-(UIView *)bottomBorder;
-(void)setNeedsBottomBorder:(BOOL)arg1 ;
-(void)setNeedsTopBorder:(BOOL)arg1 ;
-(BOOL)needsTopBorder;
-(BOOL)needsBottomBorder;
-(void)setTopBorder:(UIView *)arg1 ;
-(void)setBottomBorder:(UIView *)arg1 ;
@end

