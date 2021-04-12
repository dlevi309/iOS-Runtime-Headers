/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol SKUIPickerViewDelegate;
@class _UIBackdropView, UIPickerView, UIView, NSArray, NSString;

@interface SKUIPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {

	_UIBackdropView* _backdropView;
	id<SKUIPickerViewDelegate> _delegate;
	UIPickerView* _pickerView;
	UIView* _separatorView;
	NSArray* _titles;

}

@property (assign,nonatomic,__weak) id<SKUIPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedItemIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<SKUIPickerViewDelegate>)delegate;
-(void)setDelegate:(id<SKUIPickerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)initWithTitles:(id)arg1 ;
-(long long)selectedItemIndex;
-(void)setSelectedItemIndex:(long long)arg1 ;
@end

