/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUILabelTopMarginCalculationProtocol.h>

@class VUIFeedbackTableLayout, NSArray;

@interface VUIFeedbackTableView : UIView <VUILabelTopMarginCalculationProtocol> {

	VUIFeedbackTableLayout* _layout;
	NSArray* _dataModels;

}

@property (nonatomic,retain) VUIFeedbackTableLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSArray * dataModels;                         //@synthesize dataModels=_dataModels - In the implementation block
-(id)init;
-(VUIFeedbackTableLayout *)layout;
-(void)setLayout:(VUIFeedbackTableLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(void)prepareForCellReuse;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(NSArray *)dataModels;
-(void)setDataModels:(NSArray *)arg1 ;
-(CGSize)_calculateMaxDescriptionThatFit:(CGSize)arg1 ;
-(CGSize)_calculateMaxHeaderThatFits:(CGSize)arg1 ;
@end

