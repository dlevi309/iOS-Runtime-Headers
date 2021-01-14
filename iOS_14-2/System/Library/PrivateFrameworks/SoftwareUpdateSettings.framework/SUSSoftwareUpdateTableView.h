/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
*/

#import <SoftwareUpdateSettings/SoftwareUpdateSettings-Structs.h>
#import <UIKitCore/UITableView.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface SUSSoftwareUpdateTableView : UITableView {

	BOOL _updatesDeferred;
	int _state;
	NSString* _currentVersion;
	UILabel* _checkingStatusLabel;
	UILabel* _subtitleLabel;
	UIActivityIndicatorView* _checkingForUpdateSpinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * checkingForUpdateSpinner;              //@synthesize checkingForUpdateSpinner=_checkingForUpdateSpinner - In the implementation block
@property (nonatomic,retain) UILabel * checkingStatusLabel;                                   //@synthesize checkingStatusLabel=_checkingStatusLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) int state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * currentVersion;                                       //@synthesize currentVersion=_currentVersion - In the implementation block
@property (assign) BOOL updatesDeferred;                                                      //@synthesize updatesDeferred=_updatesDeferred - In the implementation block
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(BOOL)updatesDeferred;
-(void)setCurrentVersion:(NSString *)arg1 ;
-(void)setUpdatesDeferred:(BOOL)arg1 ;
-(UILabel *)checkingStatusLabel;
-(void)setCheckingStatusLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)checkingForUpdateSpinner;
-(void)setCheckingForUpdateSpinner:(UIActivityIndicatorView *)arg1 ;
-(NSString *)currentVersion;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(int)state;
@end

