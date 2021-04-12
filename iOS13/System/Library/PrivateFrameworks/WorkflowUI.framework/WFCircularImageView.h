/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface WFCircularImageView : UIImageView {

	BOOL _circular;
	BOOL _hasBorder;

}

@property (assign,getter=isCircular,nonatomic) BOOL circular;              //@synthesize circular=_circular - In the implementation block
@property (assign,nonatomic) BOOL hasBorder;                               //@synthesize hasBorder=_hasBorder - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isCircular;
-(void)setCircular:(BOOL)arg1 ;
-(BOOL)hasBorder;
-(void)setHasBorder:(BOOL)arg1 ;
@end

