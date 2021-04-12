/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUILabelBaselineProtocol.h>

@class VUIFeedbackTableLayout, NSArray, NSString;

@interface VUIFeedbackTableView : UIView <VUILabelBaselineProtocol> {

	VUIFeedbackTableLayout* _layout;
	NSArray* _dataModels;

}

@property (nonatomic,retain) VUIFeedbackTableLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSArray * dataModels;                         //@synthesize dataModels=_dataModels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)baselineOffsetFromBottom;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLayout:(VUIFeedbackTableLayout *)arg1 ;
-(VUIFeedbackTableLayout *)layout;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(void)prepareForCellReuse;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(NSArray *)dataModels;
-(void)setDataModels:(NSArray *)arg1 ;
-(CGSize)_calculateMaxDescriptionThatFit:(CGSize)arg1 ;
-(CGSize)_calculateMaxHeaderThatFits:(CGSize)arg1 ;
@end

