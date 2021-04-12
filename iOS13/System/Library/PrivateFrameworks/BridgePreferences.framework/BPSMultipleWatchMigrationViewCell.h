/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BPSCheckMarkView *)checkmarkView;
-(void)setCheckmarkView:(BPSCheckMarkView *)arg1 ;
-(BPSRemoveMigrationWatchView *)watchView;
-(void)setWatchView:(BPSRemoveMigrationWatchView *)arg1 ;
-(UILabel *)deviceDetailLabel;
-(void)setDeviceDetailLabel:(UILabel *)arg1 ;
@end

