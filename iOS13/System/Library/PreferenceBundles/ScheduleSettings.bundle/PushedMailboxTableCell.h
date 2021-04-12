/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/ScheduleSettings.bundle/ScheduleSettings
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView;

@interface PushedMailboxTableCell : UITableViewCell {

	UILabel* _mailboxName;
	UIImageView* _mailboxIcon;
	unsigned _level;

}

@property (assign,nonatomic) unsigned level;              //@synthesize level=_level - In the implementation block
+(int)_cacheIndexForType:(int)arg1 ;
+(id)_iconForType:(int)arg1 nested:(BOOL)arg2 ;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned)level;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setLevel:(unsigned)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(void)_setupMailFolderIconForImage:(id)arg1 ;
-(void)setMailboxName:(id)arg1 ;
@end

