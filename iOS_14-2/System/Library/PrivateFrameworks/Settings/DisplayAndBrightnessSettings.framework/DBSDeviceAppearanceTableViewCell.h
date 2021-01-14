/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/DBSDeviceAppearanceOptionViewDelegate.h>

@protocol DBSDeviceAppearanceTableViewCellDelegate;
@class DBSDeviceAppearanceOptionView, UILayoutGuide, NSString;

@interface DBSDeviceAppearanceTableViewCell : UITableViewCell <DBSDeviceAppearanceOptionViewDelegate> {

	id<DBSDeviceAppearanceTableViewCellDelegate> _delegate;
	DBSDeviceAppearanceOptionView* __lightOptionView;
	DBSDeviceAppearanceOptionView* __darkOptionView;
	UILayoutGuide* __leadingGuide;
	UILayoutGuide* __middleGuide;
	UILayoutGuide* __trailingGuide;

}

@property (nonatomic,retain) DBSDeviceAppearanceOptionView * _lightOptionView;                          //@synthesize _lightOptionView=__lightOptionView - In the implementation block
@property (nonatomic,retain) DBSDeviceAppearanceOptionView * _darkOptionView;                           //@synthesize _darkOptionView=__darkOptionView - In the implementation block
@property (nonatomic,retain) UILayoutGuide * _leadingGuide;                                             //@synthesize _leadingGuide=__leadingGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * _middleGuide;                                              //@synthesize _middleGuide=__middleGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * _trailingGuide;                                            //@synthesize _trailingGuide=__trailingGuide - In the implementation block
@property (assign,nonatomic,__weak) id<DBSDeviceAppearanceTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id<DBSDeviceAppearanceTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<DBSDeviceAppearanceTableViewCellDelegate>)arg1 ;
-(UILayoutGuide *)_leadingGuide;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_configureView;
-(void)set_lightOptionView:(DBSDeviceAppearanceOptionView *)arg1 ;
-(DBSDeviceAppearanceOptionView *)_lightOptionView;
-(void)set_darkOptionView:(DBSDeviceAppearanceOptionView *)arg1 ;
-(DBSDeviceAppearanceOptionView *)_darkOptionView;
-(void)set_leadingGuide:(UILayoutGuide *)arg1 ;
-(void)set_middleGuide:(UILayoutGuide *)arg1 ;
-(void)set_trailingGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)_middleGuide;
-(UILayoutGuide *)_trailingGuide;
-(void)userDidTapOnAppearanceOptionView:(id)arg1 ;
@end

