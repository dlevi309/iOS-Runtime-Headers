/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)preferredHeight;
+(id)identifier;
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

