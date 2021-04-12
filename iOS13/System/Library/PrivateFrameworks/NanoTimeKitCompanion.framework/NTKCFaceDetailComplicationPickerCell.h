/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@protocol NTKCFaceDetailComplicationPickerCellDelegate;
@class NSArray, NSString, UIPickerView, CAShapeLayer, NTKComplication;

@interface NTKCFaceDetailComplicationPickerCell : NTKCDetailTableViewCell <UIPickerViewDelegate, UIPickerViewDataSource> {

	long long _selectedIndex;
	BOOL _dateSlot;
	BOOL _isRichSlot;
	NSArray* _complications;
	NSString* _slot;
	id<NTKCFaceDetailComplicationPickerCellDelegate> _delegate;
	UIPickerView* _picker;
	CAShapeLayer* _selectionIndicator;

}

@property (nonatomic,retain) UIPickerView * picker;                                                         //@synthesize picker=_picker - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectionIndicator;                                             //@synthesize selectionIndicator=_selectionIndicator - In the implementation block
@property (nonatomic,readonly) NSArray * complications;                                                     //@synthesize complications=_complications - In the implementation block
@property (nonatomic,readonly) NSString * slot;                                                             //@synthesize slot=_slot - In the implementation block
@property (nonatomic,readonly) BOOL dateSlot;                                                               //@synthesize dateSlot=_dateSlot - In the implementation block
@property (nonatomic,readonly) BOOL isRichSlot;                                                             //@synthesize isRichSlot=_isRichSlot - In the implementation block
@property (nonatomic,retain) NTKComplication * selectedComplication; 
@property (assign,nonatomic,__weak) id<NTKCFaceDetailComplicationPickerCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)rowHeight;
+(id)reuseIdentifier;
-(id)init;
-(id<NTKCFaceDetailComplicationPickerCellDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailComplicationPickerCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(UIPickerView *)picker;
-(NSString *)slot;
-(void)setPicker:(UIPickerView *)arg1 ;
-(NSArray *)complications;
-(CAShapeLayer *)selectionIndicator;
-(void)setSelectionIndicator:(CAShapeLayer *)arg1 ;
-(NTKComplication *)selectedComplication;
-(BOOL)isRichSlot;
-(BOOL)dateSlot;
-(void)setSelectedComplication:(NTKComplication *)arg1 ;
-(id)_nameForRow:(long long)arg1 ;
-(void)setComplications:(id)arg1 forSlot:(id)arg2 dateSlot:(BOOL)arg3 isRichSlot:(BOOL)arg4 ;
@end

