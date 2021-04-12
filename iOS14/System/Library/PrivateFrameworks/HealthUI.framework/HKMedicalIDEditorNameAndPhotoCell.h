/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPhoto:(UIImage *)arg1 ;
-(UIImage *)photo;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(CGRect)_separatorFrame;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(NSString *)name;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(UIButton *)editPhotoButton;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIButton *)editPhotoLabelButton;
-(void)_adjustEditPhotoButtonFontSizeIfNecessary;
-(void)_largeTextLayoutSubviews;
-(void)_regularLayoutSubviews;
@end

