/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <PlatterKit/PLTitledPlatterView.h>

@protocol WFCompactTitledPlatterViewDelegate;
@interface WFCompactTitledPlatterView : PLTitledPlatterView {

	id<WFCompactTitledPlatterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFCompactTitledPlatterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFCompactTitledPlatterViewDelegate>)delegate;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(void)setDelegate:(id<WFCompactTitledPlatterViewDelegate>)arg1 ;
-(void)layoutSubviews;
@end

