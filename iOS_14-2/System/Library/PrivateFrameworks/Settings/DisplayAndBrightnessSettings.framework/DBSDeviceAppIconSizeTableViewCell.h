/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/DBSDeviceAppIconSizeOptionViewDelegate.h>

@protocol DBSDeviceAppIconSizeTableViewCellDelegate;
@class DBSDeviceAppIconSizeOptionView, UILayoutGuide, NSString;

@interface DBSDeviceAppIconSizeTableViewCell : UITableViewCell <DBSDeviceAppIconSizeOptionViewDelegate> {

	id<DBSDeviceAppIconSizeTableViewCellDelegate> _delegate;
	DBSDeviceAppIconSizeOptionView* __moreOptionView;
	DBSDeviceAppIconSizeOptionView* __biggerOptionView;
	UILayoutGuide* __leadingGuide;
	UILayoutGuide* __middleGuide;
	UILayoutGuide* __trailingGuide;

}

@property (nonatomic,retain) DBSDeviceAppIconSizeOptionView * _moreOptionView;                           //@synthesize _moreOptionView=__moreOptionView - In the implementation block
@property (nonatomic,retain) DBSDeviceAppIconSizeOptionView * _biggerOptionView;                         //@synthesize _biggerOptionView=__biggerOptionView - In the implementation block
@property (nonatomic,retain) UILayoutGuide * _leadingGuide;                                              //@synthesize _leadingGuide=__leadingGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * _middleGuide;                                               //@synthesize _middleGuide=__middleGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * _trailingGuide;                                             //@synthesize _trailingGuide=__trailingGuide - In the implementation block
@property (assign,nonatomic,__weak) id<DBSDeviceAppIconSizeTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyle;
-(void)startAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id<DBSDeviceAppIconSizeTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<DBSDeviceAppIconSizeTableViewCellDelegate>)arg1 ;
-(void)stopAnimation;
-(UILayoutGuide *)_leadingGuide;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_configureView;
-(void)set_leadingGuide:(UILayoutGuide *)arg1 ;
-(void)set_middleGuide:(UILayoutGuide *)arg1 ;
-(void)set_trailingGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)_middleGuide;
-(UILayoutGuide *)_trailingGuide;
-(void)reloadDeviceAppIconSizeState;
-(void)userDidTapOnAppIconSizeOptionView:(id)arg1 ;
-(void)set_moreOptionView:(DBSDeviceAppIconSizeOptionView *)arg1 ;
-(DBSDeviceAppIconSizeOptionView *)_moreOptionView;
-(void)set_biggerOptionView:(DBSDeviceAppIconSizeOptionView *)arg1 ;
-(DBSDeviceAppIconSizeOptionView *)_biggerOptionView;
@end

