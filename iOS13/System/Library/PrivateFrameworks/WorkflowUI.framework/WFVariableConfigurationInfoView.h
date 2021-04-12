/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface WFVariableConfigurationInfoView : UIView {

	NSString* _heading;
	NSString* _subheading;
	UILabel* _textLabel;

}

@property (assign,nonatomic,__weak) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,copy) NSString * heading;                        //@synthesize heading=_heading - In the implementation block
@property (nonatomic,copy) NSString * subheading;                     //@synthesize subheading=_subheading - In the implementation block
-(NSString *)heading;
-(void)setHeading:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)updateLabel;
-(void)setSubheading:(NSString *)arg1 ;
-(NSString *)subheading;
@end

