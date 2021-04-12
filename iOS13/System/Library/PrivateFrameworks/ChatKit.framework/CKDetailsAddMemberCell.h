/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsCell.h>

@class UILabel, UIImageView;

@interface CKDetailsAddMemberCell : CKDetailsCell {

	UILabel* _addLabel;
	UIImageView* _addIcon;

}

@property (nonatomic,retain) UILabel * addLabel;                 //@synthesize addLabel=_addLabel - In the implementation block
@property (nonatomic,retain) UIImageView * addIcon;              //@synthesize addIcon=_addIcon - In the implementation block
+(double)preferredHeight;
+(id)reuseIdentifier;
+(Class)cellClass;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)addIcon;
-(UILabel *)addLabel;
-(void)setAddLabel:(UILabel *)arg1 ;
-(void)setAddIcon:(UIImageView *)arg1 ;
@end

