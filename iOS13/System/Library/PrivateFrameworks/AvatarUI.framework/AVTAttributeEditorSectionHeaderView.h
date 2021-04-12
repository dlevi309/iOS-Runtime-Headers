/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol AVTAttributeEditorSectionHeaderViewDelegate, AVTAvatarAttributeEditorHeaderPicker;
@class UILabel, UIButton, NSString;

@interface AVTAttributeEditorSectionHeaderView : UICollectionReusableView {

	id<AVTAttributeEditorSectionHeaderViewDelegate> _delegate;
	id<AVTAvatarAttributeEditorHeaderPicker> _accessoryPicker;
	UILabel* _label;
	UIButton* _accessoryButton;

}

@property (nonatomic,retain) UILabel * label;                                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIButton * accessoryButton;                                                   //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,copy) NSString * displayString; 
@property (assign,nonatomic,__weak) id<AVTAttributeEditorSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<AVTAvatarAttributeEditorHeaderPicker> accessoryPicker;                     //@synthesize accessoryPicker=_accessoryPicker - In the implementation block
+(id)reuseIdentifier;
-(id<AVTAttributeEditorSectionHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<AVTAttributeEditorSectionHeaderViewDelegate>)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(BOOL)isRTL;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(UIButton *)accessoryButton;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(void)pickerButtonTapped;
-(id<AVTAvatarAttributeEditorHeaderPicker>)accessoryPicker;
-(void)updateButtonForSelectedSectionItem;
-(void)createAccessoryButtonIfNeeded;
-(BOOL)shouldPresentAlert;
-(void)setAccessoryPicker:(id<AVTAvatarAttributeEditorHeaderPicker>)arg1 ;
@end

