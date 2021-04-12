/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIView, UILabel;

@interface WFTextEditingHintView : UIView {

	NSString* _hintText;
	UIView* _backgroundView;
	UILabel* _hintLabel;

}

@property (assign,nonatomic,__weak) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * hintLabel;                  //@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,copy) NSString * hintText;                           //@synthesize hintText=_hintText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setHintLabel:(UILabel *)arg1 ;
-(UILabel *)hintLabel;
-(void)setHintText:(NSString *)arg1 ;
-(NSString *)hintText;
@end

