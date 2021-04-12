/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKPaletteAttributeViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/_PKInkAttributesPickerViewDelegate.h>

@protocol PKInkAttributesPickerDelegate;
@class _PKInkAttributesPickerView, PKInk, NSString;

@interface PKInkAttributesPicker : PKPaletteAttributeViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate> {

	BOOL _updatingOpacityValue;
	id<PKInkAttributesPickerDelegate> _delegate;
	_PKInkAttributesPickerView* _pickerView;
	double _minimumOpacityValue;

}

@property (nonatomic,retain) _PKInkAttributesPickerView * pickerView;                                //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode; 
@property (assign,nonatomic) double minimumOpacityValue;                                             //@synthesize minimumOpacityValue=_minimumOpacityValue - In the implementation block
@property (getter=isUpdatingOpacityValue,nonatomic,readonly) BOOL updatingOpacityValue;              //@synthesize updatingOpacityValue=_updatingOpacityValue - In the implementation block
@property (nonatomic,retain) PKInk * selectedInk; 
@property (nonatomic,retain) id<PKInkAttributesPickerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultMinimumOpacityValue;
-(void)viewWillLayoutSubviews;
-(id<PKInkAttributesPickerDelegate>)delegate;
-(void)setPickerView:(_PKInkAttributesPickerView *)arg1 ;
-(unsigned long long)displayMode;
-(void)setDelegate:(id<PKInkAttributesPickerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_updateUI;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(_PKInkAttributesPickerView *)pickerView;
-(id)initWithInk:(id)arg1 ;
-(PKInk *)selectedInk;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)setMinimumOpacityValue:(double)arg1 ;
-(void)setSelectedInk:(PKInk *)arg1 ;
-(BOOL)isUpdatingOpacityValue;
-(double)minimumOpacityValue;
-(void)setSelectedInk:(id)arg1 animated:(BOOL)arg2 ;
-(void)_notifyInkAttributesPickerDidChangeInk;
-(void)inkAttributesPickerViewDidChangeInkOpacity:(id)arg1 ;
-(void)inkAttributesPickerViewDidChangeInkThickness:(id)arg1 ;
-(void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)arg1 ;
-(void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)arg1 ;
@end

