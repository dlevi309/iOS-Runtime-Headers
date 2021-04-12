/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class WFGlyphView;

@interface WFGlyphPickerCell : UICollectionViewCell {

	WFGlyphView* _glyphView;

}

@property (assign,nonatomic,__weak) WFGlyphView * glyphView;              //@synthesize glyphView=_glyphView - In the implementation block
@property (assign,nonatomic) unsigned short glyphCharacter; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setSelected:(BOOL)arg1 ;
-(WFGlyphView *)glyphView;
-(void)setGlyphView:(WFGlyphView *)arg1 ;
-(unsigned short)glyphCharacter;
-(void)setGlyphCharacter:(unsigned short)arg1 ;
@end

