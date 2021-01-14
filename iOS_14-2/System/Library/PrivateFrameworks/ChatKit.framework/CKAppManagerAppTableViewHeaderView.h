/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel;

@interface CKAppManagerAppTableViewHeaderView : UITableViewHeaderFooterView {

	UILabel* _headerLabel;

}

@property (nonatomic,retain) UILabel * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
+(id)identifier;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

