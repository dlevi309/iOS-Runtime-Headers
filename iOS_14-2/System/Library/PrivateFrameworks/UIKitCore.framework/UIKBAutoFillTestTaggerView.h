/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol UIKBAutoFillTestTaggerViewDelegate;
@class UIKBAutoFillTestTagRequest, UIPickerView, UIToolbar, UIBarButtonItem, UIVisualEffectView, UILabel, NSArray, NSString;

@interface UIKBAutoFillTestTaggerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIKBAutoFillTestTagRequest* _currentRequest;
	UIPickerView* _pickerView;
	UIToolbar* _toolbar;
	UIBarButtonItem* _nextBarButtoItem;
	UIBarButtonItem* _previousBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIVisualEffectView* _visualEffectView;
	UILabel* _titleLabel;
	id<UIKBAutoFillTestTaggerViewDelegate> _delegate;
	NSArray* _tagRequests;

}

@property (assign,nonatomic,__weak) id<UIKBAutoFillTestTaggerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * tagRequests;                                                 //@synthesize tagRequests=_tagRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<UIKBAutoFillTestTaggerViewDelegate>)delegate;
-(void)setDelegate:(id<UIKBAutoFillTestTaggerViewDelegate>)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)_formTypes;
-(NSArray *)tagRequests;
-(void)_previousBarButtonAction:(id)arg1 ;
-(void)_nextBarButtonAction:(id)arg1 ;
-(void)_doneBarButtonAction:(id)arg1 ;
-(void)_performTagRequest:(id)arg1 ;
-(id)_textFieldTypes;
-(void)_updateToolbarButtons;
-(void)setTagRequests:(NSArray *)arg1 ;
@end

