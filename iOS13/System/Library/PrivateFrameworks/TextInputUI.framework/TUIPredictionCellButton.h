/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class TUIPredictionViewCell;

@interface TUIPredictionCellButton : UIButton {

	TUIPredictionViewCell* _cellView;

}

@property (nonatomic,readonly) TUIPredictionViewCell * cellView;              //@synthesize cellView=_cellView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(TUIPredictionViewCell *)cellView;
@end

