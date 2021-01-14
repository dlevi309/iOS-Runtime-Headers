/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class WFGlyphView;

@interface WFGlyphPickerCell : UICollectionViewCell {

	BOOL _outline;
	WFGlyphView* _glyphView;

}

@property (assign,nonatomic,__weak) WFGlyphView * glyphView;              //@synthesize glyphView=_glyphView - In the implementation block
@property (assign,nonatomic) unsigned short glyphCharacter; 
@property (assign,nonatomic) BOOL outline;                                //@synthesize outline=_outline - In the implementation block
-(id)accessibilityLabel;
-(BOOL)outline;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setGlyphView:(WFGlyphView *)arg1 ;
-(WFGlyphView *)glyphView;
-(void)setSelected:(BOOL)arg1 ;
-(unsigned long long)accessibilityTraits;
-(unsigned short)glyphCharacter;
-(void)setOutline:(BOOL)arg1 ;
-(void)setGlyphCharacter:(unsigned short)arg1 ;
@end

