/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface UIKBRecentInputCell : UICollectionViewCell {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
+(id)textColorForRenderConfig:(id)arg1 isSelected:(BOOL)arg2 ;
+(id)titleAttributesForRenderConfig:(id)arg1 ;
-(void)dealloc;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setInputText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isFocused;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)_canFocusProgrammatically;
@end

