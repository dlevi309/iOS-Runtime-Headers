/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/_PKInkAttributesPickerViewDelegate.h>

@protocol PKInkAttributesPickerDelegate;
@class _PKInkAttributesPickerView, PKInk, NSString;

@interface PKInkAttributesPicker : UIViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate> {

	id<PKInkAttributesPickerDelegate> _delegate;
	_PKInkAttributesPickerView* _pickerView;

}

@property (nonatomic,retain) _PKInkAttributesPickerView * pickerView;                 //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode; 
@property (nonatomic,retain) PKInk * selectedInk; 
@property (nonatomic,retain) id<PKInkAttributesPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKInkAttributesPickerDelegate>)delegate;
-(void)setDelegate:(id<PKInkAttributesPickerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)displayMode;
-(_PKInkAttributesPickerView *)pickerView;
-(void)setPickerView:(_PKInkAttributesPickerView *)arg1 ;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(id)initWithInk:(id)arg1 ;
-(PKInk *)selectedInk;
-(long long)colorUserInterfaceStyle;
-(void)setSelectedInk:(PKInk *)arg1 ;
-(void)setSelectedInk:(id)arg1 animated:(BOOL)arg2 ;
-(void)_notifyInkAttributesPickerDidChangeInk;
-(void)inkAttributesPickerViewDidChangeInkOpacity:(id)arg1 ;
-(void)inkAttributesPickerViewDidChangeInkThickness:(id)arg1 ;
-(void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)arg1 ;
-(void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)arg1 ;
@end

