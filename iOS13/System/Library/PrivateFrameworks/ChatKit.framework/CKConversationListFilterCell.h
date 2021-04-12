/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UISegmentedControl;

@interface CKConversationListFilterCell : UITableViewCell {

	UISegmentedControl* _filterControl;

}

@property (nonatomic,retain) UISegmentedControl * filterControl;              //@synthesize filterControl=_filterControl - In the implementation block
+(id)identifier;
+(double)defaultHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setFilterControl:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)filterControl;
@end

