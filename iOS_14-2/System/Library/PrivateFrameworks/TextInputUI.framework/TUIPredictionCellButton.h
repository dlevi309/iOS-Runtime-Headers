/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TUIPredictionViewCell *)cellView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
@end

