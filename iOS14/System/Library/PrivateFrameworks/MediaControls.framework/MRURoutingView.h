/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class UITableView;

@interface MRURoutingView : UIView {

	UITableView* _tableView;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) UITableView * tableView;                     //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;              //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UITableView *)tableView;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
@end

