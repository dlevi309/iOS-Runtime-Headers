/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class AKAuthorizationLoginChoice, UIImage;

@interface AKAuthorizationLoginChoiceCell : UITableViewCell {

	AKAuthorizationLoginChoice* _loginChoice;

}

@property (nonatomic,copy) AKAuthorizationLoginChoice * loginChoice;              //@synthesize loginChoice=_loginChoice - In the implementation block
@property (nonatomic,retain) UIImage * iconImage; 
-(UIImage *)iconImage;
-(void)layoutSubviews;
-(void)setIconImage:(UIImage *)arg1 ;
-(AKAuthorizationLoginChoice *)loginChoice;
-(void)setLoginChoice:(AKAuthorizationLoginChoice *)arg1 ;
-(id)initWithLoginChoice:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupFormat;
-(void)_setupContent;
@end

