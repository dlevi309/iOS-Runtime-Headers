/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEnabled:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(unsigned)level;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(void)setLevel:(unsigned)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)_setupMailFolderIconForImage:(id)arg1 ;
-(void)setMailboxName:(id)arg1 ;
@end

