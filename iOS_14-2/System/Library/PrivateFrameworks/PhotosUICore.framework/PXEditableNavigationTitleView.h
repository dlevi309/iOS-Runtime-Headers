/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PXEditableNavigationTitleViewDelegate;
@class NSString, _PXEditableNavigationTitleTextField;

@interface PXEditableNavigationTitleView : UIView <UITextFieldDelegate> {

	SCD_Struct_PX38 _needsUpdateFlags;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX59 _delegateRespondsTo;
	BOOL _editing;
	id<PXEditableNavigationTitleViewDelegate> _delegate;
	NSString* _text;
	_PXEditableNavigationTitleTextField* _textField;

}

@property (nonatomic,readonly) _PXEditableNavigationTitleTextField * textField;                      //@synthesize textField=_textField - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic,__weak) id<PXEditableNavigationTitleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                          //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXEditableNavigationTitleViewDelegate>)delegate;
-(void)setText:(NSString *)arg1 ;
-(void)_updateIfNeeded;
-(void)_invalidateTextColor;
-(void)_updateTextColorIfNeeded;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(BOOL)isEditing;
-(void)setDelegate:(id<PXEditableNavigationTitleViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)endEditing;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(NSString *)text;
-(void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2 ;
-(BOOL)_needsUpdate;
-(id)initWithCoder:(id)arg1 ;
-(_PXEditableNavigationTitleTextField *)textField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)_setNeedsUpdate;
-(void)dealloc;
@end

