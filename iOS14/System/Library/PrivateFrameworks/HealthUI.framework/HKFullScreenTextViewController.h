/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UITextView;

@interface HKFullScreenTextViewController : UIViewController {

	NSString* _detailText;

}

@property (readonly) UITextView * textView; 
@property (nonatomic,copy) NSString * detailText;              //@synthesize detailText=_detailText - In the implementation block
-(UITextView *)textView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(id)description;
-(void)viewDidLoad;
-(NSString *)detailText;
-(void)createTextView;
@end

