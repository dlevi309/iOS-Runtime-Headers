/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol AVTAttributeEditorSectionHeaderViewDelegate, AVTAvatarAttributeEditorSectionSupplementalPicker;
@class UILabel, UIButton, NSString;

@interface AVTAttributeEditorSectionHeaderView : UICollectionReusableView {

	id<AVTAttributeEditorSectionHeaderViewDelegate> _delegate;
	id<AVTAvatarAttributeEditorSectionSupplementalPicker> _supplementalPicker;
	UILabel* _label;
	UIButton* _accessoryButton;

}

@property (nonatomic,retain) UILabel * label;                                                                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIButton * accessoryButton;                                                            //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,copy) NSString * displayString; 
@property (assign,nonatomic,__weak) id<AVTAttributeEditorSectionHeaderViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker;              //@synthesize supplementalPicker=_supplementalPicker - In the implementation block
+(id)reuseIdentifier;
-(NSString *)displayString;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<AVTAttributeEditorSectionHeaderViewDelegate>)delegate;
-(BOOL)isRTL;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(id)chevronImage;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setDelegate:(id<AVTAttributeEditorSectionHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)supplementalPicker;
-(void)setSupplementalPicker:(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)shouldPresentAlert;
-(UIButton *)accessoryButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateButtonForSelectedSectionItem;
-(void)createAccessoryButtonIfNeeded;
-(UILabel *)label;
-(void)updateMenu;
@end

