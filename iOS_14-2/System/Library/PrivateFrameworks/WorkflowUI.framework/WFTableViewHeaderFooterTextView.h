/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, NSArray, NSString;

@interface WFTableViewHeaderFooterTextView : UITableViewHeaderFooterView {

	double _horizontalPadding;
	UILabel* _label;
	NSArray* _horizontalConstraints;

}

@property (nonatomic,readonly) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSArray * horizontalConstraints;              //@synthesize horizontalConstraints=_horizontalConstraints - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double horizontalPadding;                       //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
-(id)init;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)horizontalConstraints;
-(double)horizontalPadding;
-(NSString *)text;
-(void)setHorizontalPadding:(double)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UILabel *)label;
@end

