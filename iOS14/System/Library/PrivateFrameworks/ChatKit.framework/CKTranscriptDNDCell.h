/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UISwitch;

@interface CKTranscriptDNDCell : UITableViewCell {

	UISwitch* _muteSwitch;

}

@property (nonatomic,retain) UISwitch * muteSwitch;              //@synthesize muteSwitch=_muteSwitch - In the implementation block
+(double)preferredHeight;
+(id)identifier;
-(void)layoutSubviews;
-(UISwitch *)muteSwitch;
-(void)setMuteSwitch:(UISwitch *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

