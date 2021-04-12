/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class NSString, UILabel;

@interface CNErrorViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {

	NSString* _errorMessage;
	UILabel* _label;

}

@property (nonatomic,copy,readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)label;
-(NSString *)errorMessage;
-(id)initWithMessage:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)viewDidLoad;
@end

