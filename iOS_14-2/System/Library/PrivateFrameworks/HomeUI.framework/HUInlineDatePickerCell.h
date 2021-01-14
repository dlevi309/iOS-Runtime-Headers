/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol HUInlineDatePickerCellDelegate;
@class NSString, UIDatePicker, NSArray, NSDateComponents;

@interface HUInlineDatePickerCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _hideTitleLabel;
	id<HUInlineDatePickerCellDelegate> _delegate;
	NSString* _title;
	double _leftMargin;
	UIDatePicker* _datePicker;
	NSArray* _allConstraints;

}

@property (nonatomic,retain) UIDatePicker * datePicker;                                       //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) NSArray * allConstraints;                                        //@synthesize allConstraints=_allConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUInlineDatePickerCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDateComponents * timeComponents; 
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL hideTitleLabel;                                             //@synthesize hideTitleLabel=_hideTitleLabel - In the implementation block
@property (assign,nonatomic) double leftMargin;                                               //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                 //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisabled:(BOOL)arg1 ;
-(void)_valueChanged:(id)arg1 ;
-(id<HUInlineDatePickerCellDelegate>)delegate;
-(void)setLeftMargin:(double)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSDateComponents *)timeComponents;
-(BOOL)isDisabled;
-(double)leftMargin;
-(void)setDelegate:(id<HUInlineDatePickerCellDelegate>)arg1 ;
-(UIDatePicker *)datePicker;
-(void)updateConstraints;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)allConstraints;
-(void)setAllConstraints:(NSArray *)arg1 ;
-(BOOL)hideTitleLabel;
-(void)setTimeComponents:(NSDateComponents *)arg1 ;
-(void)setHideTitleLabel:(BOOL)arg1 ;
@end

