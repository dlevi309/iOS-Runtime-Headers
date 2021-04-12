/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setHintLabel:(UILabel *)arg1 ;
-(UILabel *)hintLabel;
-(void)setHintText:(NSString *)arg1 ;
-(NSString *)hintText;
@end

