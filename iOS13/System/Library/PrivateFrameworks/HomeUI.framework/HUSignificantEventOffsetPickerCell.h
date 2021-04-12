/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@protocol HUSignificantEventOffsetPickerDelegate;
@class NSString, NSDateComponents, UIPickerView, NSArray;

@interface HUSignificantEventOffsetPickerCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource> {

	NSString* _significantEvent;
	NSDateComponents* _currentOffset;
	id<HUSignificantEventOffsetPickerDelegate> _delegate;
	NSDateComponents* _selectedOffset;
	UIPickerView* _pickerView;
	NSArray* _offsetDateComponentOptions;

}

@property (nonatomic,readonly) UIPickerView * pickerView;                                             //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,retain) NSArray * offsetDateComponentOptions;                                    //@synthesize offsetDateComponentOptions=_offsetDateComponentOptions - In the implementation block
@property (nonatomic,retain) NSString * significantEvent;                                             //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,retain) NSDateComponents * currentOffset;                                        //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<HUSignificantEventOffsetPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDateComponents * selectedOffset;                                       //@synthesize selectedOffset=_selectedOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultOffsetDateComponentOptions;
-(id<HUSignificantEventOffsetPickerDelegate>)delegate;
-(void)setDelegate:(id<HUSignificantEventOffsetPickerDelegate>)arg1 ;
-(NSDateComponents *)currentOffset;
-(void)setCurrentOffset:(NSDateComponents *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(UIPickerView *)pickerView;
-(NSString *)significantEvent;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)_updateOffsetDateComponentOptions;
-(NSArray *)offsetDateComponentOptions;
-(void)setOffsetDateComponentOptions:(NSArray *)arg1 ;
-(id)_titleForOffsetComponents:(id)arg1 ;
-(NSDateComponents *)selectedOffset;
-(void)setSelectedOffset:(NSDateComponents *)arg1 ;
@end

