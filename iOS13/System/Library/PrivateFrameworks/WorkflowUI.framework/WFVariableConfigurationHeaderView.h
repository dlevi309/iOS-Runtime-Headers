/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
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
+(id)disclosureImage;
-(id<WFVariableConfigurationHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<WFVariableConfigurationHeaderViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)titleButton;
-(void)setTitleButton:(UIButton *)arg1 ;
-(UIImage *)variableIcon;
-(void)setVariableIcon:(UIImage *)arg1 ;
-(NSString *)variableTitle;
-(void)setVariableTitle:(NSString *)arg1 ;
-(NSString *)variableType;
-(void)setVariableType:(NSString *)arg1 ;
-(BOOL)showsVariableType;
-(void)setShowsVariableType:(BOOL)arg1 ;
-(void)typeButtonTapped;
-(UIButton *)typeButton;
-(void)setTypeButton:(UIButton *)arg1 ;
@end

