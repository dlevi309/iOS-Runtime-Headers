/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isFocused;
-(void)layoutSubviews;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)_canFocusProgrammatically;
-(UILabel *)label;
-(void)dealloc;
-(void)setInputText:(id)arg1 ;
@end

