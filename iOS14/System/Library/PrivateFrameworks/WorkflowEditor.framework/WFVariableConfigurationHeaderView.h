/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFVariableConfigurationHeaderViewDelegate;
@class UIButton, UIImage, NSString;

@interface WFVariableConfigurationHeaderView : UIView {

	id<WFVariableConfigurationHeaderViewDelegate> _delegate;
	UIButton* _titleButton;
	UIButton* _typeButton;

}

@property (assign,nonatomic,__weak) UIButton * titleButton;                                              //@synthesize titleButton=_titleButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * typeButton;                                               //@synthesize typeButton=_typeButton - In the implementation block
@property (nonatomic,retain) UIImage * variableIcon; 
@property (nonatomic,copy) NSString * variableTitle; 
@property (nonatomic,copy) NSString * variableType; 
@property (assign,nonatomic) BOOL showsVariableType; 
@property (assign,nonatomic,__weak) id<WFVariableConfigurationHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<WFVariableConfigurationHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<WFVariableConfigurationHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIButton *)titleButton;
-(void)setTitleButton:(UIButton *)arg1 ;
-(void)setShowsVariableType:(BOOL)arg1 ;
-(void)setVariableType:(NSString *)arg1 ;
-(void)setVariableTitle:(NSString *)arg1 ;
-(void)setVariableIcon:(UIImage *)arg1 ;
-(UIImage *)variableIcon;
-(NSString *)variableTitle;
-(NSString *)variableType;
-(BOOL)showsVariableType;
-(void)typeButtonTapped;
-(UIButton *)typeButton;
-(void)setTypeButton:(UIButton *)arg1 ;
@end

