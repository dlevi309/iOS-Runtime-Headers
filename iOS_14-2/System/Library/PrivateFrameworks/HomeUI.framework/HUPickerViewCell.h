/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@protocol HUPickerCellDelegate;
@class NSIndexPath, HFItem, UIPickerView, NSString;

@interface HUPickerViewCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource> {

	NSIndexPath* _selectedIndexPath;
	HFItem* _item;
	id<HUPickerCellDelegate> _delegate;
	UIPickerView* _pickerView;
	long long _numberOfValues;

}

@property (nonatomic,retain) UIPickerView * pickerView;                             //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) long long numberOfValues;                              //@synthesize numberOfValues=_numberOfValues - In the implementation block
@property (nonatomic,retain) HFItem * item;                                         //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUPickerCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * selectedIndexPath;                     //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUPickerCellDelegate>)delegate;
-(HFItem *)item;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)setDelegate:(id<HUPickerCellDelegate>)arg1 ;
-(long long)numberOfValues;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(UIPickerView *)pickerView;
-(void)reloadPickerView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSIndexPath *)selectedIndexPath;
-(BOOL)_canSelectValueAtIndex:(long long)arg1 ;
-(void)setSelectedIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setNumberOfValues:(long long)arg1 ;
@end

