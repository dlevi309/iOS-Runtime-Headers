/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKMedicalIDEditorMultilineStringCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UIView, UIButton, NSString, UIImage;

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell <UITextViewDelegate> {

	UIView* _nameBottomSeparator;
	UIButton* _editPhotoButton;
	UIButton* _editPhotoLabelButton;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) UIImage * photo; 
@property (nonatomic,readonly) UIButton * editPhotoButton;                   //@synthesize editPhotoButton=_editPhotoButton - In the implementation block
@property (nonatomic,readonly) UIButton * editPhotoLabelButton;              //@synthesize editPhotoLabelButton=_editPhotoLabelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showsLabelAndValue;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(CGRect)_separatorFrame;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
-(UIButton *)editPhotoButton;
-(UIButton *)editPhotoLabelButton;
-(void)_adjustEditPhotoButtonFontSizeIfNecessary;
-(void)_largeTextLayoutSubviews;
-(void)_regularLayoutSubviews;
@end

