/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsCell.h>

@class UILabel;

@interface CKDetailsAddMemberCell : CKDetailsCell {

	UILabel* _addLabel;

}

@property (nonatomic,retain) UILabel * addLabel;              //@synthesize addLabel=_addLabel - In the implementation block
+(Class)cellClass;
+(double)preferredHeight;
+(id)reuseIdentifier;
-(UILabel *)addLabel;
-(void)setAddLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

