/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel;

@interface CKAppManagerAppTableViewHeaderView : UITableViewHeaderFooterView {

	UILabel* _headerLabel;

}

@property (nonatomic,retain) UILabel * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
+(id)identifier;
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
@end

