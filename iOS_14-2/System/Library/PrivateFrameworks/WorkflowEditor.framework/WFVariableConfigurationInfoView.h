/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)updateLabel;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setHeading:(NSString *)arg1 ;
-(void)setSubheading:(NSString *)arg1 ;
-(NSString *)subheading;
@end

