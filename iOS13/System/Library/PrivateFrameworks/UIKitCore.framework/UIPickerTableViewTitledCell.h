/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPickerTableViewCell.h>

@class UILabel, UIColor, NSString, NSAttributedString;

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {

	UILabel* _titleLabel;
	BOOL _isAttributed;
	UIColor* _textColor;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) UILabel * _titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) BOOL _isAttributed;                              //@synthesize isAttributed=_isAttributed - In the implementation block
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)_titleLabel;
-(BOOL)_canBeReusedInPickerView;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 textColor:(id)arg3 forceTextAlignmentCentered:(BOOL)arg4 ;
-(BOOL)_isAttributed;
@end

