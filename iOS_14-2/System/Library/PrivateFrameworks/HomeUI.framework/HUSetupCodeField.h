/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol HUSetupCodeFieldDelegate;
@class NSArray, HUSetupCodeFieldItem, UITextField, UIStackView, NSString;

@interface HUSetupCodeField : UIView <UITextFieldDelegate> {

	id<HUSetupCodeFieldDelegate> _delegate;
	NSArray* _items;
	HUSetupCodeFieldItem* _activeItem;
	double _itemSpacing;
	UITextField* _hiddenInputField;
	UIStackView* _codeFieldItemsView;

}

@property (assign,nonatomic,__weak) HUSetupCodeFieldItem * activeItem;                  //@synthesize activeItem=_activeItem - In the implementation block
@property (nonatomic,retain) UITextField * hiddenInputField;                            //@synthesize hiddenInputField=_hiddenInputField - In the implementation block
@property (nonatomic,retain) UIStackView * codeFieldItemsView;                          //@synthesize codeFieldItemsView=_codeFieldItemsView - In the implementation block
@property (assign,nonatomic,__weak) id<HUSetupCodeFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) double itemSpacing;                                        //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (nonatomic,readonly) NSString * setupCode; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(BOOL)isComplete;
-(double)itemSpacing;
-(id)init;
-(id<HUSetupCodeFieldDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(NSArray *)items;
-(void)setDelegate:(id<HUSetupCodeFieldDelegate>)arg1 ;
-(void)setActiveItem:(HUSetupCodeFieldItem *)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(NSString *)setupCode;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithCodeDigits:(unsigned long long)arg1 ;
-(void)_updateInterfaceForCurrentTraitCollection;
-(void)_setupCodeFieldItems;
-(void)fieldTapped:(id)arg1 ;
-(HUSetupCodeFieldItem *)activeItem;
-(UITextField *)hiddenInputField;
-(void)showKeypad;
-(UIStackView *)codeFieldItemsView;
-(void)_activateNext;
-(void)_activateLast;
-(void)hideKeypad;
-(void)setHiddenInputField:(UITextField *)arg1 ;
-(void)setCodeFieldItemsView:(UIStackView *)arg1 ;
@end

