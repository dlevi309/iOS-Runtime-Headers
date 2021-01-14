/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class UIView;


@protocol CNUIObjectViewController <NSObject>
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
@required
-(UIView *)view;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
-(void)setObjectViewControllerDelegate:(id)arg1;

@end

