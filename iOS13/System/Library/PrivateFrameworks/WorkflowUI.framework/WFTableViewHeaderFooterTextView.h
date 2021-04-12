/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, NSString;

@interface WFTableViewHeaderFooterTextView : UITableViewHeaderFooterView {

	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(id)init;
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

