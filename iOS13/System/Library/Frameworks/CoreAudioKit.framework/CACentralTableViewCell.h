/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIActivityIndicatorView, NSArray;

@interface CACentralTableViewCell : UITableViewCell {

	UILabel* _deviceNameLabel;
	UILabel* _connectionStatusLabel;
	UILabel* _inputLabel;
	UILabel* _slashLabel;
	UILabel* _outputLabel;
	UIActivityIndicatorView* _activityIndicator;
	NSArray* _labelConstraints;
	NSArray* _activityHConstraints;
	NSArray* _activityVConstraints;

}

@property (nonatomic,retain) UILabel * deviceNameLabel;                                //@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * connectionStatusLabel;                          //@synthesize connectionStatusLabel=_connectionStatusLabel - In the implementation block
@property (nonatomic,retain) UILabel * inputLabel;                                     //@synthesize inputLabel=_inputLabel - In the implementation block
@property (nonatomic,retain) UILabel * slashLabel;                                     //@synthesize slashLabel=_slashLabel - In the implementation block
@property (nonatomic,retain) UILabel * outputLabel;                                    //@synthesize outputLabel=_outputLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;                               //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,retain) NSArray * activityHConstraints;                           //@synthesize activityHConstraints=_activityHConstraints - In the implementation block
@property (nonatomic,retain) NSArray * activityVConstraints;                           //@synthesize activityVConstraints=_activityVConstraints - In the implementation block
-(void)dealloc;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(UILabel *)inputLabel;
-(void)setInputLabel:(UILabel *)arg1 ;
-(void)createInitialConstraints;
-(void)setActivityHConstraints:(NSArray *)arg1 ;
-(void)setActivityVConstraints:(NSArray *)arg1 ;
-(NSArray *)activityHConstraints;
-(NSArray *)activityVConstraints;
-(void)startIndicator;
-(void)stopIndicator;
-(UILabel *)deviceNameLabel;
-(void)setDeviceNameLabel:(UILabel *)arg1 ;
-(UILabel *)connectionStatusLabel;
-(void)setConnectionStatusLabel:(UILabel *)arg1 ;
-(UILabel *)slashLabel;
-(void)setSlashLabel:(UILabel *)arg1 ;
-(UILabel *)outputLabel;
-(void)setOutputLabel:(UILabel *)arg1 ;
@end

