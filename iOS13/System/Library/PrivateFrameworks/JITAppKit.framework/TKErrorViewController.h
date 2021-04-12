/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, NSString;

@interface TKErrorViewController : UIViewController {

	UILabel* _label;
	NSString* _message;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
+(id)viewControllerForMessage:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
@end

