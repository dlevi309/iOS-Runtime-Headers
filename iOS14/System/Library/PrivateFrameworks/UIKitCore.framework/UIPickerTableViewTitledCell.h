/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSAttributedString *)attributedTitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)prepareForReuse;
-(BOOL)_isAttributed;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 textColor:(id)arg3 forceTextAlignmentCentered:(BOOL)arg4 ;
-(UILabel *)_titleLabel;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(NSString *)title;
-(BOOL)_canBeReusedInPickerView;
@end

