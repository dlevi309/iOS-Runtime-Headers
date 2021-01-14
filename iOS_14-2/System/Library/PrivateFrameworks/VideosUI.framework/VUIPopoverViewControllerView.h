/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIButton *)cancelButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITableView *)tableView;
-(void)layoutSubviews;
-(void)_configureSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
@end

