/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)viewDidLoad;
-(void)loadView;
@end

