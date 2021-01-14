/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <UIKitCore/UITableViewCell.h>

@class BPSRemoveMigrationWatchView, BPSCheckMarkView, UILabel;

@interface BPSMultipleWatchMigrationViewCell : UITableViewCell {

	BPSRemoveMigrationWatchView* _watchView;
	BPSCheckMarkView* _checkmarkView;
	UILabel* _deviceDetailLabel;

}

@property (nonatomic,retain) BPSRemoveMigrationWatchView * watchView;              //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) BPSCheckMarkView * checkmarkView;                     //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UILabel * deviceDetailLabel;                          //@synthesize deviceDetailLabel=_deviceDetailLabel - In the implementation block
-(BPSCheckMarkView *)checkmarkView;
-(void)setCheckmarkView:(BPSCheckMarkView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BPSRemoveMigrationWatchView *)watchView;
-(void)setWatchView:(BPSRemoveMigrationWatchView *)arg1 ;
-(UILabel *)deviceDetailLabel;
-(void)setDeviceDetailLabel:(UILabel *)arg1 ;
@end

