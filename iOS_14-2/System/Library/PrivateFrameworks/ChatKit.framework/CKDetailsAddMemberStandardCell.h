/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsAddMemberCell.h>

@class UIImageView;

@interface CKDetailsAddMemberStandardCell : CKDetailsAddMemberCell {

	UIImageView* _addIcon;

}

@property (nonatomic,retain) UIImageView * addIcon;              //@synthesize addIcon=_addIcon - In the implementation block
+(double)preferredHeight;
-(void)setEnabled:(BOOL)arg1 ;
-(UIImageView *)addIcon;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAddIcon:(UIImageView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

