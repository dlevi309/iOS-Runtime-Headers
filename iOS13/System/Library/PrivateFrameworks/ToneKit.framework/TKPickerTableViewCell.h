/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UIColor;

@interface TKPickerTableViewCell : UITableViewCell {

	BOOL _shouldTintTextLabel;
	UIColor* _textLabelColor;

}

@property (nonatomic,retain) UIColor * textLabelColor;              //@synthesize textLabelColor=_textLabelColor - In the implementation block
@property (assign,nonatomic) BOOL shouldTintTextLabel;              //@synthesize shouldTintTextLabel=_shouldTintTextLabel - In the implementation block
-(void)tintColorDidChange;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_updateTextLabelColor;
-(void)setTextLabelColor:(UIColor *)arg1 ;
-(void)setShouldTintTextLabel:(BOOL)arg1 ;
-(UIColor *)textLabelColor;
-(BOOL)shouldTintTextLabel;
@end

