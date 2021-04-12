/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableView.h>

@class UIView;

@interface CNMaskingTableView : UITableView {

	double _maskingInset;
	UIView* _tableMaskView;

}

@property (nonatomic,retain) UIView * tableMaskView;              //@synthesize tableMaskView=_tableMaskView - In the implementation block
@property (assign,nonatomic) double maskingInset;                 //@synthesize maskingInset=_maskingInset - In the implementation block
-(void)setMaskingInset:(double)arg1 ;
-(UIView *)tableMaskView;
-(double)maskingInset;
-(void)setTableMaskView:(UIView *)arg1 ;
@end

