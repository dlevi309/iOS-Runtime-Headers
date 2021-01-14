/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSString *)errorMessage;
-(id)initWithMessage:(id)arg1 ;
-(void)viewDidLoad;
-(UILabel *)label;
@end

