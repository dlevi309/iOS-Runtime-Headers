/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UITableView, UIButton;

@interface VUIPopoverViewControllerView : UIView {

	UITableView* _tableView;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(UIButton *)cancelButton;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_configureSubviews;
@end

