/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setMaskingInset:(double)arg1 ;
-(UIView *)tableMaskView;
-(double)maskingInset;
-(void)setTableMaskView:(UIView *)arg1 ;
-(void)didMoveToWindow;
@end

