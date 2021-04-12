/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UISwitch;

@interface CKTranscriptDNDCell : UITableViewCell {

	UISwitch* _muteSwitch;

}

@property (nonatomic,retain) UISwitch * muteSwitch;              //@synthesize muteSwitch=_muteSwitch - In the implementation block
+(id)identifier;
+(double)preferredHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setMuteSwitch:(UISwitch *)arg1 ;
-(UISwitch *)muteSwitch;
@end

