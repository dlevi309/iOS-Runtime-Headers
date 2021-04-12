/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UITextView;

@interface HKFullScreenTextViewController : UIViewController {

	NSString* _detailText;

}

@property (readonly) UITextView * textView; 
@property (nonatomic,copy) NSString * detailText;              //@synthesize detailText=_detailText - In the implementation block
-(id)description;
-(UITextView *)textView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(void)createTextView;
@end

