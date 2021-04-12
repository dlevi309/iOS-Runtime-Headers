/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

@class PRXButton, NSArray;


@protocol PRXCardContentViewDelegate <NSObject>
@property (nonatomic,retain) PRXButton * dismissButton; 
@property (nonatomic,copy) NSArray * actionButtons; 
@required
-(void)setActionButtons:(id)arg1;
-(NSArray *)actionButtons;
-(void)setDismissButton:(id)arg1;
-(PRXButton *)dismissButton;

@end

