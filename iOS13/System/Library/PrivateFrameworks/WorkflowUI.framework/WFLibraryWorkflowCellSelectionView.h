/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WFCircularGlyphView;

@interface WFLibraryWorkflowCellSelectionView : UIView {

	WFCircularGlyphView* _selectedCheckmarkView;
	WFCircularGlyphView* _unselectedCheckmarkView;
	CGRect _glyphFrame;

}

@property (nonatomic,retain) WFCircularGlyphView * selectedCheckmarkView;                //@synthesize selectedCheckmarkView=_selectedCheckmarkView - In the implementation block
@property (nonatomic,retain) WFCircularGlyphView * unselectedCheckmarkView;              //@synthesize unselectedCheckmarkView=_unselectedCheckmarkView - In the implementation block
@property (assign,nonatomic) BOOL selected; 
@property (assign,nonatomic) CGRect glyphFrame;                                          //@synthesize glyphFrame=_glyphFrame - In the implementation block
-(id)init;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(WFCircularGlyphView *)selectedCheckmarkView;
-(WFCircularGlyphView *)unselectedCheckmarkView;
-(void)setGlyphFrame:(CGRect)arg1 ;
-(CGRect)glyphFrame;
-(void)setSelectedCheckmarkView:(WFCircularGlyphView *)arg1 ;
-(void)setUnselectedCheckmarkView:(WFCircularGlyphView *)arg1 ;
@end

